	.file	"fact_while_gd_goto.c"
	.text
	.globl	fact_while_gd_goto
	.type	fact_while_gd_goto, @function
fact_while_gd_goto:
.LFB0:
	.cfi_startproc
	cmpq	$1, %rdi
	jle	.L4
	movl	$1, %eax
.L3:
	imulq	%rdi, %rax
	subq	$1, %rdi
	cmpq	$1, %rdi
	jne	.L3
	rep ret
.L4:
	movl	$1, %eax
.L2:
	ret
	.cfi_endproc
.LFE0:
	.size	fact_while_gd_goto, .-fact_while_gd_goto
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
