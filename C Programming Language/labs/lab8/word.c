#include <stdio.h>

/*
 * Name : tome and jerry
 *Program to experiment with character arrays
 */

 #define MaxWord 20

 int main()
 {
     char c;
     char str[MaxWord+1];
     int len = 0;
     int sumLen = 0;
     int sumStr = 0;
     char maxLen[MaxWord+1];
     int MaxLen;
     puts ("Enter text. Include a dot ('.') to end a sentence exit:");
     do
     {
         c = getchar();
         if(len < MaxWord && c != ' ' && c != '.')
         {
             str[len] = c;
             len++;
             sumLen++;
         }
         else
         {
             if(len != 0){
                 str[len] = 0;
                 if(MaxLen < len + 1)
                 {
                     for(int i=0; i<len; i++)
                     {
                        maxLen[i] = str[i];
                     }
                     maxLen[len] = 0;
                     MaxLen = len + 1;
                 }
                 sumLen++;
                 printf("%s\n", str);
                 len = 0;
                 sumStr++;
             }

         }
     }while(c != '.');
     //str[len] = 0;
     //printf("%s\n", str);
     printf("sumLen : %d, sumStr : %d\n", sumLen, sumStr);
     printf("%s\n", maxLen);
 }
