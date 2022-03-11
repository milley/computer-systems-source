	.file	"fix_probe_ele_opt.c"
	.text
	.globl	fix_probe_ele_opt
	.type	fix_probe_ele_opt, @function
fix_probe_ele_opt:
.LFB0:
	.cfi_startproc
	salq	$6, %rdx
	addq	%rdx, %rdi
	salq	$2, %rcx
	leaq	(%rsi,%rcx), %rdx
	leaq	1024(%rsi,%rcx), %rsi
	movl	$0, %eax
.L2:
	movl	(%rdx), %ecx
	imull	(%rdi), %ecx
	addl	%ecx, %eax
	addq	$4, %rdi
	addq	$64, %rdx
	cmpq	%rdx, %rsi
	jne	.L2
	ret
	.cfi_endproc
.LFE0:
	.size	fix_probe_ele_opt, .-fix_probe_ele_opt
	.ident	"GCC: (GNU) 8.5.0 20210514 (Red Hat 8.5.0-4)"
	.section	.note.GNU-stack,"",@progbits
