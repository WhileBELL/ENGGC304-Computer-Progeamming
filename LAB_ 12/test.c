#include <stdio.h>
#include <string.h>

struct person {
    char name[100] ;
    float salary ;
    int duration ;
};

struct person p[100] ;

int check_emp ( char check , int a ) {
    char name[100] ;
    switch ( check ) {
        case 'y' :
            getchar() ;
            printf ( "Employee Name : " ) ;
            gets(p[a].name);
            printf ( "Salary (Bath/Month) : " ) ;
            scanf ( "%f" , &p[a].salary ) ;
            printf ( "Duration (Year) : " ) ;
            scanf ( "%d" , &p[a].duration ) ;
            break ;
        case 'n' :
            return 0;
        default :
            getchar();
            printf ( "Employee Name : " ) ;
            gets(p[a].name);
            printf ( "Salary (Bath/Month) : " ) ;
            scanf ( "%f" , &p[a].salary ) ;
            printf ( "Duration (Year) : " ) ;
            scanf ( "%d" , &p[a].duration ) ;
            break ;
    }//END SWITCH CASE
}//END FUNCTION

void avgpayment ( int c ) {
    c = c - 1 ;
    float avg , payment = 0 ;
    int i = 0 ;
    
    while ( i <= c ) {
        payment = p[i].salary + payment ;
        i++ ;
    }//END WHILE

    avg = payment / c ;

    printf ( "Average of Salary : %.2f Bath \n", avg ) ;
    printf ( "Payment of every month : %.2f Bath \n", payment ) ;
    printf ( "** Most duration in this business ** \n" ) ;
}//END FUNCTION

void mostduration ( int c ) {
    c = c - 1 ;
    float per_yaers[c] ;

    int i = 0 ;

    while ( i <= c ) {
        per_yaers[i] = p[i].salary * ( p[i].duration * 12 ) ;
        i++ ;
    }//END WHILE
    
    int max = per_yaers[0] ;
    int icount = 0 ;
    int ii = 0 ;

    while (ii <= c) {
        int check_max = per_yaers[ii] > max ; 
        switch ( check_max ) {
            case 1 :
                max = per_yaers[ii] ;
                icount = ii ;
                ii++ ;
                break ;
            case 0 :
                ii++ ;
                break ;
        }//END SWITCH CASE
    }

    printf ( "Name : %s (%d Years)\n", p[icount].name , p[icount].duration ) ;
    printf ( "Salary : %.2f Bath \n", p[icount].salary ) ;
}//END FUNCTION

int main() {
    int c = 0 ;
    int yn = 1 ;
    char check ;
    while ( yn ) {
        printf ( "Do you want to Enter Employee Information? (y/n) : " ) ;
        scanf ( " %c", &check ) ;
        yn = check_emp( check, c ) ;
        c++ ;
    }//END WHILE
    avgpayment( c ) ;
    mostduration( c ) ;
}
