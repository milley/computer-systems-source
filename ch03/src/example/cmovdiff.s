	.file	"cmovdiff.c"
	.text
	.globl	cmovdiff
	.type	cmovdiff, @function
cmovdiff:
.LFB0:
	.cfi_startproc
	movq	%rsi, %rdx
	subq	%rdi, %rdx
	movq	%rdi, %rax
	subq	%rsi, %rax
	cmpq	%rdi, %rsi
	jg	.L3
.L1:
	rep ret
.L3:
	movq	%rdx, %rax
	jmp	.L1
	.cfi_endproc
.LFE0:
	.size	cmovdiff, .-cmovdiff
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
