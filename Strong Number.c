#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int factorial(int d) {
    int fact = 1;
    for(int i = 1; i <= d; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int T;
    scanf("%d", &T);

    while(T--) {
        int n, temp;
        scanf("%d", &n);

        temp = n;
        int sum = 0;

        while(temp > 0) {
            int digit = temp % 10;
            sum = sum + factorial(digit);
            temp = temp / 10;
        }

        if(sum == n) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
