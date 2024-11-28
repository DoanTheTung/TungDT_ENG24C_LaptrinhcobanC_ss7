#include <stdio.h>
int main() {
	int n;
	// Khai bao va ga gia tri cho mang 
    int arr[5] = {12, 7, 19, 3, 25};
    // Khai bao bien min,max 
    int max = arr[0];
    int min = arr[0];
    // Tim so lon nhat va so nho nhat 
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    // In ket qua 
    printf("Phan tu lon nhat trong mang la: %d\n", max);
    printf("Phan tu nho nhat trong mang la: %d\n", min);
    return 0;
}
