#include <stdio.h>
int main() 
{ 
    char a;
    printf("Enter An Alphabet: ");
    scanf("%c", &a);
     if (isupper(a))
     {
            printf ("Input Alphabet Is In Capital Caps");
     }
     else if (islower(a))
     {
           printf ("Input Alphabet Is In Small Caps");
     }
     else 
     {
           printf("It is not a character"); 
     }







 return 0;
}
