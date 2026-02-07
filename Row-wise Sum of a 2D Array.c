#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int m, n;
    int arr[100][100];
    scanf("%d %d", &m, &n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += arr[i][j];
        }
        printf("%d\n", sum);
    }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
