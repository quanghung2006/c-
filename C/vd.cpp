#include <stdio.h>
int main(){
int n,i;
printf("Nhap so nguyen n: ");
scanf("%d",&n);
printf("Cac boi so cua 5 nho hon %d: ",n);
for(i = 5;i < n;i += 5){
	printf("%d",i);
}
printf("\n");
}

