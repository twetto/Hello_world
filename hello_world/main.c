/* Hello world code to test GitHub
 * twetto, 2015/10/29
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *str;

    str = malloc(13*sizeof(char));
    scanf(" %s", str);
    if(strcmp(str, "Hello_World!") == 0)
        printf("Hello World!\n");
    return 0;
}

