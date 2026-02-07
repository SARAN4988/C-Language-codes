//search an elemenr in an array7
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N, X;
    scanf("%d %d", &N, &X);
    
    int found = 0; 
    for (int i = 0; i < N; i++) {
        int element;
        scanf("%d", &element);
        if (element == X) {
            found = 1;
            break;
        }
    }
    
    if (found) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
