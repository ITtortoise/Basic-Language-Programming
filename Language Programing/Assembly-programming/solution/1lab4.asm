dosseg
.model small
.data
.code
main proc

mov dl,31h
mov ah,2
int 21h

mov dl,13
mov ah,2
int 21h
mov dl,10
mov ah,2
int 21h

mov dl,32h
mov ah,2
int 21h

mov ah,4ch
int 21h

main endp
end main
