	.file	"ans_3_12.c"
	.text
	.globl	uremdiv
	.type	uremdiv, @function
uremdiv:
.LFB0:
	.cfi_startproc
	movq	%rdi, %rax
	movq	%rdx, %rdi
	movl	$0, %edx
	divq	%rsi
	movq	%rax, (%rdi)
	movq	%rdx, (%rcx)
	ret
	.cfi_endproc
.LFE0:
	.size	uremdiv, .-uremdiv
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
