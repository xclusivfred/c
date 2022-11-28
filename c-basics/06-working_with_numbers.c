#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%f\n", 5.0 + 4.5);
    printf("%f\n", 5.0 - 4.5);
    printf("%f\n", 5.0 * 4.5);
    printf("%f\n", 5.0 / 4.5);

    /* math between integer and decimal should make use of %f */
    printf("%f\n", 4 + 5.9);
    printf("%d\n", 4 + 5);

    /*more complex math functions*/
    printf("%f\n", pow(2, 3));
    printf("%f\n", sqrt(36));
    printf("%f\n", ceil(36.356));
    printf("%f\n", floor(36.656));

    return 0;
}