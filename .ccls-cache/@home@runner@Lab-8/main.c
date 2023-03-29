#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

int dummy_function(int i, long j){
            return i&(~j);
}

int main(){
   
   char* str = "Failure is simply the opportunity to begin again, this time more intelligently.";
   int myint = INT_MAX - 26;
   long mylong = LONG_MIN + 2570;
   struct S7 {
         int i; int j; char c;
          };
   struct S7 s;
   struct S7 r[12];
   int *ptr_int = (int *)str+9;
   long *ptr_long = (long *)str+3;
   printf("%d", dummy_function(*ptr_int,*ptr_long));
   return 0;
   }