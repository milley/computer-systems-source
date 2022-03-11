	.file	"var_prod_ele_opt.c"
	.text
	.globl	var_prod_ele_opt
	.type	var_prod_ele_opt, @function
var_prod_ele_opt:
.LFB0:
	.cfi_startproc
	leaq	0(,%rdi,4), %r11
	imulq	%rdi, %rcx
	leaq	(%rdx,%r8,4), %r9
	movl	$0, %edx
	movl	$0, %eax
.L2:
	cmpq	%rdx, %rdi
	jle	.L4
	leaq	(%rcx,%rdx), %r10
	movl	(%r9), %r8d
	imull	(%rsi,%r10,4), %r8d
	addl	%r8d, %eax
	addq	%r11, %r9
	addq	$1, %rdx
	jmp	.L2
.L4:
	ret
	.cfi_endproc
.LFE0:
	.size	var_prod_ele_opt, .-var_prod_ele_opt
	.ident	"GCC: (GNU) 8.5.0 20210514 (Red Hat 8.5.0-4)"
	.section	.note.GNU-stack,"",@progbits
