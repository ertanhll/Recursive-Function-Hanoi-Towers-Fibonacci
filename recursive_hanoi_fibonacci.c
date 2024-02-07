
#include <stdio.h>
//str copy except the spaces
void special_copy( char *dest, char *source ){
    if( !*source ) *dest = '\0';
    else{
        if( *source == ' ' ) special_copy( dest, source + 1 );
        else{
            *dest = *source;
            special_copy( dest + 1, source + 1 );
        }
    }
}
//find the # of equal pairs in an integer array - intersection not allowed
//5,5,5,6 counts 1    5,5,5,5,6,4,4,7,7,8 counts 2
int equal_pairs( int A[], int size ){
    if( size < 2 ) return 0;
    if( A[ 0 ] == A[ 1 ] ) return 1 + equal_pairs( A + 2, size - 2 );
    return equal_pairs( A + 1, size - 1 );
}
// word count - no assumptions
int word_count_rec( char *s, int first_call_or_not ){
    if( *s == '\0' ) return 0;
    if( *s == ' ' && *( s+1 ) != ' ' && *( s+1 ) != '\0' )
        return 1 + word_count_rec( s+2, 1 );
    if( first_call_or_not == 0 )
        if( *s != ' ' ) return 1 + word_count_rec( s+1, 1 );
   return word_count_rec( s+1, 1 );
}
//Fibonacci numbers  f(0)=1 f(1)=1 f(n)=f(n-2)+f(n-1)
// 1 1 2 3 5 8 13...
int fibo( int n ){
    if( n < 2 ) return 1;
    return fibo( n-2 ) + fibo( n-1 );
}
void hanoi( char from, char to, char aux, int n ){
    if( n ){
        hanoi( from, aux, to, n - 1 );
        printf( "disk: %d from: %c, to: %c\n", n, from, to );
        hanoi( aux, to, from, n - 1 );
    }
}

int main(){
    char s1[ 20 ] = "aaa aa vv aa d ddd ";
    char s2[ 20 ] = " aa aa aa cdaae a   ";
    int A[ 10 ] = { 50,5,5,5,6,4,4,7,70,8 };
    printf( "# of words in \"%s\": %d\n", s1, word_count_rec( s1, 0 ) );
    printf( "s2 - before: \"%s\"\n", s2 );
    special_copy( s2, s1 );
    printf( "s2 - after: \"%s\"\n", s2 );
    printf( "# of eq. pairs in A: %d\n", equal_pairs( A, 10 ) );
    printf( "# of words in \"%s\": %d\n", s1, word_count_rec( s1, 0 ) );
    printf( "fibo(6): %d\n", fibo( 6 ) );
    hanoi( 'A', 'C', 'B', 8 );
}


