#include <stdio.h>

int main(){
    int n = 0;
    printf("Introdu un numar : "); scanf("%d", &n);

    printf("%d * 5 = %d\n", n /= 5, n *= 5);
    printf("%d * 10 = %d\n", n /= 10, n *= 10);

    return 0;
}
