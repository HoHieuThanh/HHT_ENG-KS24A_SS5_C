#include <stdio.h>
int main(){
	
	int i, n, tich;
	printf("bang cuu chuong so (1-10): ");
	scanf("%d", &i);
	if(1<=i && i<=10){
		for(n=1;n<=10;n++) {
			tich=i*n;
			printf("%d * %d = %d\n", i, n, tich);
			
		}
		
	}else{
		printf("khong hop le");
	}
	return 0;
}