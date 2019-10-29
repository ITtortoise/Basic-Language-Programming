dosseg
.model small
.stack 100h
.data 
a db 'both are equal$'
.code
main proc

mov ax,@data
mov ds,ax

mov ah,1
int 21h
mov bl,al

mov ah,1
int 21h
mov bh,al

cmp bh,bl
jg greater
js small
jl equal

equal:
  mov ah,9
  lea dx,a
  int 21h
  jmp exit

greater:
   mov ah,2
   mov dl,bl
   int 21h
   jmp exit
   
small:
   mov ah,2
   mov dl,bh
   int 21h
   jmp exit

exit:
   mov ah,4ch
   int 21h

main endp
end main
   
   