#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int num = 5;
    printf("%d\n", num);
    
    
    /*program won't run*/
    num = 8;
    printf("%d\n", num);
    return 0;
}