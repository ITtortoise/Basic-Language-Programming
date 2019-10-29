dosseg
.model small
.stack 100h
.data
msg1 db 'HELLO WORLD$'
msg2 db 'PROGRAMMERS ARE CREZY$'
.code
main proc

mov ax,@data
mov ds,ax

lea dx,msg1
mov ah,9
int 21h

mov dl,13
mov ah,2
int 21h
mov dl,10
mov ah,2
int 21h

lea dx,msg2
mov ah,9
int 21h

mov ah,4ch
int 21h
main endp
end main

