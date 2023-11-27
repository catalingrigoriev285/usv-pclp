#include <stdio.h>

int main(){
    int n = 0;
    printf("Introdu un numar : "); scanf("%d", &n);

    printf("%d * 2 = %d", n /= 2, n *= 2);

    return 0;
}
