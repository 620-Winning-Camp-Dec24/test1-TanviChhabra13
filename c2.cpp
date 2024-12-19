#include <iostream>
using namespace std;

int main()
{
    int n;
    int count=0;
    cout<<"Enter n:";
    cin>>n;
    if(n==0)
    {
        cout<<"Number of digit=1";
    }
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    cout<<"Number of digit="<<count;
    return 0;
}