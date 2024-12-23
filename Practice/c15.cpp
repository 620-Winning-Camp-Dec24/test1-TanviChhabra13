#include <iostream>
using namespace std;


int main() {
    int n;
    cout << "Enter number of elements in array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements in ascending order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] < arr[i]) {
            cout << "Array is not in ascending order." << endl;
            return 0;
        }
    }
    
    int temp=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[temp]){
            temp++;
            arr[temp]=arr[i];
        }

    }
    cout<<"No. of elements of array after removing duplicate elements= "<<temp+1<<endl;
    cout<<"Array is: ";
    for(int j=0; j<=temp;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}
