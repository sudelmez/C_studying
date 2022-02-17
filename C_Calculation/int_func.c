#include <stdio.h>
#include <math.h>
int main(){
	int usbulma();
	float karekok();
	int faktoriyel();
	int m;
	int islem;
	printf("ISLEM SECINIZ:\n");
	printf("1.Us bulma\n2.Karekok bulma\n3.Faktoriyel bulma\n");
	scanf("%d",&islem);
	printf("islem yapilmasini istediginiz sayi:");
	scanf("%d",&m);
	
	if (islem==1) printf("cevap:%d",usbulma(m));
	else if (islem==2) printf("cevap:%.2f",karekok(m));
	else if (islem==3) printf("cevap:%d",faktoriyel(m));
	else printf("Gecerli bir deger giriniz.");
	return 0;
}

int usbulma(int a){
	int i,n,k=1;
	printf("us giriniz:");
	scanf("%d",&n); 
	for(i=0;i<n;i++){
		k=k*a;
	}
	return k;
}

float karekok(int a){
	return (sqrt(a));
}

int faktoriyel(int a){
		int i,m=1;
	for (i=1;i<=a;i++){
		m=m*i;
	}
	return m;
}
