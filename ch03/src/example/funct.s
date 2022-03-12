	.file	"funct.c"
	.text
	.globl	funct
	.type	funct, @function
funct:
.LFB0:
	.cfi_startproc
	cvtss2sd	%xmm1, %xmm1
	mulsd	%xmm0, %xmm1
	pxor	%xmm0, %xmm0
	cvtsi2sd	%edi, %xmm0
	divsd	%xmm0, %xmm2
	subsd	%xmm2, %xmm1
	movapd	%xmm1, %xmm0
	ret
	.cfi_endproc
.LFE0:
	.size	funct, .-funct
	.ident	"GCC: (GNU) 8.5.0 20210514 (Red Hat 8.5.0-4)"
	.section	.note.GNU-stack,"",@progbits
