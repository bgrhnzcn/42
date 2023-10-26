	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 15	sdk_version 10, 15, 6
	.globl	_mapi                   ## -- Begin function mapi
	.p2align	4, 0x90
_mapi:                                  ## @mapi
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
                                        ## kill: def $sil killed $sil killed $esi
	movl	%edi, -8(%rbp)
	movb	%sil, -9(%rbp)
	cmpl	$10, -8(%rbp)
	ja	LBB0_2
## %bb.1:
	movl	-8(%rbp), %eax
	movl	%eax, %ecx
	leaq	_mapi.indexArray(%rip), %rdx
	cmpl	$1, (%rdx,%rcx,4)
	jne	LBB0_3
LBB0_2:
	movl	$1, %edi
	leaq	L_.str(%rip), %rsi
	movl	$12, %edx
	callq	_write
	jmp	LBB0_4
LBB0_3:
	movl	-8(%rbp), %eax
	movl	%eax, %ecx
	leaq	_mapi.indexArray(%rip), %rdx
	movl	$1, (%rdx,%rcx,4)
LBB0_4:
	movsbl	-9(%rbp), %eax
	cmpl	$97, %eax
	jl	LBB0_7
## %bb.5:
	movsbl	-9(%rbp), %eax
	cmpl	$122, %eax
	jg	LBB0_7
## %bb.6:
	movsbl	-9(%rbp), %eax
	subl	$32, %eax
                                        ## kill: def $al killed $al killed $eax
	movb	%al, -1(%rbp)
	jmp	LBB0_11
LBB0_7:
	movsbl	-9(%rbp), %eax
	cmpl	$65, %eax
	jl	LBB0_10
## %bb.8:
	movsbl	-9(%rbp), %eax
	cmpl	$90, %eax
	jg	LBB0_10
## %bb.9:
	movsbl	-9(%rbp), %eax
	addl	$32, %eax
                                        ## kill: def $al killed $al killed $eax
	movb	%al, -1(%rbp)
	jmp	LBB0_11
LBB0_10:
	movb	-9(%rbp), %al
	movb	%al, -1(%rbp)
LBB0_11:
	movsbl	-1(%rbp), %eax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	xorl	%eax, %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
.zerofill __DATA,__bss,_mapi.indexArray,44,4 ## @mapi.indexArray
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"wrong index\n"

.subsections_via_symbols
