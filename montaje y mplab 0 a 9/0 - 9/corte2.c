#include <16f877a.h>
#use delay (clock=4000000)
#fuses xt,nowdt,noprotect
void main ()

{
while(true)
{
if(input (PIN_B0))
{

output_low(PIN_C0)>=output_low(PIN_C1)>=output_low(PIN_C2)>=output_low(PIN_C3)>=output_low(PIN_C4)>=output_low(PIN_C5)>=output_high(PIN_C6);
delay_ms(200);
output_high(PIN_C0)>=output_low(PIN_C1)>=output_low(PIN_C2)>=output_high(PIN_C3)>=output_high(PIN_C4)>=output_high(PIN_C5)>=output_high(PIN_C6);
delay_ms(200);
output_low(PIN_C0)>=output_low(PIN_C1)>=output_high(PIN_C2)>=output_low(PIN_C3)>=output_low(PIN_C4)>=output_high(PIN_C5)>=output_low(PIN_C6);
delay_ms(200);
output_low(PIN_C0)>=output_low(PIN_C1)>=output_low(PIN_C2)>=output_low(PIN_C3)>=output_high(PIN_C4)>=output_high(PIN_C5)>=output_low(PIN_C6);
delay_ms(200);
output_high(PIN_C0)>=output_low(PIN_C1)>=output_low(PIN_C2)>=output_high(PIN_C3)>=output_high(PIN_C4)>=output_low(PIN_C5)>=output_low(PIN_C6);
delay_ms(200);
output_low(PIN_C0)>=output_high(PIN_C1)>=output_low(PIN_C2)>=output_low(PIN_C3)>=output_high(PIN_C4)>=output_low(PIN_C5)>=output_low(PIN_C6);
delay_ms(200);
output_low(PIN_C0)>=output_high(PIN_C1)>=output_low(PIN_C2)>=output_low(PIN_C3)>=output_low(PIN_C4)>=output_low(PIN_C5)>=output_low(PIN_C6);
delay_ms(200);
output_low(PIN_C0)>=output_low(PIN_C1)>=output_low(PIN_C2)>=output_high(PIN_C3)>=output_high(PIN_C4)>=output_high(PIN_C5)>=output_high(PIN_C6);
delay_ms(200);
output_low(PIN_C0)>=output_low(PIN_C1)>=output_low(PIN_C2)>=output_low(PIN_C3)>=output_low(PIN_C4)>=output_low(PIN_C5)>=output_low(PIN_C6);
delay_ms(200);
output_low(PIN_C0)>=output_low(PIN_C1)>=output_low(PIN_C2)>=output_low(PIN_C3)>=output_high(PIN_C4)>=output_low(PIN_C5)>=output_low(PIN_C6);
delay_ms(200);


}
}

}


