#include <stdio.h>

main()
{
    float matriz[50][50];
    float *p;

    p=matriz[0];

    for(int i=0; i<2500; i++) {
        *p=0.0;
        p++;
        printf("%f\n", p);
    }
}