#include <stdio.h>

int main(){
    int a = 0, b = 0, c = 0, max = 0;
    printf("Introdu 3 numere : "); scanf("%d %d %d", &a, &b, &c);

    (a > b) ? (max = a) : (max = b);
    (max > c) ? (NULL) : (max = c);

    printf("MAX = %d", max);

    return 0;
}
