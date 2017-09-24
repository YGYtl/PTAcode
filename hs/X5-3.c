#include <stdio.h>
#include <math.h>

double dist( double x1, double y1, double x2, double y2 )
{
	double d = 0.0, c = 0.0;
	c = pow((x1-x2), 2) + pow((y1-y2), 2);
	d = sqrt(c);
	return d;
 } 

