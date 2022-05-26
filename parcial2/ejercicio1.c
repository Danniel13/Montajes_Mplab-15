#include <16F877a.h>
#use delay (clock =4M)
#fuses xt,nowdt,noprotect
#byte PORTD=0X08
int x;
void main()
{
set_tris_d(0);PORTD=0;
PORTD=0;
while(TRUE)
{
if (INPUT(PIN_B0))
{
for (x=0;x<=8;x++)
{
PORTD=PORTD+1;
delay_ms(300);
if(PORTD==9)
{
PORTD==0;
}
}
}
}
}