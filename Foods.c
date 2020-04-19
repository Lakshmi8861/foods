#include<studio.h>
int main()
{
int
b,f,p,s,P1,Burger,French Fries,Pizza,Sandwiches,Pasta;
char Ch,B,F,P,S,P1;
printf("b1=Burger\n 2=FrenchFries\n 3=Pizza\n 4=Sandwiches\n 5=Pasta\n");
printf("enter your order\n please enter the choice 1,2,3,4,5\n");
scanf("%d",&Ch);
switch(Ch)
{
case 1:
printf("your order is Burger\n");
printf("please enter your quality");

scanf("%d",&b);
Burger=129*b;

printf("your total charge is:%d",Burger);
break;
 
case 2:
printf("your order is FrenchFries\n");
printf("please enter your quality");

scanf("%d",&f);
French fries=99*f;

printf("your total charge is:%d",French fries);
break;

case 3:
printf("your order is pizza\n");
printf("please enter your quality");

scanf("%d",&p);
Pizza=239*p;

printf("your total charge is:%d",Pizza);
break;

case 4:
printf("your order is Sandwiches\n");
printf("please enter your quality");

scanf("%d",&s);
Sandwiches=149*s;

printf("your total charge is:%d", Sandwiches);
break;

case 5:
printf("your order is Pasta\n");
printf("please enter your quality");

scanf("%d",&p1);
Pasta=179*p1;

printf("your total charge is:%d",Pasta);
break;

default:
printf("invalid your choice");

break;
}
}


