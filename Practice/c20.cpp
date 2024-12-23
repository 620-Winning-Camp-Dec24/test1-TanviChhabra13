#include <iostream>
using namespace std;

int sum(int n, int arr[])
{
    if(n==0){
        return arr[0];
    }
    else
    {
        return sum(n-1,arr)+arr[n];
    }
}

int main()
{
    int n;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    
    if(n<0){
        cout<<"Enter positive number."<<endl;
    }
    
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"arraySum is "<<sum(n-1, arr);

    return 0;
}