#include <iostream>
using namespace std;

int main() {

    int n, num;
    cout << "Enter number of elements:";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " numbers:";
    for (int i=0; i<n; i++)
        cin >> arr[i];

    // Selection Sort
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }

    cout << "Enter number to insert:";
    cin >> num;

    int pos=0;
    while (pos<n && arr[pos]<num)
        pos++;

    // Shift elements to the right
    for (int i=n; i>pos; i--)
        arr[i] = arr[i-1];

    arr[pos] = num;
    n++;  // Update array size

    cout << "Array after insertion:" << endl;
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    return 0;
}