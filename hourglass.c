#include<stdio.h>
#include<stdlib.h>
int main()
{
  int **arr,rows,columns,msum,i ,j;

  int MaxSum( int R ,int C, int **arr);

  printf("\nenter no. of rows and columns:");
  scanf("%d",&rows);
  scanf("%d",&columns);

  if (rows< 3 || columns < 3)
  {
        printf("\nhourglass not possible");
        return -1;
  }
  else
  {

//allocating memory for 2d array
    arr=(int**)malloc(rows*sizeof(int*));
    for(i=0;i<rows;i++)
    {
       arr[i]=(int*)malloc(columns*sizeof(int));
       if(arr[i]==NULL)
       {
         printf("\nMemory allocation Failed at %d",i);
         exit(-1);
        }

    }


    printf("\nEnter the array");
    for(i=0;i<rows;i++)
    {
       for(j=0;j<columns;j++)
       {
          printf("\nenter value of a[%d][%d]: ",i,j);
          scanf("%d",&arr[i][j]);
       }
    }
    msum=MaxSum(rows, columns,arr);
    printf("\nMaximum hourglass sum is: %d",msum);
  }


   //freeing allocated memory
    for(i=0;i<rows;i++)
    {
      free(arr[i]);
    }
    free(arr);
  getchar();
    
  return 1; 
}
int MaxSum( int R ,int C ,int **arr)
{
    int i, j, sum;
    
 
    int max_sum= -9999; 
    for (i = 0; i < R - 2; i++)
    {
        for (j = 0; j < C - 2; j++)
        {
            //hourglass sum
            sum = (arr[i][j] + arr[i][j + 1]
                   + arr[i][j + 2])
                  + (arr[i + 1][j + 1])
                  + (arr[i + 2][j] + arr[i + 2][j + 1]
                     + arr[i + 2][j + 2]);
 
            
            if (sum > max_sum)
            {
                max_sum = sum;
            }
            
        }
    }//end of outer for
    return max_sum;
}
