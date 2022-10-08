#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct people {
    char name[100] ;
    char date[100] ;
    char count_n_n[100] ;
    int day ;
    
} typedef P ;

P p[100] ;

int minmax ( P p[] , int c ) {
  char *maxn , *minn ;
  int max = p[0].day ;
  int min = p[0].day ;

  int i = 0 ; 

  while ( i < c ) {
    if ( p[i].day > max ) {
      max = p[i].day ;
      maxn = p[i].name ;
    } // END IF

    if ( p[i].day < min ) {
      min = p[i].day ;
      minn = p[i].name ;
    } // END IF
    i++ ;
  } // END WHILE

  printf ( "Max : %s [%d Years, %d Months]\n" , maxn, max/365, max%365/30 ) ;
  printf ( "Min : %s [%d Years, %d Months]\n" , minn, min/365, min%365/30 ) ;
} // END FUNCTION

int print_n_y_m ( P p[] , int c ) {
  int token[100][100] ;

  int count = 0 ;

  for( int i = 0 ; i < c ; i++ ) {
    char *date = p[i].date ;
    char *piece = strtok( date,"-" ) ;
    while ( piece != NULL ) {
      token[i][count] = atoi (piece) ;
      piece = strtok(NULL, "-") ;
      count++ ;
    } // END WHILE
    count = 0 ;
  } // END FOR

  for (int i = 0 ; i < c ; i++) {
    token[i][4] = (2018-token[i][0]) * 365  ;
    token[i][4] = token[i][4] + (6-token[i][1]) * 30 ;
    token[i][4] = token[i][4] + (21-token[i][2]) ; 
    p[i].day = token[i][4] ;
  } //END FOR

  for ( int i = 0 ; i < c ; i++ ) {
    int Year = p[i].day / 365 ;
    int Month = ( p[i].day % 365 ) / 30 ;
    printf ( "%s %d Years, %d Months\n", p[i].name , Year , Month ) ;
  } //END FOR
  
} //END FUNCTION

int File (P p[100]) {
  int count = 0 ;
  FILE *fp ;
  fp = fopen ( "a.txt" , "r" ) ;

  char delete[100] ;
  fscanf ( fp, "%s\t%s\t\t%s\n" , delete , delete , delete ) ;

  while ( fscanf ( fp, "%s\t%s\t\t%s\n", p[count].count_n_n ,p[count].name, p[count].date) != EOF ) {
     count++ ;
  }  // END WHILE
  fclose ( fp ) ;
  return count ;
} // END FUNCTION

int main ( ) {
  int count = File(p) ;
  print_n_y_m ( p, count ) ;
  printf( "\n" ) ;
  minmax ( p , count ) ;
}