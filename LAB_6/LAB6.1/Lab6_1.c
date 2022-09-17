#include <stdio.h>

int main(){
	int a;
	printf("input your line : ");
	scanf("%d", &a);
	
	for (int y = 1; y <= a; y++){
		for (int x = 1; x <= y; x++){
			printf("*");
		}
		printf("\n");
    }
	
    return 0;
}
