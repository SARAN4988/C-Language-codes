#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sumOfSquares(int n) {
    int sum = 0, digit;
    while (n > 0) {
        digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}
bool isHappy(int n) {
    int visited[1000] = {0};
    while (n != 1) {
        if (visited[n] == 1)
            return false;   
        visited[n] = 1;
        n = sumOfSquares(n);
    }
    return true;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isHappy(n))
        printf("true (Happy Number)\n");
    else
        printf("false (Not a Happy Number)\n");
   
    return 0;
}
