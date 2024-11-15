#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"


void flushKey(void) {
   char ch = 'x';
   while(ch != '\n') {
      ch = getchar();
   }
}
int getInt(void) {
   int value;
   int done = 0;
   char newline = 'x';
   while(!done) {
      if(scanf("%d%c", &value, &newline) == 2) {
         if(newline == '\n') {
            done = 1;
         }
         else {
            printf("Please enter only an integer: ");
            flushKey();
         }
      }
      else { // user enterd non integer
         flushKey();
         printf("Invalid Integer, try again: ");
      }
   }
   return value;
}
int getIntMM(int min, int max, const char valueName[]) {
   int value = getInt();
   while(value < min || value > max) {
      printf("[%d<=%s<=%d], retry: ", min, valueName, max);
      value = getInt();
   }
   return value;
}
double getDbl(void) {
   double value;
   int done = 0;
   char newline = 'x';
   while(!done) {
      if(scanf("%lf%c", &value, &newline) == 2) {
         if(newline == '\n') {
            done = 1;
         } else {
            printf("Please enter only a double: ");
            flushKey();
         }
      } else { // user enterd non integer
         flushKey();
         printf("Invalid Double, try again: ");
      }
   }
   return value;
}
double getDblMM(double min, double max, const char valueName[]) {
   double value = getDbl();
   while(value < min || value > max) {
      printf("[%02.lf<=%s<=%.2lf], retry: ", min, valueName, max);
      value = getDbl();
   }
   return value;
}
void nl(void) {
    putchar('\n');
}
void pause(void) {
   printf("Press <ENTER> to continue....");
   flushKey();
}
int yes(void) {
   char resp;
   char newline;
   printf("(Y)es/(N)o: ");
   do {
      scanf("%c%c", &resp, &newline);
      if(newline != '\n') {
         flushKey();
         resp = 'x';
      }
   } while(resp != 'Y' && resp != 'y' && resp != 'n' && resp != 'N' 
               && printf("Only (y) for Yes and (n) for No are acceptable values; retry\n> "));  // lazy evaluation prints the error message
   return (resp == 'Y' || resp == 'y');
}



