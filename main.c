#include <main.h>
#use delay(clock=16M)
void main()
{
set_tris_a(0xFF)
set_tris_b(0xFF)
 int16 lectura;
   while(TRUE)
   {
   
   setup_adc_ports(AN0);
   setup_adc(ADC_CLOCK_INTERNAL);
   set_adc_channel(0);
   delay_us(20);
   lectura=read_adc();
   output_B(lectura);
   }
}
