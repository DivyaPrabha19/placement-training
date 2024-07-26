#include <stdio.h>
#include <string.h>

int main() {
  char str1[50];
  char str2[50];
  char str3[50];

  printf("string1: ");
  scanf("%s", str1);

  printf("string2: ");
  scanf("%s", str2);
	printf("1. strcat(): %s\n",strcat(str1,str2));
	char j=strlen(str1);
	char k=strlen(str2);
	printf("2. strlen(): %d\n",j);
	printf("3. strcpy(): %s\n",str1);
	printf("4. strcmp(): %d\n",strcmp(str1,str2));
	int q,n,h;
	printf("characters to be copied: ");
	scanf("%d",&q);
	char i,s[20];
	for(i=0;i<q;i++){
		str3[i]=str1[i];
	}
	printf("5. strncpy(): %s\n",str3);
	printf("characters to be concatenated: ");
	scanf("%d",&n);
	printf("6. strncat(): %s\n",strncat(str1,str2,n));
	printf("7. strcasecmp(): %d\n",strcasecmp(str1,str2));
	printf("characters to be compared: ");
	scanf("%d",&h);
	printf("8. strncasecmp(): %d\n",strncasecmp(str1,str2,h));
	printf("Enter initial segment: ");
	scanf("%s",s);
	int l=strspn(str1,s);
	printf("9. strspn(): %d\n",l);
	char delim[]=",";
	char result [20];
	printf("10. strtok(): %s\n",strtok(str1,delim));
}
	
// write your code here...
