#include <stdio.h>
int main(){
	int N,i;
	printf("Nhap so luong phan tu cua mang: ");
	scanf("%d", &N);
	int arr[N];
	printf("Nhap cac phan tu cua mang:\n");
	for(i = 0;i < N; i++){
		printf("phan tu thu %d: ",i+1);
		scanf("%d", &arr[i]);
	}
	printf("Mang da nhap: ");
	for(i=0;i<N;i++){
		printf("%d", arr[i]);
	}
	printf("\n");
	int sum=0;
	for(i=0;i<N;i++){
		sum += arr[i];
	}
	float avg = (float)sum / N;
	printf("\nGia tri trung binh cong cua mang la: %.2f\n", avg);
	return 0;
	}
