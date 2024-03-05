#include<stdio.h>
#include<string.h> 
int main()
{     
     char str1[20], str2[20]; 
     char result;
     printf("Enter An String: ");
     gets(str1);
     printf("Enter Another String: ");
     gets(str2);
     joinstring(str1,str2); 
     printf("Joined String is: '%s'\n", str1);


   return 0;
}
int joinstring(char* str1, char* str2)
{
    int i;
    int j = strlen(str1);
    for (i = 0; str2[i] !='\0'; i++) 
    {
        str1[i + j] = str2[i];
    }
        str1[i + j] = '\0';
    }  