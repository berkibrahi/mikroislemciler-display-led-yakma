#include <dlsplay_segment.h>
int display[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
int sayac;

void main()
{
 
set_tris_c(0x00);
output_c(0x00);

   while(TRUE){
   for(sayac=0;sayac<10;sayac++){
   output_c(display[sayac]);
   delay_ms(1000);
  }
   }

}
