#include <stdio.h>

int main()
{
    int n;
	printf("input : ");
	scanf("%d",&n);
    while (n >= 1) {
		if((n==1 || n%2 == 0 || n%3 == 0 || n%5==0 || n%7==0) 
            && (n!=2 && n!=3 && n!=5 && n!=7)){
			n--;
            continue;
        }
		printf("%d ",n);
		n--;
    }
    return 0;
}
