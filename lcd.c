void LCD_Cmd( char command)
{
GPIO_PORTA_DATA_R |= 0x00; 
GPIO_PORTB_DATA_R =command;
GPIO_PORTA_DATA_R |=0x80; 
GPIO_PORTA_DATA_R |=0x00;
}

void LCD_Data( char data) 
{ 
GPIO_PORTA_DATA_R |=0x20; 
GPIO_PORTB_DATA_R =data;
GPIO_PORTA_DATA_R |= 0x80;
GPIO_PORTA_DATA_R  =0x00;
}
