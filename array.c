#include<stdio.h>
void main()
{
    int i,j,element[3][3];
    printf("input the elements in the matrix");
    for(i=0;i<3;i++)
    {for(j=0;j<3;j++)
      {scanf("%d",&element[i][j]);
      }
    }
    printf("the matrix is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
       {
        printf("%d ",element[i][j]);
        
        }
        printf("\n"); 
    }
    return 0;
}
