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
            if (arr[i] == arr[j]) {
                cnt++;
            }
        }
        if (cnt == 1) {
            cout << "Single element is " << arr[i] << endl;
            found = 0;
            break;
        }
    }

    return 0;
}
