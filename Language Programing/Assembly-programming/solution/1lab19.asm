dosseg
.model small
.data
.code
main proc

mov ah,1
int 21h
mov bl,al
sub bl,30h

mov ah,1
int 21h
sub al,30h

mul bl
mov ah,0

aam

add al,48
add ah,48

mov bx,ax
mov dl,bh
mov ah,2

int 21h
mov dl,bl
mov ah,2
int 21h

mov ah,4ch
int 21h
main endp
end main