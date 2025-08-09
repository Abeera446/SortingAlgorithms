#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number of elements:";
    cin >> num;

    int arr[num];
    cout << "Enter " << num << " elements:" << endl;
    for (size_t i=0; i<num; i++) {
        cout << "Element " << i+1 << ":";
        cin >> arr[i];
    }

    for (size_t i=0; i<num-1; i++) {

        for (size_t j=0; j<num-1-i; j++) {

            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "Sorted array (Bubble Sort):" << endl;
    for (size_t i=0; i<num; i++)
        cout << arr[i] << " ";

    return 0;
}