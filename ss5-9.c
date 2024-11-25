#include <stdio.h>
int main() {
    int choice;
    float a, b, c;
    
    do {
        printf("\n\nMENU\n1. Nhap 3 so\n2. Tong 3 so\n3. Trung binh cong 3 so\n4. So lon nhat\n5. So nho nhat\n6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Nhap 3 so:\n");
                scanf("%f %f %f", &a, &b, &c);
                break;
                
            case 2:
                printf("Tong 3 so: %.0f\n", a + b + c);
                break;
                
            case 3:
                printf("Trung binh cong 3 so: %.2f\n", (a + b + c) / 3);
                break;
                
            case 4:
                if(a>b && a>c){
                	printf("Max: %.0f",a);
				}else if(b>a && b>c){
					printf("Max: %.0f",b);
				}else{
					printf("Max: %.0f",c);
				}
                break;
                
            case 5:
                if(a<b && a<c){
                	printf("Min: %.0f",a);
				}else if(b<a && b<c){
					printf("Min: %.0f",b);
				}else{
					printf("Min: %.0f",c);
				}
                break;
                
            case 6:
                printf("Chuong trinh ket thuc.\n");
                break;
                
            default:
                printf("Khong hop le.\n");
        }
    } while (choice != 6);

    return 0;
}