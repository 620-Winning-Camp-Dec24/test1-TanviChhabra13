#include <iostream>
using namespace std;

int del(int arr[], int n) {
    bool leftRight = true;
    while (n > 1) {
        if (leftRight) {
            for (int i = 0; i < n; i = i + 2) {
                arr[i] = 0;
            }
        } else {
            for (int i = n - 1; i >= 0; i = i - 2) {
                arr[i] = 0;
            }
        }

        int temp = 0;
        for (int i = 1; i < n; i++) {
            if (arr[i] != 0) {
                arr[temp++] = arr[i];   
            }
        }
        n = temp;
        leftRight = !leftRight;
    }
    return arr[0];
}

int main() {
    int n;
    cout << "Enter last digit: ";
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    
    cout << "The remaining element is " << del(arr, n) << endl;
    
    return 0;
}
