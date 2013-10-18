#include <stdlib.h>
#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	printf("%d => ", a);
	if(a==0){
		printf("nulla\n");
	}else if(a > 0 && a <= 13){
		while(a>0){
			if(a>=10){
				printf("X");
				a = a - 10;
			}else if(a==9){
				printf("IX");
				a = 0;
			}else if(a>=5){
				printf("V");
				a = a - 5;
			}else if(a==4){
				printf("IV");
				a = 0;
			}else{
				printf("I");
				a = a - 1;
			}
		}
		printf("\n");
	}else{
		printf("this is a negative number...\n");
	}
	return 0;
}