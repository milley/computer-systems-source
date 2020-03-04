# 3.6

| 表达式 | 结果 |
|----------|--------|
| leaq 6(%eax),%rdx | x + 6 |
| leaq (%rax,%rcx),%rdx | x + y |
| leaq (%rax,%rcx,4),%rdx | x + y * 4 |
| leaq 7(%rax,%rax,8),%rdx | x * 9 + 7 |
| leaq 0xA(,%rcx,4),%rdx | y * 4 + 10 |
| leaq 9(%rax,%rcx,2),%rdx | x + y * 2 + 9 |
