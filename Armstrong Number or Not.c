#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,r,sum=0;
    scanf("%d",&n);
    int temp=n;
    int count=0;
    while (n!=0){
        n=n/10;
        count++; 
    }
    n=temp;
    while(temp>0){
        r=temp%10;
        int mul=1;
    
    for(int i=1;i<=count;i++){
        mul=mul*r;
    }
    sum=sum+mul;
    temp/=10;
}
    if(n==sum){
        printf("true");
    }else
        printf("false");
   
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
