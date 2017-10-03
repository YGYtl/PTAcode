# include<stdio.h>
# include<math.h>

int main()
{

double x1, y1, x2, y2, x3, y3;
double length1, length2, length3, l1, l2, l3;
double l,a,p;
scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);

length1 = sqrt((y1 - y2)*(y1 - y2) + (x1 - x2)*(x1 - x2));
length2 = sqrt((y2 - y3)*(y2 - y3) + (x2 - x3)*(x2 - x3));
length3 = sqrt((y3 - y1)*(y3 - y1) + (x3 - x1)*(x3 - x1));

l1 = length1 + length2;
l2 = length1 + length3;
l3 = length2 + length3;
l = length1 + length2 + length3;

p = l / 2.0;
a =sqrt(p * (p-length1) * (p-length2) * (p-length3)) ;

if(l1 > length3 && l2 > length2 && l3 > length1)
printf("L = %.2f, A = %.2f", l, a);
else
printf("Impossible");

return 0;
}