#include <stdio.h>

int main(){
	int num[100] , n , count;
	printf("Input Array Size : ");
	scanf("%d",&n);
	
	for(int i = 0; i<n ; i++){ //loop ที่กำหนดค่าใน array
		printf("Array [%d] : ",i);
		scanf("%d",&num[i]);
	}

	

	for(int i = n-1; i>=0 ; i--){	//loop ที่ใช้ นับค่าและ Print ออกมา
		count = 0;
		for(int j = n-1; j>=0 ; j--){ //loop ที่ใช้นับค่าใน array
			if(num[i]==num[j]&&i!=j){ //เช็คค่าว่าซ้ำกันหรือไม่
				break;
			}
			count++;
			if(count==n){ //print ตัวที่ซ้ำกันออกมา
				printf("%d ",num[i]);
				break;
			}
		}
	}

	return 0;
}
