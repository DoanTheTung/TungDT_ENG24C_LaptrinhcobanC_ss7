#include <stdio.h>
int main() {
	// Khai bao va gan gia tri cho mang 
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Mang ban dau: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    // Thay cac phan tu trong mang 
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] += 3;
        } else {
            arr[i] += 2;
        }
    }
    // In ra mang sau khi thay doi 
    printf("\nMang sau khi thay doi: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
