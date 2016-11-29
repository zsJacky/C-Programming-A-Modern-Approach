#include<stdio.h>

main() {
    int i;
    int j;
    int m;

    scanf("%d", &i);
    scanf("%d", &j);
    //i = 3;
    //j = 2;
    m = i>j?1:i<j?-1:0;
    printf("%d", m);

    return 0;
}
