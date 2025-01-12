#include <stdio.h>
int main(){
	int n,m,i;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	printf("Nhap so nguyen m: ");
	scanf("%d",&m);
	printf("so nguyen n=%d,so nguyen m=%d");
	printf("Hcn co kich thuoc %d*%d: ",n,m);
	for(i=0;i<n;i++){
		printf("******\n");
	}
	return 0;
}
