#include <stdio.h>

int main() {
    // Khai bao va gan gia tri cho mang 
    int arr[] = {10, 20, 30, 40, 50};
    
    // Tính do dai mang 
    int length = sizeof(arr) / sizeof(arr[0]);

    // In cac phan tu cua mang 
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < length; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // In do dai mang 
    printf("Do dai cua mang la: %d\n", length);
    return 0;
}
