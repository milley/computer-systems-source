	.file	"ans_3_27.c"
	.text
	.globl	fact_for_gd_goto
	.type	fact_for_gd_goto, @function
fact_for_gd_goto:
.LFB0:
	.cfi_startproc
	cmpq	$1, %rdi
	jle	.L4
	movl	$1, %eax
	movl	$2, %edx
.L3:
	imulq	%rdx, %rax
	addq	$1, %rdx
	cmpq	%rdx, %rdi
	jge	.L3
	rep ret
.L4:
	movl	$1, %eax
.L2:
	ret
	.cfi_endproc
.LFE0:
	.size	fact_for_gd_goto, .-fact_for_gd_goto
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
