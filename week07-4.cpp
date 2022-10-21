#include <stdio.h>
int main()
{
    printf("½Ð¿é¤J¼Æ¦r: ");
    int n;
    scanf("%d", &n);
    while( n>0 ){
        printf("%d\n", n%2);
        n = n / 2;
    }

}
