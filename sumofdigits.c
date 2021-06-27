#include <stdio.h>
void main() 
{int i;
printf("enter the number");
scanf("%d",i);
printf("sum of digits:%d",digitsum(i));
}

int digitsum(int n)
{int sum=0;
while(n!=0)
{ sum=sum+(n%10);
   n=n/10;
}
return sum;
}
