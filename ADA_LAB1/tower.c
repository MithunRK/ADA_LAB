#include <stdio.h>

void tower(int, char, char, char);

int main()
{
    int num;
    printf("Enter number of disks : ");
    scanf("%d", &num);
    printf("------ moves involved in the Tower of Hanoi are -------\n");
    tower(num, 'A', 'C', 'B');
    return 0;
}

void tower(int num, char source, char destination, char temp)
{
    if (num == 1)
    {
        printf("\n Move disk 1 from  %c -> %c", source, destination);
        return;
    }
    tower(num - 1, source, temp, destination);
    printf("\n Move disk %d from  %c -> %c", num, source, destination);
    tower(num - 1, temp, destination, source);
}
