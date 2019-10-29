dosseg
.model small
.data 
msg db 'ENTER THREE INIATIALS:$'
.code 

main proc

mov ax,@data
mov ds,ax

lea dx,msg
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

mov dl,10
mov ah,2
int 21h
mov dl,13
mov ah,2
int 21h

mov ah,2
mov dl,bl
int 21h

mov dl,10
mov ah,2
int 21h
mov dl,13
mov ah,2
int 21h

mov ah,2
mov dl,bh
int 21h

mov dl,10
mov ah,2
int 21h
mov dl,13
mov ah,2
int 21h

mov ah,2
mov dl,cl
int 21h


mov ah,4ch
int 21h

main endp
end main


