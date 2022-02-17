#include <stdio.h>

int main(){
	int i;
	char cumle[256];
	printf("Bir cumle giriniz:");
	gets(cumle);
	int fark='a'-'A';
	
	for (i=0;cumle[i]!='\0';i++){
		if((cumle[i]>='a')&&(cumle[i]<='z')){
			cumle[i]-=fark;
		}
	}
	puts(cumle);
	

	
	return 0;
}
