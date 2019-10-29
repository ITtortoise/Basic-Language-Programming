.model small
.stack 100h
.data
.code
main proc 

mov ah,1
int 21h

cmp al,59h
jl exit
cmp al,60h
je exit
cmp al,61h
je exit
cmp al,62h
je exit
cmp al,63h
je exit
cmp al,64h
je exit
cmp al,65h
je exit
cmp al,66h
je exit
cmp al,67h
je exit
cmp al,68h
je exit
cmp al,69h
je exit
cmp al,70h
je exit
cmp al,71h
je exit
cmp al,72h
je exit
cmp al,73h
je exit
cmp al,74h
je exit
cmp al,75h
je exit
cmp al,76h
je exit
cmp al,77h
je exit
cmp al,78h
je exit
cmp al,79h
jg exit

mov ah,2
mov dl,al
int 21h

exit:
mov ah,4ch
int 21h
main endp
end main
