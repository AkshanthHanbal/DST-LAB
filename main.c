#include <stdio.h>

void main()
{
     int i,j,k,arr1[10][10],rsum[10],csum[10],rpro[10],cpro[10],n;

       printf("\n\nFind the sum of rows an columns of a Matrix:\n");
       printf("enter the size of the square matrix : ");
     scanf("%d", &n);
printf("enter the elements in the  first matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
          printf("element - [%d],[%d] : ",i,j);
          scanf("%d",&arr1[i][j]);
            }
        }
      printf("The matrix is :\n");
for(i=0;i<n;i++)
{
  for(j=0;j<n ;j++)
    printf("% d",arr1[i][j]);
   printf("\n");
}
     for(i=0;i<n;i++)
     {
 rsum[i]=0;
 for(j=0;j<n;j++)
 rsum[i]=rsum[i]+arr1[i][j];
     }
       for(i=0;i<n;i++)
      {
 csum[i]=0;
 for(j=0;j<n;j++)
csum[i]=csum[i]+arr1[j][i];
      }
       printf("The sum or rows and columns of the matrix is :\n");
      for(i=0;i<n;i++)
      {
  for(j=0;j<n;j++)
     printf("% 4d",arr1[i][j]);
  printf("% 8d",rsum[i]);
  printf("\n");
       }
       printf("\n");
   for(j=0;j<n;j++)
             {
       printf("% 4d",csum[j]);
             }
            printf("\n\n");
            
            //row and column multiplication
       
                  for(i=0;i<n;i++)
     {
 rpro[i]=1;
 for(j=0;j<n;j++)
 rpro[i]=rpro[i]*arr1[i][j];
     }
                for(i=0;i<n;i++)
     {
 cpro[i]=1;
 for(j=0;j<n;j++)
 cpro[i]=cpro[i]*arr1[j][i];
     }
           
       printf("The product of rows and columns of the matrix is :\n");
      for(i=0;i<n;i++)
      {
  for(j=0;j<n;j++)
     printf("% 4d",arr1[i][j]);
  printf("% 8d",rpro[i]);
  printf("\n");
       }
       printf("\n");
   for(j=0;j<n;j++)
             {
       printf("% 4d",cpro[j]);
             }
            printf("\n\n");
                 
           
  }
