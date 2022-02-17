#include <stdio.h>
int main(){
	int i=0;
	int j;
	int say=0;
	char cumle[25];
	printf("bir cumle giriniz:");
	gets(cumle);
	char harfler[25];
	int a=0;
	while(cumle[i]!='\0'){
		if((cumle[i]>='A')&&(cumle[i]<='Z')){
			say++;
			harfler[a]=cumle[i];
			a++;
		}
		i++;
	}

	printf("Buyuk harfler:");
	for(i=0;harfler[i]!='\0';i++){
		
		printf("%c,",harfler[i]);
	}
	printf("\nBuyuk harf sayisi:%d",say);
	

	return 0;
}
