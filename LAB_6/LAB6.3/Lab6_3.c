#include <stdio.h>

int main () {
	int a;
	printf("input your line : ");
	scanf("%d", &a);
	if(a % 2 == 0){
		for (int y = 1; y <= a; y++) {
			for (int x = a-1; x >= y; x--){
				printf(" ");
			}
			for (int x = 1; x <= y; x++){
				printf("* ");
			}
			printf("\n");
    	}
	}
	else{
		for (int y = 1; y <= a; y++) {
			for (int x = 2; x <= y; x++){
				printf(" ");
			}
			for (int x = a; x >= y; x--){
				printf("* ");
			}
			printf("\n");
    	}
	}

	return 0;
}