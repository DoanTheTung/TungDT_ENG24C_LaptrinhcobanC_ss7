#include <stdio.h>
int main() {
	int n;
	// Moi nguoi dung nhap so phan tu mang 
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    // Kiem tra cac phan tu 
    if (n <= 0) {
        printf("So phan tu phai lon hon 0.\n");
        return 1;
    }
    // Khai bao mang 
    int arr[100];
    // Nhap cac phan tu cua mang 
    printf("Nhap %d phan tu cua mang:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // In cac phan tu 
    printf("\nCac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}
