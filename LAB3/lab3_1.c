#include<stdio.h>

int main(){
    int inputint ;
    float inputfloat ;
    char inputchar ;
    printf( "Please enter value : " ) ;
    scanf( "%d %f %c", &inputint, &inputfloat, &inputchar ) ;
    printf( "%d %.2f %c", inputint, inputfloat, inputchar ) ;
    return 0;
}
