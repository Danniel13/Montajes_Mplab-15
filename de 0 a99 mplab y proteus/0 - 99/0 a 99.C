#include<16f877a.h>
#use delay(clock=2000000)
#fuses xt,nowdt,protect,NOLVP
#byte PORTD=0X08
#byte PORTC=0X07
int x,i;
void main()
{
set_tris_d(0);
set_tris_c(0);
PORTD=0;
PORTC=0;
while(TRUE)
{
if(INPUT(PIN_B0))
{
for(i=0;i<=9;i++)
{
for(x=0;x<=8;x++)
{
PORTD=PORTD+1;
delay_ms(300);
if(PORTD==9)
{
PORTD=0;
}

}

if(i==9)
{
PORTC=PORTC-1;
}
PORTC=PORTC+1;
delay_ms(300);

}

PORTD=0;
PORTC=0;

}
}
}
