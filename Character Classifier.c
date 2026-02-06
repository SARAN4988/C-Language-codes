#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char ch;
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    {
        printf("Uppercase Alphabet");
    } else if(ch>='a' && ch<='z')
    {
        printf("Lowercasse Alphabet");
    }
    else if(ch >='1' && ch <= '9'){
        printf("Digit");
    }else
        printf("Special Characcter");

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
