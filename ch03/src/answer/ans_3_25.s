	.file	"ans_3_25.c"
	.text
	.globl	loop_while2
	.type	loop_while2, @function
loop_while2:
.LFB0:
	.cfi_startproc
	movq	%rsi, %rax
	jmp	.L2
.L3:
	imulq	%rdi, %rax
	subq	%rdi, %rsi
.L2:
	testq	%rsi, %rsi
	jg	.L3
	rep ret
	.cfi_endproc
.LFE0:
	.size	loop_while2, .-loop_while2
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
