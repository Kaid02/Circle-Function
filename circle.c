#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void diameter();
void circumference();
void area();

int main()
{
	//int r;
	
	
	//printf("Enter the radius : ");
	//scanf("%d",&r);
	diameter();
	circumference();
	area();
	return 0;
	
}
void diameter()
{
		int d,r;
		
		printf("Enter the radius : ");
		scanf("%d",&r);
		
		d=2*r;
		
		printf("The diameter of circle is : %d\n",d);
}
void circumference()
{
			int c,r;
			//x=3.14;
			
			printf("\nEnter the radius : ");
			scanf("%d",&r);
			
			c=2*3.14*r;
			
			printf("The circumference of circle is : %d\n",c);
}
void area()
{
			float a,r;
			//x=3.14;
			
			printf("\nEnter the radius : ");
			scanf("%f",&r);
			
			a=3.14*pow(r,2);
			
			printf("The area of circle is : %f",a);
}				
