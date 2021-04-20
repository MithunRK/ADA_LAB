#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int LinearSearch(int arr[], int l, int r, int x)
{
    if (r < l)
        return -1;
    if (arr[l] == x)
        return l;
    if (arr[r] == x)
        return r;
    return LinearSearch(arr, l + 1, r - 1, x);
}

int BinarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;


        if (arr[mid] == x)
            return mid;


        if (arr[mid] > x)
            return BinarySearch(arr, l, mid - 1, x);


        return BinarySearch(arr, mid + 1, r, x);
    }


    return -1;
}

int main()
{
    clock_t start_1, start_2, end_1, end_2;
    double cpu_time_spent_1, cpu_time_spent_2;
    int result, k,choice, n, x,j,a,i,c,d;
    while (1)
    {
        printf("1: linear search\n2: binary search\n 3: exit\n");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter no of elements:");
            scanf("%d", &n);
            int arr[n];

            for (int k = 1; k <= n; k++)
            {
               arr[k]=rand()%100;
               printf("%d\n",arr[k]);
            }
            printf("\nenter element to be found\n");
            scanf("%d", &x);
            start_1 = clock();
            result = LinearSearch(arr, 0, n-1, x);
            for (c = 1; c <= 8000; c++) for (d = 1; d <= 8000; d++) { }
            end_1 = clock();
            cpu_time_spent_1 = (double)(end_1 - start_1) / CLOCKS_PER_SEC;
            (result == -1) ? printf("Element is not present in array\n") :
            printf("Element is present at index %d\n", result);
            printf("time spent: %f sec\n",cpu_time_spent_1);
        }

        else if (choice == 2)
        {
            printf("Enter no of elements:");
            scanf("%d", &n);
            int arr[n];
            for (int k =1; k<=n; k++)
            {
               arr[k]=rand()%100;
            }
           for (i=1; i <=n;i++)
        {
            for (j = i + 1; j <= n; ++j)
            {
                if (arr[i] >arr[j])
                {
                    a =arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
                }

            }

        }
         for (int k =1; k <=n; k++)
            {
               printf("%d\n",arr[k]);
            }
            printf("\nenter element to be found\n");
            scanf("%d", &x);
            start_2 = clock();
            result = BinarySearch(arr, 0, n - 1, x);
            for (c = 1; c <= 5000; c++) for (d = 1; d <=5000; d++) { }
            end_2 = clock();
            cpu_time_spent_2 = (double)(end_2 - start_2) / CLOCKS_PER_SEC;
            (result == -1) ? printf("Element is not present in array\n") : printf("Element is present at index %d\n", result);
            printf("time used: %f sec\n", cpu_time_spent_2);
        }
        else
            break;
    }
    return 0;
}