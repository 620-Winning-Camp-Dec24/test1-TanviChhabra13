#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements in array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int found = 0;
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                cnt++;
            }
        }
        if (cnt > n / 2) {
            cout << "Majority element is " << arr[i] << endl;
            found = 0;
            break;
        }
    }

    if (found!=0) {
        cout << "No Majority element" << endl;
    }

    return 0;
}
