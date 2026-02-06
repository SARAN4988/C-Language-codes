#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int s = 0; s < (n - i - 1) * 2; s++)
            printf(" ");

        char ch = 'A';
        for(int j = 0; j < 2 * i + 1; j++) {
            printf("%c", ch);
            if(j < 2 * i) printf(" ");
            ch++;
        }
        printf("\n");
    }  
    return 0;
}
