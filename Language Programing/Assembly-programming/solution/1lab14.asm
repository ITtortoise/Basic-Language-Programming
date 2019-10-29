dosseg
.model small
.stack 100h
.data
a db '***********',10,13,'$'
.code
main proc

mov ax,@data
mov ds,ax

lea dx,a
mov ah,9
int 21h
int 21h
int 21h
int 21h
int 21h
int 21h
int 21h
int 21h
int 21h
int 21h

mov ah,4ch
int 21h
main endp
end main

