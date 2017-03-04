#include <stdio.h>
#include <conio.h>
void main()
{
float x,y;
printf("Enter x,y: ");
scanf("%f%f",&x,&y);
if((x*x+y*y<=25 && x*x+y*y>=4 && y>=1.8 && x<=0) || (x*x+y*y<=4 && y>=1.8 && x>=0) || (x*x+y*y<=25 && x*x+y*y>=4 && x<=0 && y<=0))
printf("OK");
else 
	printf("NO");
getch();
}