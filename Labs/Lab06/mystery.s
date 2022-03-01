
# CSCI 206 Computer Organization & Programming
# Date: 2019-10-26
# Copyright (c) 2019 Bucknell University
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
# Student name: MYRA ANIGBO 


	.data
	
unused:	.word 0xFEEDBEEF # int variable unused that has the value 0xFEEDBEEF			
	 					
x:	.word 89	# int variable called x that has the decimal value 89
			
						
	.text	
main:					# This tells the simulator
						# where start your program

	
	add		t0, zero, zero		#set value zero into register t0
	add		s2, zero, zero		#set value 0 in register s2
	
loop:
	add	s2, s2, t0			# set value from registers s2 and t0 into s2
	addi	t0, t0, 1			#set value 1 and value from t0 into t0(should be updated in the for loop
	addi	t3, t0, -10			#set value from t0 - 10 and set into t3
	blez	t3, loop			# loop if t3 < = 0 (keep on looping if condition is true)

	la		t2, x			#load address of int variable x into register t2
	sw		s2, 0(t2)		# store word from register t2 into register s2 
	
	add		a0, zero, s2		# Move result into a0 for return code
	li		a7, 93			# Code (93) for system call Exit2
	ecall					# Exit!
	ebreak					# Break if something went wrong (should not get here!)

