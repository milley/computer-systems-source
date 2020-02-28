# 3.3

```assembly
movb $0xF, (%ebx)      Cannot use %ebx as address register
movl %rax, (%rsp)      Nismatch between instruction suffix and register ID
movw (%rax), 4(%rsp)   Cannot have both source and destination be memory reference
movb %al, %sl          No register named %sl
movq %rax, $0x123      Cannot have immediate as destination
movl %eax, %rdx        Destination operand incorrect size
movb %si, 8(%rbp)      Mismatch between instruction suffix and register ID
```
