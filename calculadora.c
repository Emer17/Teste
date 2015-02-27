#include <stdio.h>

int main(){
	int op, a, b;
	float res;
	printf("Digite op\n");
	scanf("%d",&op);
	
	printf("Digite num 1\n");
	scanf("%d",&a);
	
	printf("Digite num 2\n");
	scanf("%d",&b);	
	
	switch(op){
		case 0: //soma
			res = a + b;
		break;
		
		case 1: //sub
			res = a - b;
		break;
		
		case 2: //mult
			res = a * b;
		break;
		
		case 3: //div
			res = a / b;
		break;
	}
	
	printf("resultado = %f\n",res);
	
	return 0;
}