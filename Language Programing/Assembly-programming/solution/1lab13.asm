dosseg
.model small
.stack 100h
.data
a db 'ENTER  A HEX DECIMAL DEGIT:$',10,13,'$'
b db 'DECIMAL:1$',10,13,'$'
.code
main proc

mov ax,@data
mov ds,ax

lea dx,a
mov ah,9
int 21h

mov ah,1
int 21h
mov bl,al
sub bl,11h

mov dl,10
mov ah,2
int 21h
mov dl,13
mov ah,2
int 21h

lea dx,b
mov ah,9
int 21h

mov ah,2
mov dl,bl
int 21h

mov ah,4ch
int 21h
main endp
end main

