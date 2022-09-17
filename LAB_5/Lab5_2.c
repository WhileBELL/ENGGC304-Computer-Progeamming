#include <stdio.h>

int main() {
    int y;
    scanf("%d", &y);

    int check = y % 4 ;
    printf(" check  = %d ",check);
    switch ( check ) {
        case 0:
            printf( "ffefefe" ) ;
            break;
        default:
            printf( "Feb = 28 days" ) ;
            break;
    }
    return 0 ;
}