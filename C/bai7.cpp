#include <stdio.h>
#include <string.h>
struct MATHANG{
	char TenMatHang[20];
	long SoLuongTon;
};
int main(){
	struct MATHANG matHang[3];
	int i;
	printf("Nhap thong tin cua 3 mat hang:\n");
	for(i=0;i<3;i++){
		printf("\nNhap thong tin mat hang %d:\n",i+1);
		printf("Ten mat hang: ");
		scanf(" %[^\n]s",matHang[i].TenMatHang);
		printf("So luong ton: ");
		scanf("%ld",&matHang[i].SoLuongTon);
	}
	printf("\nDanh sach cac mat hang da nhap:\n");
	for(i=0;i<3;i++){
		printf("\nNhap thong tin mat hang %d:\n",i+1);
		printf("Ten mat hang:%s\n",matHang[i].TenMatHang);
		printf("So luong ton:%ld\n",&matHang[i].SoLuongTon);
	}
	return 0;
}
