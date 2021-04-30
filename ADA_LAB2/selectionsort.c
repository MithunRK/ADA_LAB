
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int arr[], int n)
{
    int i, j, min_idx,temp;


    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx]){
            min_idx = j;
          }
          temp=arr[min_idx];
          arr[min_idx]=arr[j];
          arr[j]=temp;
    }
    printf("Sorted array: \n");
     for ( int i=0; i < n; i++)
        printf("%d \t", arr[i]);
     printf("\n");
}

void main()
{   int n;
    clock_t start,end;
    double cpu_time_taken;
    printf("enter no of elements\n");
    scanf("%d",&n);
    int arr[n] ;
     for (int i = 0; i < n; i++)
            {
               arr[i]=rand()%100;
               printf("%d\t",arr[i]);

            }
     printf("\n");
    start=clock();
    selectionSort(arr, n);
    for (int c = 1; c <= 8000; c++) for (int d = 1; d <= 8000; d++) { }
    end = clock();
    cpu_time_taken = (double)(end - start) / CLOCKS_PER_SEC;


    printf("time spent: %f sec\n",cpu_time_taken);
    return ;
}
