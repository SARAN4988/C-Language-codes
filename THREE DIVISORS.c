#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,count =0;
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        if(n%i==0){
            count++;
        }
        
    }
    if(count ==3){
        printf("true");
    }else{
        printf("false");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
