#include <iostream>

using namespace std;

void insertionSort(int array[], int arraySize) {
    int key;
    int previousValue;

    //Start at position 1, not zero.
    for(int i = 1; i < arraySize; i++) {
        key = array[i]; 
        previousValue = i - 1;  
    
    //While key is greater than previous number, swap them
    while(previousValue >= 0 && array[previousValue] > key) {

        array[previousValue + 1] = array[previousValue];
        previousValue = previousValue - 1;
    }

    array[previousValue + 1] = key;

    }

}

void printArray(int array[], int arraySize) {
    for(int i = 0; i < arraySize; i++)
        cout << array[i] << " ";
}

int main() { 
    int array[] = {3, 5, 4, 1};
    int arraySize = sizeof(array)/sizeof(array[0]);

    insertionSort(array, arraySize);
    printArray(array, arraySize);
    return 0;
}