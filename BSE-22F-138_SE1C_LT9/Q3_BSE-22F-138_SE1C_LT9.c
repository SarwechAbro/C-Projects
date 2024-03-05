#include <stdio.h>
int main() 
{
    char str1[100], str2[100], i;
    printf("Enter String Str1: ");
    fgets(str1, sizeof(str1), stdin);

    for (i = 0; str1[i] != '\0'; ++i) {
        str2[i] = str1[i];
    }

    str2[i] = '\0';
    printf("String Str2: %s", str2);
    return 0;
}
