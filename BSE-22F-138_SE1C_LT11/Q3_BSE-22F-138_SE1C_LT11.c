#include<stdio.h>
int main()
{
    int i=0;
    char s[50];
    FILE *result;
	result = fopen("output.txt","w");
	printf("Enter String : ");
    gets(s);
    while(s[i]!='\0')
    {
        if(s[i]=='0' || s[i]=='1' || s[i]=='2' || s[i]=='3'|| s[i]=='4'|| s[i]=='5'|| s[i]=='6'|| s[i]=='7'|| s[i]=='8'|| s[i]=='9')
        {
            s[i]='$';
        }
        i++;
    }
    if (result == NULL)
	   {
	   	printf("Error");
	   }
	else
	{
	printf("Success...");
	}
    fprintf(result,"String After Replacing 'Integer' by '$'");
    fprintf(result,"\n%s",s);
    return 0;
}
