#include <stdio.h>
int main(){

int n,i;
int s1=0;
double s2=0;
printf("Nhap so nguyen n: ");
scanf("%d",&n);
for(i=0;i<n;i++){
	s1 += i;
}
for(i=0;i<n;i++){
	s2 += 1.0/i;
	printf("tong s1=%d\n",s1);
	printf("tong s2=%d\n",s2);
	return 0;
}
}
