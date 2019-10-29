dosseg
.model small
.stack 100h
.data
num1 db 3
.code
main proc

mov bl,num1
sub bl,30h
mov dl,bl
mov ah,2
int 21h

mov ah,4ch
int 21h
main endp
end main

