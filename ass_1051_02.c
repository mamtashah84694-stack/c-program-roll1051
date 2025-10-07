#include<stdio.h>
int main() 
{
    char str[100];
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) 
      {
           char ch = str[i];
           if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
              {
                    str[i] = ch - 32; 
               }
       }
    printf("String after converting vowels to uppercase: %s", str);
    return 0;
}
