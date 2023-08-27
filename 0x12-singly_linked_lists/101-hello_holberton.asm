section .data
    hello_message db "Hello, Holberton", 0
    format db "%s", 10, 0

section .text
    global main
    extern printf

main:
    sub rsp, 8              ; Align the stack to a 16-byte boundary

    lea rdi, [hello_message]
    lea rsi, [format]
    xor rax, rax            ; Clear RAX register
    call printf

    add rsp, 8              ; Restore the stack
    ret

