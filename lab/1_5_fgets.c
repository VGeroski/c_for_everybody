#include <stdio.h>
#define MAXLINE 100

int main() {
   char str[MAXLINE];

   if( fgets (str, MAXLINE, stdin)!=NULL ) {
      puts(str);
   }
  
 printf("Line: %s", str);
}
