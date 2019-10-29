.model small
.stack 100h
.data
.code
main proc 

mov ah,1
int 21h

cmp al,31h
je print
cmp al,34h
je print

cmp al,32h
je printt
cmp al,35h
je printt


print:
mov ah,2
mov dl,'o'
int 21h
jmp exit

printt:
mov ah,2
mov dl,'e'
int 21h

exit:
mov ah,4ch
int 21h
main endp
end main
