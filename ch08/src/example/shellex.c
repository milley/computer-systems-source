#include "csapp.h"
#define MAXARGS 128

/* Function prototype */
void eval(char *cmdline);
int parseline(char *buf, char **argv);
int buildin_command(char **argv);

int main()
{
    char cmdline[MAXLINE];  /* command line */

    while (1) {
        /* Read */
        printf("> ");
        Fgets(cmdline, MAXLINE, stdin);
        if (feof(stdin))
            exit(0);

        /* Evaluate */
        eval(cmdline);
    }
}

/* eval - Evaluate a command line */
void eval(char *cmdline)
{
    char *argv[MAXARGS]; /* Argument list execve() */
    char buf[MAXLINE]; /* Holds modified command line */
    int bg; /* Should the job run in bg or fg? */
    pid_t pid; /* Process id */

    strcpy(buf, cmdline);
    bg = parseline(buf, argv);
    if (argv[0] == NULL)
        return;  /* Ignore emtpy lines */

    if (!buildin_command(argv)) {
        if ((pid = Fork()) == 0) {
            if (execve(argv[0], argv, environ) < 0) {
                printf("%s: Command not found.\n", argv[0]);
                exit(0);
            }
        }

        /* Parent waits for foreground job to terminate */
        if (!bg) {
            int status;
            if (waitpid(pid, &status, 0) < 0)
                unix_error("waitfg: waitpid error");
        } else
        {
            printf("%d %s", pid, cmdline);
        }
    }
    return;
}

/* If first arg is a buildin command, run it and return true */
int buildin_command(char **argv)
{
    if (!strcmp(argv[0], "quit"))  /* quit command */
        exit(0);
    if (!strcmp(argv[0], "&"))  /* Ignore singleton & */
        return 1;
    return 0;  /* Not a buildin command */
}

/* Parseline - Parse the command line and build the argv array */
int parseline(char *buf, char **argv)
{
    char *delim;  /* Points to first space delimiter */
    int argc;  /* Number of args */
    int bg;  /* Background job? */

    buf[strlen(buf) - 1] = ' ';  /* Replace trailing '\n' with space */
    while (*buf && (*buf == ' '))  /* Ignore leading spaces */
        buf++;

    /* Build the argv list */
    argc = 0;
    while ((delim = strchr(buf, ' '))) {
        argv[argc++] = buf;
        *delim = '\0';
        buf = delim + 1;
        while (*buf && (*buf == ' '))  /* Ignore spaces */
            buf++;
    }
    argv[argc] = NULL;

    if (argc == 0)  /* Ignore blank line */
        return 1;

    /* Should the job run in the background ? */
    if ((bg = (*argv[argc - 1] == '&')) != 0)
        argv[--argc] = NULL;

    return bg;
}
