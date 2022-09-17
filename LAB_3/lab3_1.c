#include<stdio.h>

int main(){
    int A ;
    float B ;
    char C ;
    printf( "Please enter value : " ) ;
    scanf( "%d %f %c", &A, &B , &C ); 
    printf( "%d %.2f %c", A, B , C);
    return 0;
}