#include <stdio.h>
#include <stdlib.h>
// X deðerini klavyeden girildiðinde toplama yapan bir fonksiyon
int x_Toplam(int x){
	int toplam = 0;
	int i;
	for (i=1 ;i<=x;i++){
		toplam = toplam + i;
		
	}
	return toplam;
	
}
int main() {
	int x;
	printf("x degerini giriniz : "); scanf("%d",&x);
	printf("x e kadar olan sayilarin toplami : %d ",x_Toplam(x));
	return 0;
}
