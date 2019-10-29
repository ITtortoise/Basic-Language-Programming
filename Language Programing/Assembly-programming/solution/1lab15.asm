dosseg
.model small
.stack 100h
.data
a db '***********',10,13,'$'
b db '****$'
.code
main proc

mov ax,@data
mov ds,ax

mov ah,2
mov dl,'?'
int 21h

mov dl,10
mov ah,2
int 21h
mov dl,13
mov ah,2
int 21h

lea dx,a
mov ah,9
int 21h
int 21h
int  21h
int 21h
int 21h

lea dx,b
mov ah,9
int 21h

mov ah,1
int 21h
mov bl,al

mov ah,1
int 21h
mov bh,al

mov ah,1
int 21h
mov cl,al


lea dx,b
mov ah,9
int 21h

mov dl,10
mov ah,2
int 21h
mov dl,13
mov ah,2
int 21h


lea dx,a
mov ah,9
int 21h
int 21h
int  21h
int 21h
int 21h

mov dl,007
mov ah,2
int 21h

mov ah,4ch
int 21h
main endp
end main

