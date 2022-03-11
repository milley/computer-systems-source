	.file	"fix_probe_ele.c"
	.text
	.globl	fix_probe_ele
	.type	fix_probe_ele, @function
fix_probe_ele:
.LFB0:
	.cfi_startproc
	movl	$0, %eax
	movl	$0, %r8d
.L2:
	cmpq	$15, %r8
	jg	.L4
	movq	%rdx, %r10
	salq	$6, %r10
	addq	%rdi, %r10
	movq	%r8, %r9
	salq	$6, %r9
	addq	%rsi, %r9
	movl	(%r9,%rcx,4), %r9d
	imull	(%r10,%r8,4), %r9d
	addl	%r9d, %eax
	addq	$1, %r8
	jmp	.L2
.L4:
	ret
	.cfi_endproc
.LFE0:
	.size	fix_probe_ele, .-fix_probe_ele
	.ident	"GCC: (GNU) 8.5.0 20210514 (Red Hat 8.5.0-4)"
	.section	.note.GNU-stack,"",@progbits
