#include <stdio.h>
#include <string.h>
 
#define SIZE 40
 
int main()
{
  char buf[SIZE] = "program";
  char * ptr;
  int    ch = 'c';
  
  ptr = strrchr( buf, ch );
 printf( "The last occurrence of %c in '%s' is '%s'\n", ch, buf, ptr );
}
