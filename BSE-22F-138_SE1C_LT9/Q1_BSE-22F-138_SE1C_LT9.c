#include<stdio.h>
#include<string.h> 
main()
{     
     char str1[20], str2[20]; 
     int result;
     printf("Enter An String: ");
     gets(str1);
     printf("Enter Another String: ");
     gets(str2);
     result= compare(str1,str2); 
     if(result==0)
    {
    printf("Strings Are Equal");
    }    
    else
    {
    printf("Strings Are Not Equal");
    }


   return 0;
}
int compare(char *a,char *b)  
{  
   int flag=0;  
    while(*a!='\0' && *b!='\0')  
    {  
        if(*a!=*b)  
        {  
            flag=1;  
        }  
        a++;  
        b++;  
    }  
      
    if(flag==0)  
    return 0;  
    else  
    return 1;  
}  
