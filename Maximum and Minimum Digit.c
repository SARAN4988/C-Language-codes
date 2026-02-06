#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    n = abs(n);   
    int max = 0;
    int min = 9;
    if (n== 0) {
        printf("0 0");
        return 0;
    }

    while (n>0) {
        int temp = n % 10;

        if (temp > max)
            max = temp;
        if (temp < min)
            min = temp;

        n/= 10;
    }

    printf("%d %d", max, min);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
