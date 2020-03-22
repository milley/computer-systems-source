	.file	"fact_do_goto.c"
	.text
	.globl	fact_do_goto
	.type	fact_do_goto, @function
fact_do_goto:
.LFB0:
	.cfi_startproc
	movl	$1, %eax
.L2:
	imulq	%rdi, %rax
	subq	$1, %rdi
	cmpq	$1, %rdi
	jg	.L2
	rep ret
	.cfi_endproc
.LFE0:
	.size	fact_do_goto, .-fact_do_goto
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
