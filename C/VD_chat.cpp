#include <stdio.h>

int main() {
    int n;

    // Nh?p s? ph?n t? c?a m?ng
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    // Nh?p gi� tr? cho c�c ph?n t? c?a m?ng
    printf("Nhap cac gia tri cho mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Xu?t c�c ph?n t? c?a m?ng
    printf("Mang da nhap la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

