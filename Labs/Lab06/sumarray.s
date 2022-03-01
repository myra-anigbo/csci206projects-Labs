# CSCI 206 Computer Organization & Programming
# Date: 2011-09-13
# Revised: 2019-10-31 for RISC-V
#
# Copyright (c) 2011 Bucknell University
#
# Permission is hereby granted, free of charge, to any individual or
# institution obtaining a copy of this software and associated
# documentation files (the "Software"), to use, copy, modify, and
# distribute without restriction, provided that this copyright and
# permission notice is maintained, intact, in all copies and
# supporting
# documentation.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY
# KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
# WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
# NONINFRINGEMENT. IN NO EVENT SHALL BUCKNELL UNIVERSITY BE LIABLE FOR ANY
# CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
# TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH
# THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
#
#
# Student name:Myra Anigbo
#
# This program calculates the sum of the values in array A and counts
# the number of values in the array.
#
# Similarly to a C-string, the array is terminated by sentinel value
# equal to zero.
#
# The sum is stored in $s0 and the count in $s1

	.data
A:	.word 5, 4, 3, 2, 4, 1, 0 # declare array int A[]={5,4,3,2,4,1,0};
count_string: .asciz "Number of elements = "
sum_string: .asciz "Summation = "
    .globl main
	.text	
main:				# This symbols marks the first instruction of your program

#
# Add your code here
#
    li t3, 0 #li loads constant in register
    li t4, 0
    la t1, A #t1 holds memory address of array A
loop:
    lw t2, 0(t1) # loads first element in array into t2
    beq t2, t0, terminate
    add t3, t3, t2 # if not 0 add element into t3
    addi t4, t4, 1 # counts number of elements in loop
    addi t1, t1, 4 #shifts to the next element in array
    j loop

terminate:
    li a7, 4
    la a0, count_string
    ecall
    li a7, 1
    mv a0, t4 #copies value of t4 into a0
    ecall # prints the count
    
    li a7, 11
    li a0, '\n'
    ecall
    
    li a7, 4
    la a0, sum_string
    ecall
    li a7, 1
    mv a0, t3
    ecall # prints the summation

	li	a7, 10		# system call for exit. 

	ecall			# Exit!
	ebreak
