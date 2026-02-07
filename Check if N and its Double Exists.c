//Check if N and its Double Exists
#include <stdbool.h>
#include <stdlib.h>
#define MAX_SIZE 2001 
#define OFFSET 1000

bool checkIfExist(int* arr, int arrSize) {
    bool seen[MAX_SIZE] = {false};  

    for (int i = 0; i < arrSize; i++) {
        int num = arr[i];
        int doubleVal = num * 2;
        int halfVal = num / 2;

        
        if (doubleVal >= -1000 && doubleVal <= 1000) {
            if (seen[doubleVal + OFFSET]) {
                return true;
            }
        }
        if (num % 2 == 0 && halfVal >= -1000 && halfVal <= 1000) {
            if (seen[halfVal + OFFSET]) {
                return true;
            }
        }
        seen[num + OFFSET] = true;
    }

    return false;
}   
