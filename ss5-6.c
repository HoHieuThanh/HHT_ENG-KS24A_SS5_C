#include<stdio.h>
int main(){
	
	int choice;
	float a, b;
	printf("nhap vao 2 so nguyen bat ki:\n");
	scanf("%f %f", &a, &b);
	do{
		printf("\n\nCALCULATOR\n\n1.Tong 2 so\n2.Hieu 2 so\n3.Tich 2 so\n4.Thuong 2 so\n5.Thoat\n\nLua chon cua ban: ");
		scanf("%d", &choice);
		
		switch(choice) {
			
			case 1:
				printf("Tong: %.0f\n", a+b);
				break;
				
			case 2:
				printf("Hieu: %.0f\n", a-b);
				break;
			
			case 3:
				printf("Tich: %.0f\n", a*b);
				break;
				
			case 4:
				if(b!=0){
					printf("Thuong: %.1f\n", a/b);
				}else {
					printf("khong chia duoc\n");
				}
				break;
				
			case 5:
				printf("Chuong trinh ket thuc\n");
				break;
				
			default:
				printf("khong hop le\n");
		}
	}while(choice!=5);
	
	return 0;
}