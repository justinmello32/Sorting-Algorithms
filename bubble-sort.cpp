#include "iostream"

using namespace std;

/* Swap Elements Function */
void swap(int *item1, int *item2) {
    int temp = *item1;
    *item1 = *item2;
    *item2 = temp;
}

/* Bubble Sort Function */
void bubbleSort(int array[], int arraySize) {

    for(int i = 0; i < arraySize - 1; i++) {
        for(int j = 0; j < arraySize - i - 1; j++) {
            if(array[j] > array[j+1])
                swap(&array[j], &array[j+1]);
        }
    }
    
}

/* Print Array Function */
void printArray(int array[], int arraySize) {

    for(int i = 0; i < arraySize; i++ ) {
        cout << array[i] << " ";
    }
    cout << " ";
}

int main() {

    int array[] = {90, 34, 2, 15, 36, 3, 23};
    int arraySize = sizeof(array)/sizeof(array[0]);
    bubbleSort(array, arraySize);
    printArray(array, arraySize);

    
    return 0;
}