#include<stdio.h>
#include<math.h>
void main()
 { 
   int a,A,l,b,s,c,d;
   float r,Q;
   printf("\n Geometric shapes\n1-circle\n2-rectangle\n3-triangle\n4-square\n5-exit \n");
   printf("enter your choice:");
   scanf("%d",&a);
   switch(a)
   {
   case 1:printf("\n enter the radius of circle:");
          scanf("%f",&r);
	  Q=3.14*r*r;
	  printf("Area of circle is %f \n",Q);
	  break;
   case 2:printf("\n enter the length of rectangle:");
	  scanf("%d",&l);
	  printf("\n enter the breadth of rectangle:");
	  scanf("%d",&b);
   	  A=l*b;
	  printf("\n Area of rectangle is %d \n",A);
	  break;
   case 3:printf("\n enter the sides of triangle \n");
	  scanf("%d%d",&b,&c);
	  A=(b+c)/2;
	  printf("\n area of triangle is %d \n",A);
          break;
   case 4:printf("\n enter the side of square:");
	  scanf("%d",&c);
	  A=c*c;
	  printf("\n area of square is %d \n",A);
	  break;
   case 5:printf("\n EXIT \n");
          break;
   default:printf("\n wrong choice \n");
   }
 }
