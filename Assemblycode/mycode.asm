
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h

.model small
.stack 100h

.data
    msg1 db 10, 13, "Enter first number: $"
    msg2 db 10, 13, "Enter second number: $"
    msg3 db 10, 13, "The sum is: $"
    num1 db ?
    num2 db ?
    sum db ?

.code
main proc
    mov ax, @data
    mov ds, ax

    ; Display message to enter first number
    lea dx, msg1
    mov ah, 09h
    int 21h

    ; Input first number
    mov ah, 01h
    int 21h
    sub al, 30h  ; convert ASCII to numeric
    mov num1, al

    ; Display message to enter second number
    lea dx, msg2
    mov ah, 09h
    int 21h

    ; Input second number
    mov ah, 01h
    int 21h
    sub al, 30h  ; convert ASCII to numeric
    mov num2, al

    ; Add the numbers
    mov al, num1
    add al, num2
    mov sum, al

    ; Display the sum
    lea dx, msg3
    mov ah, 09h
    int 21h

    ; Display the result
    mov dl, sum
    add dl, 30h  ; convert numeric to ASCII
    mov ah, 02h
    int 21h

    ; Exit program
    mov ah, 4Ch
    int 21h
main endp

end main


ret




