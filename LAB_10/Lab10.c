#include <stdio.h>
#include <string.h>

int main(){
	char name[100];

    printf("Enter a name : ");
    scanf("%[^\n]%*c", &name);

	int l = strlen(name);
	for(int i = l; i >= 0 ; i--){
		printf("%c", name[i]);
	}

	return 0;
}
