	.file	"fcvt.c"
	.text
	.globl	fcvt
	.type	fcvt, @function
fcvt:
.LFB0:
	.cfi_startproc
	movss	(%rsi), %xmm0
	movq	(%rcx), %rax
	cvttsd2siq	(%rdx), %r8
	movq	%r8, (%rcx)
	pxor	%xmm1, %xmm1
	cvtsi2ss	%edi, %xmm1
	movss	%xmm1, (%rsi)
	pxor	%xmm1, %xmm1
	cvtsi2sdq	%rax, %xmm1
	movsd	%xmm1, (%rdx)
	cvtss2sd	%xmm0, %xmm0
	ret
	.cfi_endproc
.LFE0:
	.size	fcvt, .-fcvt
	.ident	"GCC: (GNU) 8.5.0 20210514 (Red Hat 8.5.0-4)"
	.section	.note.GNU-stack,"",@progbits
