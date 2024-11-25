#include <stdio.h>
int main() {
	
    int a, b, i, bcnn;
    printf("Nhap vao 2 so nguyen duong:\n");
    scanf("%d %d", &a, &b);
    for(i=1;; i++) {
        if (i % a == 0 && i % b == 0) {
            bcnn = i;
            break;
        }
    }
    printf("Boi chung nho nhat cua %d va %d la: %d\n", a, b, bcnn);

    return 0;
}