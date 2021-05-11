#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int match_pattern(char text[], char pattern[]){
    int i, n, m, j;
    n = strlen(text);
    m = strlen(pattern);
    for(i = 0; i <= n - m; i++){
        j = 0;
        while(j < m && text[i+j] == pattern[j])
            j++;

        if(j == m)
            return i;

    }
    return -1;
}


void main(){
    char text[30], pattern[30];
    printf("Enter the 1st text\n");
    scanf("%s", text);
    printf("Enter the pattern to be matched\n");
    scanf("%s", pattern);
    int result = match_pattern(text, pattern);
    if(result == -1)
        printf("Pattern not found in given text\n");
    else
        printf("Pattern found at position %d", result);
}
