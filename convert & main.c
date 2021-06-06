//Converting to a character
char convert (int a ){
	switch (a){
	case 0 :
		return '0';
		break ;
	
	case 1 :
			return '1';
			break ;
	
	case 2 :
			return '2';
			break ;
	
	case 3 :
			return '3';
			break ;
	
	
	case 4 :
			return '4';
			break ;
	
	case 5 :
			return '5';
			break ;
	
	case 6 :
			return '6';
			break ;
	
	case 7 :
			return '7';
			break ;
	
	case 8 :
			return '8';
			break ;
	
	case 9 :
			return '9';
			break ;
	}
}

char x[3];

void convert_to_char(int a )
{
	x[0]= convert((a/100)%10) ;
	x[1]=	convert( (a/10)%10 ) ;
	x[2]=convert(a%10);
}

int main ()
{	
	
	ports_initiallization();
	dmilli(50);
	
//distance = 120;
	distance	= calcDist( x1, y1);
  ledOn(distance);
	
	convert_to_char(distance);
	LCD_init();
	LCD_Test();

	while (1)
    {

    }
		return 0;
	}