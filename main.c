#include <18F4620.h>
#fuses HS, NOFCMEN, NOIESO, PUT, NOBROWNOUT, NOWDT
#fuses NOPBADEN, NOMCLR, STVREN, NOLVP, NODEBUG
#use delay(clock=16000000)

int contador_b=1;
int contador_c=128;
int cintador_d=1;
int flagopcion1=0, flagopcion2=0, flagopcion3=0;
int puertoA;

void main (void){
   set_tris_a(0x3F);
   set_tris_b(0x00);
   set_tris_c(0x00);
   set_tris_d(0x00);
while(1){
   puertoA=input_a();
   
   if(contador_b==128){
   contador_b==1;
   }
   if((puertoA&0x01)==0x01){
   flagopcion1=1;
   output_b(contador_b);
   contador_b*=2;
   delay_ms(300);
   }
}  

}
