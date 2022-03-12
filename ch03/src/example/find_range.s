	.file	"find_range.c"
	.text
	.globl	find_range
	.type	find_range, @function
find_range:
.LFB0:
	.cfi_startproc
	pxor	%xmm1, %xmm1
	comiss	%xmm0, %xmm1
	ja	.L5
	ucomiss	%xmm1, %xmm0
	jp	.L8
	jne	.L8
	movl	$1, %eax
	ret
.L8:
	comiss	.LC0(%rip), %xmm0
	jbe	.L10
	movl	$2, %eax
	ret
.L5:
	movl	$0, %eax
	ret
.L10:
	movl	$3, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	find_range, .-find_range
	.section	.rodata.cst4,"aM",@progbits,4
	.align 4
.LC0:
	.long	0
	.ident	"GCC: (GNU) 8.5.0 20210514 (Red Hat 8.5.0-4)"
	.section	.note.GNU-stack,"",@progbits
