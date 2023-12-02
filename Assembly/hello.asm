;   Set start address point
ORG 0
BITS 16

jmp _start

; Avoid BIOS overwitten stuff
_start:
  jmp short start
  nop

times 33 db 0

; Output to the screen (video services 'ah' register)
start:
  jmp 0x7C0:process


process:
  cli ; Clear Interrupts
  mov ax, 0x7BF
  mov ds, ax
  mov es, ax
  mov ax, 0x00
  mov ss, ax
  mov sp, 0x7C00

  sti ; Enables Interrupts

  ; Write code here
  ; mov ah, 0eh ; video routines
  ; mov al, message ; character to ah read
  ; int 10h

  mov si, message ; set message's address to si
  call print ; start print process

  jmp $

print: 
  mov ah, 0eh ; start video services at bios
._loop: ; iterate and loop through messages char
  lodsb
  cmp al, 0 ; if it's zero, here're done
  je .done  ; jump equal .done if al is zero
  int 10h   ; execute print
  jmp ._loop
.done:
  ret

message: db 'Hello World', 0 ; db means Data bytes

; Fill exceding bits with zeros (510 bytes in total)
times 510-($ - $$) db 0

; Boot signature
dw 0xAA55
