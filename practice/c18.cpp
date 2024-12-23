#include <iostream>
using namespace std;

int fac(int n)
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
        return n*fac(n-1) ;
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
        cout<<"fac("<<n<<") is "<<fac(n);
    }

    return 0;
}