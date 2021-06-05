

const double PI = 3.1415926;
static double calcDist( double x1, double y1, double x2, double y2)
{
	double f;
  double d; 	
	double radius = 6371;
	double x = (x2 - x1)* PI /180;
	double y = (y2-y1)* PI /180;
	x1 =  x1 * PI /180;
	x2 = x2 * PI /180;
	f = pow(sin(x/2),2) + cos(x1)*cos(x2)*pow(sin(y/2),2);
	d = 2*radius* asin(sqrt(f));
	return d;
}

int main () 
{ 
	double distance; 
	double x1=0;
	double y1=0;
	double x2=200; 
	double y2=200;
	
	
  distance	= calcDist( x1, y1,x2, y2);
}