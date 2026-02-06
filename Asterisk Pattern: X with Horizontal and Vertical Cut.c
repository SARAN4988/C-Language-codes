#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==(n+1)/2){
                printf("* ");
            }
            else if(i==j){
                printf("* ");
            }
            else if(i+j == n+1){
                printf("* ");
            }
            else if(j == (n+1)/2){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }   


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
