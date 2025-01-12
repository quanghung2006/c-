#include <stdio.h>
int main(){
	int n,i,sum=0,count=0;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		if(i%5 == 0){
			sum+= i;
			count++;
		}
	}
	printf("\n");
	printf("tong so nho hon %d chia het cho 5:%d\n",n,sum);
	printf("co %d so nho hon %d chia het cho 5:%d\n",n,count);
	return 0;
}


