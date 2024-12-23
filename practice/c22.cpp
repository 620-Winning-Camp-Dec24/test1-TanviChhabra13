#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    
    if(n<=0){
    cout<<"False";
    }
    
    else if(n==1){
        cout<<"False";
    }
    
    else{
        double k= log10(n)/log10(3);
        if(k==floor(k)){
            cout<<"True";
        }
        else{
            cout<<"False";
        }
    }
    
    return 0;
}