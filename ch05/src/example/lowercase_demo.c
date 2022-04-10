#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAX_LEN 1000000

/* Convert string to lowercase: slow */
void lower1(char *s)
{
    long i;

    for (i = 0; i < strlen(s); i++)
	if (s[i] >= 'A' && s[i] <= 'Z')
	    s[i] -= ('A' - 'a');
}

/* Convert string to lowercase: fast */
void lower2(char *s)
{
    long i;
    long len = strlen(s);

    for (i = 0; i < len; i++)
	if (s[i] >= 'A' && s[i] <= 'Z')
	    s[i] -= ('A' - 'a');
}

int main()
{
    char s[MAX_LEN] = {0};
    for (long i = 0; i < MAX_LEN; i++) {
	s[i] = 'A';
    }

    clock_t t;
    t = clock();
    lower1(s);
    t = clock() - t;
    double time_taken = ((double)t) / CLOCKS_PER_SEC;
    printf("lower1() took %f seconds to execute \n", time_taken);

    t = clock();
    lower2(s);
    t = clock() - t;
    time_taken = ((double)t) / CLOCKS_PER_SEC;
    printf("lower2() took %f seconds to execute \n", time_taken);

}
