	.file	"c_mystery.c"
	.option nopic
	.globl	unused
	.section	.sdata,"aw",@progbits
	.align	2
	.type	unused, @object
	.size	unused, 4
unused:
	.word	-17973521
	.globl	x
	.align	2
	.type	x, @object
	.size	x, 4
x:
	.word	89
	.section	.rodata
	.align	3
.LC0:
	.string	"%d\n"
	.text
	.align	1
	.globl	main
	.type	main, @function
main:
	addi	sp,sp,-48
	sd	ra,40(sp)
	sd	s0,32(sp)
	addi	s0,sp,48
	mv	a5,a0
	sd	a1,-48(s0)
	sw	a5,-36(s0)
	sw	zero,-20(s0)
	sw	zero,-24(s0)
	lw	a5,-20(s0)
	addiw	a5,a5,-10
	sw	a5,-28(s0)
	j	.L2
.L3:
	lw	a4,-24(s0)
	lw	a5,-20(s0)
	addw	a5,a4,a5
	sw	a5,-24(s0)
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
	lw	a5,-20(s0)
	addiw	a5,a5,-10
	sw	a5,-28(s0)
.L2:
	lw	a5,-28(s0)
	sext.w	a5,a5
	blez	a5,.L3
	lw	a5,-24(s0)
	sw	a5,-32(s0)
	lw	a5,-32(s0)
	mv	a1,a5
	lui	a5,%hi(.LC0)
	addi	a0,a5,%lo(.LC0)
	call	printf
	li	a5,0
	mv	a0,a5
	ld	ra,40(sp)
	ld	s0,32(sp)
	addi	sp,sp,48
	jr	ra
	.size	main, .-main
	.ident	"GCC: (GNU) 7.2.0"
