#include <stdio.h>
int main(){
	int n,i;
	printf("Nhap so luong phan tu cua mang n: ");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap cac phan tu cua mang:\n");
	for(i=0;i<n;i++){
		printf("Phan tu thu %d: ",i+1);
		scanf("%d",&arr[i]);
	}	
 //b
	printf("Mang da nhap: ");
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
	int a,b;
	printf("Nhap 2 so nguyen a va b (a<=b): ");
	scanf("%d%d",&a,&b);
	printf("Cac so nam trong doan [%d,%d]: ",a,b);
	for(i=0;i<n;i++){
		if(arr[i] >= a && arr[i] <= b){
			printf("%d",arr[i]);
		}
	}
	printf("\n");
}
