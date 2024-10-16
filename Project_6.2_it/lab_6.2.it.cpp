#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void CreateArray(int* arr, const int size, const int Low, const int High) {
    for (int i = 0; i < size; i++) {
        arr[i] = Low + rand() % (High - Low + 1); 
    }
}

void PrintArray(const int* arr, const int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << arr[i];
    }
    cout << endl;
}

int MaxIndex(const int* arr, const int size) {
    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

int MinIndex(const int* arr, const int size) {
    int minIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

void SwapMinMax(int* arr, const int size) {
    int minIndex = MinIndex(arr, size);
    int maxIndex = MaxIndex(arr, size);

    if (minIndex != maxIndex) {
        int temp = arr[minIndex];
        arr[minIndex] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}

int main() {
    srand((unsigned)time(NULL)); 

    const int n = 15;   
    int arr[n];
    int Low = 1;       
    int High = 100;    

    CreateArray(arr, n, Low, High);
    PrintArray(arr, n);

    cout << "Max element index: " << MaxIndex(arr, n) << " (value: " << arr[MaxIndex(arr, n)] << ")" << endl;
    cout << "Min element index: " << MinIndex(arr, n) << " (value: " << arr[MinIndex(arr, n)] << ")" << endl;

    SwapMinMax(arr, n);

    PrintArray(arr, n);

    return 0;
}
