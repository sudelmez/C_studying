#include <stdio.h>
#include <string.h>
int main(){
	int i=0,j;
	char cumle[256];
	char terscumle[256];
	
	printf("cumle giriniz:");
	gets(cumle); 
	
	for(i=0;cumle[i]!='\0';i++){
		for(j=i+1;cumle[j]!='\0';j++){
			cumle[i]=cumle[j];
		}
	}
	/*
	int m=strlen(cumle);
	for(i=0;i<m/2;i++){
		cumle[i]=cumle[(m-1)];
		m--;
	}
	*/
	puts(cumle);
	

	
	return 0;
}
