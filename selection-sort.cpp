#include <iostream>
using namespace std;


/* Swap Array */
void swapItem(int *item1, int *item2) {
    int temp = *item1;
    *item1 = *item2;
    *item2 = temp;
}

/* Selection Sort */
void selectionSort(int array[], int arraySize) {
    int min_index;

    for(int i = 0; i < arraySize - 1; i++) {
        min_index = i;
        for(int j =  i+1; j < arraySize; j++) {
            if(array[j] < array[min_index])
                min_index = j;
        }
        swapItem(&array[min_index], &array[i]);
    }
}


/* Print Array */
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

/* Main */
int main() {

    int array[] = {30, 20, 10, 15, 25, 35, 5, 2, 3};
    int arraySize = sizeof(array)/sizeof(array[0]);
    
    selectionSort(array, arraySize);
    printArray(array, arraySize);
    cout << "" << endl;

    return 0;
}