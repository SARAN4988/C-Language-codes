#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int numWaterBottles(int numBottles, int numExchange) {
    int total=numBottles;
    int empty=numBottles;
    while(empty>=numExchange){
        int newBottle = empty/numExchange;
        total=total+newBottle;
        empty=newBottle+(empty%numExchange);
    }
    return total;
    }
    
}

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
