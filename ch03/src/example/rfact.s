	.file	"rfact.c"
	.text
	.globl	rfact
	.type	rfact, @function
rfact:
.LFB0:
	.cfi_startproc
	cmpq	$1, %rdi
	jg	.L8
	movl	$1, %eax
	ret
.L8:
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	movq	%rdi, %rbx
	leaq	-1(%rdi), %rdi
	call	rfact
	imulq	%rbx, %rax
	popq	%rbx
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE0:
	.size	rfact, .-rfact
	.ident	"GCC: (GNU) 8.5.0 20210514 (Red Hat 8.5.0-4)"
	.section	.note.GNU-stack,"",@progbits
