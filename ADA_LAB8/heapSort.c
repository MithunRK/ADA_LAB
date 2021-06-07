
#include <stdio.h>
#include <time.h>


void main(){

clock_t start,end;
double cpu_time_taken;
int n,i;

printf("enter number of elements\n");
scanf("%d", &n);

int a[n] ;
    printf("chosen array is:");
     for (int i = 0; i < n; i++)
            {
               a[i]=rand()%100;

               printf("%d\t",a[i]);

            }
     printf("\n");
start=clock();
heap_sort(a,n);
for (int c = 1; c <= 8000; c++) for (int d = 1; d <= 8000; d++) { }
    end = clock();
    cpu_time_taken = (double)(end - start) / CLOCKS_PER_SEC;
printf("sorted array:");

for(int i=0;i<n;i++)

printf("%d\t",a[i]);
printf("\n");
printf("time spent: %f sec\n",cpu_time_taken);
getch();

}





heap_sort(int a[], int n){

int i, temp;

heap_cons(a,n);

for(int i=n-1;i>0;i--)

{

temp=a[0];

a[0]=a[i];

a[i]=temp;

heap_adj(a,i);

}

}


void heap_adj(int a[], int n)
{
int i,j,item;
j=0;
item=a[j];
i=2*j+1;
while(i<=n-1)
{
if(i+1<=n-1)
{
if(a[i]<a[i+1])
i++;
}
if(item<a[i])
{
a[j]=a[i];
j=i;
i=2*j+1;
}
else
break;
}
a[j]=item;
}


void heap_cons(int a[], int n)
{
int i,j,k,item;
for(k=1;k<n;k++)
{
item=a[k];
i=k;
j=(i-1)/2;
while(i>0 && item>a[j])
{
a[i]=a[j];
i=j;
j=(i-1)/2;
}
a[i]=item;
}
}
