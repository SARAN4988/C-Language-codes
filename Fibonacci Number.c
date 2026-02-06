#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int a=0;
    int b=1;
    int c=0;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d",c);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
