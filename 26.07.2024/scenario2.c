Question:
Mr. James is curious about the connection between two strings. The two strings are said to be properly connected if they have the same characters and are of equal length, but their order may differ. Can you assist Mr. James in determining whether the two given strings are properly connected by writing a program?

Input format:
The first and second lines are the strings

Output format:
The output is the string "connected" if the strings are properly connected otherwise "not connected".

Note:
The input strings must be composed of alphabetical characters.


Answer:
  
#include<stdio.h>
#include<string.h>
int areStringsConnected(char str1[], char str2[]){
	if(strlen(str1) !=strlen(str2)){
		return 0;
	}
	int count[26] = {0};
	for(int i=0;str1[i] != '\0';i++){
		count[str1[i] - 'a']++;
	}
	for(int i=0;str2[i] != '\0';i++){
		count[str2[i] - 'a']--;
	}
	for(int i=0;i<26;i++){
		if(count[i] != 0){
			return 0;
		}
	}
	return 1;
}
int main(){
	char str1[101],str2[101];
	scanf("%s",str1);
	scanf("%s",str2);
	if(areStringsConnected(str1,str2)){
		printf("connected\n");
	}else{
		printf("not connected\n");
	}
	return 0;
}
