.model small
.stack 100h
.data
a db '*$'
.code
main proc

mov ax,@data
mov ds,ax

mov cl,80
l1:
mov ah,9
lea dx,a
int 21h

loop l1

main endp
end main