//Swap Neighbour Elements in an Array
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

 

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
