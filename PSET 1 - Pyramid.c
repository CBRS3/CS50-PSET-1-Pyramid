#include <stdio.h>
#include <cs50.h>

int main()
{
    int a = 0;
    char c = '#';
    char d = ' ';
    
    do
    {
        printf("Height:");
        a = GetInt();    
    }
    while(a > 23 || a <= 0);
    
    int g = a;
    
   for(int b = 0; b < a; b++)
   {
       int e = 0, f = (a - g + 1);
       
       do
       {
           printf("%c", d);
           e++;
       }
       while (0<(g-e));
       
       do
       {
           printf("%c", c);
           f--;
       }
       while (f > 0);
       
       g--;
       
       printf("%c\n", c);
   }
}