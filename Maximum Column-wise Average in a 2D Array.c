#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int r;
    scanf("%d", &r);

    int arr[r][12];
    int i, j;
    int max_avg = 0;
    for (i = 0; i < r; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (j = 0; j < 12; j++) {
        int sum = 0;
        for (i = 0; i < r; i++) {
            sum += arr[i][j];
        }
        int avg = sum / r;
        if (avg > max_avg) {
            max_avg = avg;
        }
    }

    printf("%d", max_avg);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
