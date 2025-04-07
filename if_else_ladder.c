#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a >= 10) {
        printf("Greater than or equal to 10\n");
    } else if (a >= 20) {
        printf("Less than or equal to 10\n");
    } else {
        printf("Neither condition met\n");
    }
    return 0;
}