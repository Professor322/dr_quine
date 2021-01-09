.global main

.macro prologue_and_main_decl
main:
push %rbp
mov %rsp, %rbp
.endm

.macro epilogue
mov %rbp, %rsp
pop %rbp
ret
.endm

#comment

.macro function_body

lea file_name(%rip), %rdi
lea properties(%rip), %rsi
call fopen@plt

mov %rax, %rdi
lea fmt(%rip), %rsi
mov $10, %rdx
mov $34, %rcx
lea fmt(%rip), %r8
call fprintf@plt

.endm

prologue_and_main_decl
function_body
epilogue

.section .data
fmt: .asciz ".global main%1$c%1$c.macro prologue_and_main_decl%1$cmain:%1$cpush %rbp%1$cmov %rsp, %rbp%1$c.endm%1$c%1$c.macro epilogue%1$cmov %rbp, %rsp%1$cpop %rbp%1$cret%1$c.endm%1$c%1$c#comment%1$c%1$c.macro function_body%1$c%1$clea file_name(%rip), %rdi%1$clea properties(%rip), %rsi%1$ccall fopen@plt%1$c%1$cmov %rax, %rdi%1$clea fmt(%rip), %rsi%1$cmov $10, %rdx%1$cmov $34, %rcx%1$clea fmt(%rip), %r8%1$ccall fprintf@plt%1$c%1$c.endm%1$c%1$cprologue_and_main_decl%1$cfunction_body%1$cepilogue%1$c%1$c.section .data%1$cfmt: .asciz %2$c%3$s%2$c%1$cfile_name: .asciz %2$cGrace_kid.s%2$c%1$cproperties: .asciz %2$cw%2$c%1$c"
file_name: .asciz "Grace_kid.s"
properties: .asciz "w"
