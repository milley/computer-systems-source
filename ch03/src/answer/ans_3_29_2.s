	.file	"ans_3_29_2.c"
	.text
	.globl	sum
	.type	sum, @function
sum:
.LFB0:
	.cfi_startproc
	jmp	.L2
.L3:
	addq	$1, %rax
.L2:
	cmpq	$9, %rax
	jle	.L3
	rep ret
	.cfi_endproc
.LFE0:
	.size	sum, .-sum
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
