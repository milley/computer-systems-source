	.file	"var_prod_ele.c"
	.text
	.globl	var_prod_ele
	.type	var_prod_ele, @function
var_prod_ele:
.LFB0:
	.cfi_startproc
	movq	%rdi, %r11
	movl	$0, %eax
	movl	$0, %r9d
.L2:
	cmpq	%r9, %rdi
	jle	.L4
	movq	%r9, %rcx
	imulq	%r11, %rcx
	salq	$2, %rcx
	leaq	(%rsi,%rcx), %r10
	addq	%rdx, %rcx
	movl	(%rcx,%r8,4), %ecx
	imull	(%r10,%r9,4), %ecx
	addl	%ecx, %eax
	addq	$1, %r9
	jmp	.L2
.L4:
	ret
	.cfi_endproc
.LFE0:
	.size	var_prod_ele, .-var_prod_ele
	.ident	"GCC: (GNU) 8.5.0 20210514 (Red Hat 8.5.0-4)"
	.section	.note.GNU-stack,"",@progbits
