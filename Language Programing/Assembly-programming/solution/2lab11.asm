dosseg
.model small
.stack 100h
.data 
a db 'both are equal$'
.code
main proc

mov dl,38h
mov cl,4

l1:
mov ah,2
int 21h
sub dl,2
loop l1

mov ah,4ch
int 21h

main endp
end main
   
   