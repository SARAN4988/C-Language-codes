#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int evenElementSum=0;
    int oddElementSum =0;
    int evenIndexSum  =0;
    int oddIndexSum =0;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            evenElementSum += arr[i];
        }
        else{
            oddElementSum += arr[i];
           
        }
        if(i%2==0){
            evenIndexSum += arr[i];            
        }
        else{
            oddIndexSum += arr[i];            
        }
    }
    printf("%d %d %d %d",evenElementSum,oddElementSum,evenIndexSum,oddIndexSum);
    
    return 0;
}
