# exit.s
        .text
        .globl _start
_start:
        li a0, 99
        li a7, 42
        ecall
