#include<reg51.h>

sbit PWM_Pin = P0^0;		   
sbit low = P0^4;
sbit medium = P0^5;
sbit high = P0^6;
sbit off = P0^7;

void InitPWM_timer(void);

unsigned char PWM = 0;	  
unsigned int temp = 0;    
char a=1;


int main(void)
{
	 low=1;
	 medium=1;
	 high=1;
	 off=1;
	 PWM_Pin=0;
	
	 InitPWM_timer();             
 
   

   while(1)                
   {
	   if(low==0)
		 {
			 PWM=102;
			 a=0;
		 }
		 else if(medium==0)
		 {
			 PWM=153;
			 a=0;
		 }
		 else if(high==0)
		 {
			 PWM=255;
			 a=0;
		 }
		 else if(off==0)
		 {
			 a=1;
			 PWM_Pin=0;
		 }
	 }
}


void InitPWM_timer (void)
{
	TMOD &= 0xF0;    
	TMOD |= 0x01;    
	
	TH0 = 0x00;     
	TL0 = 0x00;      
	
	ET0 = 1;        
	EA  = 1;         
	
	TR0 = 1;         
}


void Timer0_ISR (void) interrupt 1   
{
	TR0 = 0;   

	if(PWM_Pin==1 && a==0)
	{
		PWM_Pin = 0;
		temp = (255-PWM); 
		TH0  = 0xFF;
		TL0  = 0xFF - temp&0xFF;	
	}
	else if(PWM_Pin==0 && a==0)    
	{
		PWM_Pin = 1;
		temp = PWM;
		TH0  = 0xFF;
		TL0  = 0xFF - temp&0xFF;
	}

	TF0 = 0;     
	TR0 = 1;     
}