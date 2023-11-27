#include <stdio.h>
#include <math.h>

int main()
{
    int a = 0, b = 0;
    printf("Introdu 2 valori : "); scanf("%d %d", &a, &b);

    printf("Media aritmetica : %f\n", (float)(a+b)/2);
    printf("Media geometrica : %f\n", sqrt(a*b));
    printf("Media armonica : %f\n", 2/((1/(float)a)+(1/(float)b)));

    return 0;
}
