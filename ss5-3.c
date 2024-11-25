#include <stdio.h>
int main () {
	
	int i, n, sum;
	printf("nhap vao 1 so nguyen duong: ");
	scanf("%d", &i);
	n=i;
	if(i>0){
		for(sum = 0;; i--){
			sum = sum+ i;
			if(i < 1){
				printf("tong cac so tu 1 den %d la: %d", n, sum);
				break;
			}
		}
	}else{
		printf("so nhap vao khong hop le");
	}
	return 0;
}