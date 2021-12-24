#include <iostream>
using namespace std;


void printArray(int arr[], int size) {
    
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
int main() {

    int array1[] = {10, 20, 30};
    int arraySize = sizeof(array1)/sizeof(array1[0]);
    
    printArray(array1, arraySize);

    return 0;
}