	.global system_call
	.text
system_call:
	mov %rdi, %rax
	mov %rsi, %rbx
	mov   (%rbx), %rdi
	mov  8(%rbx), %rsi
	mov 16(%rbx), %rdx
	mov 24(%rbx), %rcx
	mov 32(%rbx), %r8d
	mov 40(%rbx), %r9d
	syscall
	ret
