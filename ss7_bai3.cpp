#include <stdio.h>
int main() {
	 // Khai bao va gan gia tri cho mang 
    int arr[5] = {3, 7, 10, 25, 18};
    int soChan = 0;
    printf("Cac so chan trong mang la:\n");
    // Kiem tra cac phan t cua mang 
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) { 
            printf("%d ", arr[i]);
            soChan = 1; 
        }
    }
    // Neu khong co so chan trong mang 
    if (!soChan) {
        printf("Mang khong chua so chan.\n");
    }
    return 0;
}
