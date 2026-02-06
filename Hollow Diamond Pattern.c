#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    n = n*2 - 1;
    int a= (n+1)/2;
    int b= (n+1)/2;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j==a || j==b){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        if(i<(n+1)/2){
            a--;
            b++;
        }else{
            a++;
            b--;
        }
    }
  


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
