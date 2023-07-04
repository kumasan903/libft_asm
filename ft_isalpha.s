;.intel_syntax noprefix
global ft_isalpha

ft_isalpha:
	mov rcx, 0x41
	cmp rcx, rdi
	ja return_false
	mov rcx, 0x7a
	cmp rcx, rdi
	jb return_false
	mov rcx, 0x5b
	cmp rcx, rdi
	ja return_true
	mov rcx, 0x60
	cmp rcx, rdi
	jb return_true
	jmp return_false

return_true:
	mov rax, 0x1
	ret

return_false:
	mov rax, 0x0
	ret
