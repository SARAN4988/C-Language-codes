#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n<=1){
        printf("Not Prime");
        return 0;
    }
    for(int i=2; i<=n/2;i++){
        if(n%i==0){
            printf("Not Prime");  
            return 0;
        }
    }
            printf("Prime");

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
