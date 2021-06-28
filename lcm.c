#include<stdio.h>
int flcm(int,int);
int main()
{int a,b,lcm;
 printf("input first number:");
 scanf("%d",&a);
 printf("input second number:");
 scanf("%d",&b);
 lcm=flcm(a,b);
 printf("LCM of %d and %d = %d",a,b,lcm);
}
int flcm(int i,int j)
{ int l;
    l = (i > j) ? i : j;  
      
    while (1)   
    {  
        if (l % i == 0 && l % j == 0)  
        {  
            return l;  
            break;  
        }  
        ++l; 
    }  
