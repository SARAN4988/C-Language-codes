#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,rev = 0;
    scanf("%d",&n);
    while(n != 0){
       rev = rev *10 +(n%10);
       n = n/10;
    }
    printf("%d",rev);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
