#include <stdio.h>

int main(){
	int num[100];
	int n;
	int count;
	printf("Input Array Size : ");
	scanf("%d",&n);
	
	for(int i = 0; i<n ; i++){
		printf("Array [%d] : ",i);
		scanf("%d",&num[i]);
	}

	for(int i = n-1; i>=0 ; i--){	
		count = 0;
		for(int j = n-1; j>=0 ; j--){
			if(num[i]==num[j]&&i!=j){
				break;
			}
			count++;
			if(count==n){
				printf("%d ",num[i]);
				break;
			}
		}
	}

	return 0;
}