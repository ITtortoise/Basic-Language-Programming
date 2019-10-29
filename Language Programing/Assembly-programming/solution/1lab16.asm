.model small
.stack 100h
.data
n db 10,13,'$'
s db  '*$'
.code
main proc 

mov ax,@data
mov ds,ax

mov bx,1
mov cx,5
l1:
push cx

mov cx,bx
l2:
mov ah,9
lea dx,s
int 21h
loop l2

mov ah,9
lea dx,n
int 21h
add bx,1
pop cx
loop l1



mov ah,4ch
int 21h
main endp
end main
