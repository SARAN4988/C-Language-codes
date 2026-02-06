#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    int sum=0;
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
        
            
    }
    printf("%d",sum);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
