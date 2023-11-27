#include <stdio.h>

int main(){
    int n = 0;
    printf("Introdu un numar hex = "); scanf("%X", &n);

    printf("Octal = %o\n", (int)n);
    printf("Dec = %d\n", (int)n);

    return 0;
}
