	.file	"sum.c"
	.text
	.globl	sum
	.type	sum, @function
sum:
.LFB0:
	.cfi_startproc
	movl	$0, %eax
.L2:
	testq	%rsi, %rsi
	je	.L4
	addq	(%rdi), %rax
	addq	$8, %rdi
	subq	$1, %rsi
	jmp	.L2
.L4:
	ret
	.cfi_endproc
.LFE0:
	.size	sum, .-sum
	.ident	"GCC: (GNU) 8.5.0 20210514 (Red Hat 8.5.0-4)"
	.section	.note.GNU-stack,"",@progbits
