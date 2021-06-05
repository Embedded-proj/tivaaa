//delay function in milli 
void dmilli(int n)
{
	int i,j;
	for(i=0;i<n;i++) 
	  for(j=0;j<3180;j++)
    {}
}

// delay function in micro
void dmicro(int n)
{
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<3;j++)
    {}
}

void LCD_Cmd( char command)
{
	GPIO_PORTB_DATA_R = command;
	GPIO_PORTD_DATA_R &= ~0x01; 
	GPIO_PORTD_DATA_R &= ~0x02;
	dmilli(1);
	GPIO_PORTD_DATA_R |=0x04; 
	dmicro(1);
	GPIO_PORTD_DATA_R &= ~0x04;
	dmicro(5);

}

void LCD_Data( char data) 
{
	GPIO_PORTB_DATA_R = data;
	GPIO_PORTD_DATA_R |= 0x01; 
	GPIO_PORTD_DATA_R &= ~ 0x02; 
	GPIO_PORTD_DATA_R |= 0x04; 
	dmicro(1);
	GPIO_PORTD_DATA_R &= ~0x04; 
	dmicro(1);
}
