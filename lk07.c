#include<stdio.h>
int main()
{
int m,e,h,total,p,pe;
printf("enter your marks of math:\n");
scanf("%d",&m);
printf("enter your marks of English:\n");
scanf("%d",&e);
printf("enter your marks of Hindi:\n");
scanf("%d",&h);
printf("enter your marks of Public Adminstration:\n");
scanf("%d",&p);
printf("enter your marks of physical education:\n");
scanf("%d",&pe);
total=(m+e+h+p+pe)/5;



if(total<40 || m<33||e<33||h<33||p<33||pe<33){
printf("Your grade F");}

else {printf("you are passed %d", total);}
}