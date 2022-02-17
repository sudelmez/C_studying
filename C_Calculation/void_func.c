#include <stdio.h>
#include <math.h>
int main(){
	void usbulma();
	void karekok();
	void faktoriyel();
	
	int islem;
	printf("ISLEM SECINIZ:\n");
	printf("1.Us bulma\n2.Karekok bulma\n3.Faktoriyel bulma\n");
	scanf("%d",&islem);
	
	if (islem==1) usbulma();
	else if (islem==2) karekok();
	else if (islem==3) faktoriyel();
	else printf("Gecerli bir deger giriniz.");
	return 0;
}

void usbulma(){
	int a,b,i,m=1;
	printf("Ussu alinacak sayi:");
	scanf("%d",&a);
	printf("Us giriniz:");
	scanf("%d",&b);
	
	for(i=0;i<b;i++){
		m=m*a;
	}
	printf("cevap:%d",m);
}

void karekok(){
	int a ;
	printf("sayi giriniz:");
	scanf("%d",&a);
	printf("Karekoku: %.2f",sqrt(a));
}

void faktoriyel(){
	int a,i,m=1;
	printf("Sayi giriniz:");
	scanf("%d",&a);
	for (i=1;i<=a;i++){
		m=m*i;
	}
	printf("Faktoriyel:%d",m);
}

