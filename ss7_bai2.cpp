#include <stdio.h>

int main() {
	// khai bao mang 
   int arr[5]; 

    // moi nguoi dung nhap ohan tu  
    printf("Nhap 5 phan tu cua mang:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // In ra ca phan tu cua mang 
    printf("\nCac phan tu trong mang la:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
