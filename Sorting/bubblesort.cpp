#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size);

int main() {
    int array[] = {3, 1, 5, 3, 9, 10, 3, 11};

    cout << "Original array: ";
    for (int i : array)
        cout << i << ' ';
    cout << endl;

    bubbleSort(array, sizeof(array) / sizeof(array[0]));

    cout << "Sorted array: ";
    for (int i : array)
        cout << i << ' ';
    cout << endl;

    return 0;
}

void bubbleSort(int arr[], int size)
{
    int temp;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}