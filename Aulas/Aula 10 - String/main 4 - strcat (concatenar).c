
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

main()
{
    char str1[100], str2[100];

    printf("\nEntre com uma string: ");
    gets(str1);
    gets(str2);
    strcat(str1, str2);
    printf("\n%s", str1);
    system("Pause");
}
