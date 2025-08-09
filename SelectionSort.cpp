#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter the number of elements: ";
    cin >> num;

    int arr[num];
    cout << "Enter " << num << " numbers: ";
    for (int i = 0; i < num; i++)
        cin >> arr[i];

    // Selection Sort
    for (int i = 0; i < num - 1; i++) {
        for (int j = i + 1; j < num; j++) {
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }

    cout << "\nSorted array (Selection Sort): ";
    for (int i = 0; i < num; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}