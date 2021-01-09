#comment outside main
.section .text
.global main
foo:
push %rbp
mov %rsp, %rbp

lea fmt(%rip), %rdi
mov $10, %rsi
mov $34, %rdx
lea fmt(%rip), %rcx
xor %rax, %rax
call printf@plt

mov %rbp, %rsp
pop %rbp
ret

main:
push %rbp
mov %rsp, %rbp

xor %rax, %rax
#calling foo
call foo

mov %rbp, %rsp
pop %rbp
ret

.section .data
fmt: .asciz "#comment outside main%1$c.section .text%1$c.global main%1$cfoo:%1$cpush %rbp%1$cmov %rsp, %rbp%1$clea fmt(%rip), %rdi%1$cmov $10, %rsi%1$cmov $34, %rdx%1$clea fmt(%rip), %rcx%1$cxor %rax, %rax%1$ccall printf@plt%1$cmov %rbp, %rsp%1$cpop %rbp%1$cret%1$c%1$cmain:%1$cpush %rbp%1$cmov %rsp, %rbp%1$c%1$cxor %rax, %rax%1$c#calling foo%1$ccall foo%1$c %1$cmov %rbp, %rsp%1$cpop %rbp%1$cret%1$c%1$c.section .data%1$cfmt: .asciz %2$c%3$s%2$c%1$c"
