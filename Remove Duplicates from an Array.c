#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], unique[n];
    int k = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++) {
        int found = 0;
        for(int j = 0; j < k; j++) {
            if(arr[i] == unique[j]) {
                found = 1;
                break;
            }
        }
        if(!found) {
            unique[k++] = arr[i];
        }
    }
    for(int i = 0; i < k; i++) {
        printf("%d ", unique[i]);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
