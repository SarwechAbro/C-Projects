#include<stdio.h>
#include<string.h>
int main()
{   
    char a[1000]; 
    int i,len,vow=0;
	FILE *open;
	open = fopen("input.txt","r");
	if (open == NULL)
	   {
	   	printf("Error");
	   }
	else
	{
	printf("Success...");
	}
	fgets(a,sizeof(a),open);
      len=strcspn(a,"\n");
	  for(i=0;i<len;i++)
      {
	  
	if(a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E' || a[i]=='i' || a[i]=='I' || a[i]=='o' || a[i]=='O' || a[i]=='u' || a[i]=='U')
			vow=vow+1;
      }
		if(vow==1)
		{
		printf("There Is Only %d Vowel In String",vow); //additional condition for only one vowel
	    }
	    else 
	    {
	    printf("There Are %d Vowel(s) In String",vow);	
		}
	return 0;
} 
  
