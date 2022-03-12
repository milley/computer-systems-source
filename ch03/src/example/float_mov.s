	.file	"float_mov.c"
	.text
	.globl	float_mov
	.type	float_mov, @function
float_mov:
.LFB0:
	.cfi_startproc
	movss	(%rdi), %xmm1
	movss	%xmm0, (%rsi)
	movaps	%xmm1, %xmm0
	ret
	.cfi_endproc
.LFE0:
	.size	float_mov, .-float_mov
	.ident	"GCC: (GNU) 8.5.0 20210514 (Red Hat 8.5.0-4)"
	.section	.note.GNU-stack,"",@progbits
