#include <iostream>

using namespace std;


/* Merge Array Function */


/* Merge Sort Function */
void mergeSort(int array[], int start, int end) {
    int middle = start + (end - start) / 2;
}

/* Print Array Function */
void printArray(int array[], int arraySize) {
    for(int i = 0; i < arraySize; i++)
        cout << array[i];
}

int main() {

    int array[] = {10, 23, 1, 4, 20, 50};
    int arraySize = sizeof(array)/sizeof(array[0]);

    //Merge Sort
    mergeSort(array, 0, arraySize - 1);

    printArray(array, arraySize);

    return 0;
}