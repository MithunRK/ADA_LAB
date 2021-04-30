#include<stdio.h>
int gcd(int a, int b){
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    return gcd(b % a, a);
}

void main(){
    int a, b,c=1;
    while(c){
        printf("Enter numbers to find their gcd. \n");
        scanf("%d %d",&a, &b);
        printf("gcd is %d\n",gcd(a, b));
        c=0;
    }

}
