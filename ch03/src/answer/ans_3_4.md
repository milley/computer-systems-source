# 3.3.4

| src_t | dest_t | 指令 | 注释 |
|-----|-----|--------|--------|
| long | long | movq(%rdi),%rax | 读8个字节 |
| long | long | movq %rax,(%rsi) | 存8个字节 |
| char | int | movsbl(%rdi),%eax | 将char转换成int |
| char | int | movl %eax,(%rsi) | 存4个字节 |
| char | unsigned | movsbl(%rdi),%eax | 将char转换成int |
| char | unsigned | movl %eax,(%rsi) | 存4个字节 |
| unsigned char | long | movzbl(%rdi),%eax | 读一个字节并零扩展 |
| unsigned char | long | movq %rax,(%rsi) | 存8个字节 |
| int | char | movl(%rdi),%eax | 读4个字节 |
| int | char | movb %al,(%rsi) | 存低位字节 |
| unsigned | unsigned char | movl(%rdi),%eax | 读4个字节 |
| unsigned | unsigned char | movb %al,(%rsi) | 存低位字节 |
| char | short | movsbw(%rdi),%ax | 读一个字节并符号扩展 |
| char | short | movw %ax,(%rsi) | 存2个字节 |
