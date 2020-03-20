	.file	"ans_3_20.c"
	.text
	.globl	arith
	.type	arith, @function
arith:
.LFB0:
	.cfi_startproc
	leaq	7(%rdi), %rax
	testq	%rdi, %rdi
	cmovns	%rdi, %rax
	sarq	$3, %rax
	ret
	.cfi_endproc
.LFE0:
	.size	arith, .-arith
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
