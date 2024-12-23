#include <iostream>
using namespace std;

int sum(int n)
{
    if(n==0){
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return n+sum(n-1) ;
    }
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    
    if(n<0){
        cout<<"Enter positive number."<<endl;
    }
    else
    {
        cout<<"sum("<<n<<") is "<<sum(n);
    }

    return 0;
}