#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int start = 1;

    for (int i = 0; i < n; i++) {
        int length = n - i;
        int current = start;

        for (int j = 0; j < length; j++) {
            printf("%d", current);
            current = 1 - current;  
        }

        printf("\n");
        start = 1 - start;         
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
