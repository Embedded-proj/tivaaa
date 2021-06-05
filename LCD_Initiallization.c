void LCD_init_ports(void){

//PORTD_Initiallization
//We used PORTD for control : PD0=Rs , PD1=R/W , PD2=E
	SYSCTL_RCGCGPIO_R |= 0x08;
//while ((SYSCTL_PRGPIO_R & 0x08) == 0){}
	GPIO_PORTD_LOCK_R = 0x4C4F434B;
	GPIO_PORTD_CR_R = 0x07;
	GPIO_PORTD_DIR_R |=0x07;
	GPIO_PORTD_DEN_R|=0x07;
	GPIO_PORTD_AMSEL_R &= ~ 0x07;	
	GPIO_PORTD_AFSEL_R &= ~ 0x07;	
	GPIO_PORTD_PCTL_R &= ~ 0x00000FFF;
		
//PORTB_Initiallization
//We used PORTB for data from PB0 to PB7
	SYSCTL_RCGCGPIO_R |= 0x02; 
//while ((SYSCTL_PRGPIO_R & 0x02) == 0){}
	GPIO_PORTB_CR_R = 0xFF;
	GPIO_PORTB_DIR_R |=0xFF; 
	GPIO_PORTB_DEN_R |=0xFF;
	GPIO_PORTB_AMSEL_R &= ~ 0xFF;
	GPIO_PORTB_AFSEL_R &= ~ 0xFF;
	GPIO_PORTB_PCTL_R &= ~ 0xFFFFFFFF;
} 

void LCD_init(void){
//Will be called in main to operate the LCD
//Calling 3 other functions: LCD_Cmd,dmilli & dmicro
	dmilli(20);
   	LCD_Cmd(0x38); 
	dmicro(50);
   	LCD_Cmd(0x0F); 
	dmicro(50);
	LCD_Cmd(0x06); 
	dmicro(50);
	LCD_Cmd(0x01); 
	dmilli(5);
}
