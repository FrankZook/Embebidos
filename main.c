#include <18F4620.h>
#fuses HS, NOFCMEN, NOIESO, PUT, NOBROWNOUT, NOWDT
#fuses NOPBADEN, NOMCLR, STVREN, NOLVP, NODEBUG
#use delay(clock=16000000)

int16 contador=1;

void main (void){
   set_tris_b(0x00);
while(1){
   output_b(contador);
   contador*=2;
   delay_ms(300);
   if(contador==128){
   contador==1;
   }
}  

}
