#include <stdio.h>

int main(){
	int years;
	printf("input years : ");
	scanf("%d",&years);
	if(years % 4 == 0)
		if(years % 400 == 0)
			printf("Feb = 29 day");
		else if(years % 100 == 0)
			printf("Feb = 28 day");
		else
			printf("Feb = 29 day");
	else
		printf("Feb = 28 day");

	return 0;
}
