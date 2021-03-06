#include <lpc17xx.h>   

void delay_ms(unsigned int ms)
{
   unsigned int i,j;

   for(i=0;i<ms;i++)
     for(j=0;j<20000;j++);

}

/* start the main program */
int main() 
{
    SystemInit();                    //Clock and PLL configuration 
    LPC_PINCON->PINSEL4 = 0x000000;  //Configure the PORT2 Pins as GPIO;
    LPC_GPIO2->FIODIR = 0xffffffff;  //Configure the PORT2 pins as OUTPUT;

  while(1)
    {
	//PORT2  P2.0.to.P2.7 data  P2.8 sel
	LPC_GPIO2->FIOSET = 0xffffE40;     //   '0'--->0x40
       	delay_ms(1000);
			
       	LPC_GPIO2->FIOSET = 0xfffffe79;     //   '1'--->0x79
       	delay_ms(1000);

  
       	LPC_GPIO2->FIOSET = 0xfffffe24;     //   '2'--->0x24
       	delay_ms(1000);
			
			
       	LPC_GPIO2->FIOSET = 0xfffffe30;     //   '3'--->0x30
       	delay_ms(1000);
			
			
       	LPC_GPIO2->FIOSET = 0xfffffe19;     //   '4'--->0x19
       	delay_ms(1000);
			
			
       	LPC_GPIO2->FIOSET = 0xfffffe12;     //   '5'--->0x12
       	delay_ms(1000);
			
			
       	LPC_GPIO2->FIOSET = 0xfffffe02;     //   '6'--->0x02
       	delay_ms(1000);
			 
			 
	      LPC_GPIO2->FIOSET = 0xfffffe78;     //   '7'--->0x78
       	delay_ms(1000);

  
       	LPC_GPIO2->FIOSET = 0xfffffe00;     //   '8'--->0x00
       	delay_ms(1000);
			
			
       	LPC_GPIO2->FIOSET = 0xfffffe18;     //   '9'--->0x18
       	delay_ms(1000);
			
			
       	LPC_GPIO2->FIOSET = 0xfffffe08;     //   'A'--->0x08
       	delay_ms(1000);
			
			
       	LPC_GPIO2->FIOSET = 0xfffffe00;     //   'B'--->0x00
       	delay_ms(1000);
			
			
       	LPC_GPIO2->FIOSET = 0xfffffe46;     //   'C'--->0x46
       	delay_ms(1000);
			 
	      LPC_GPIO2->FIOSET = 0xfffffe40;     //   'D'--->0x40
       	delay_ms(1000);
			
			
       	LPC_GPIO2->FIOSET = 0xfffffe06;     //   'E'--->0x06
       	delay_ms(1000);
			
			
       	LPC_GPIO2->FIOSET = 0xfffffe0e;     //   'F'--->0x0E
       	delay_ms(1000);
    }
}

