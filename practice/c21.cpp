#include <iostream>
#include <string>
using namespace std;

void revStr(string str, int ind){
    if(ind<0){
        return;
    }
    else{
       cout<<str[ind];
       revStr(str,ind-1);
    }
}

int main()
{
    string str;
    cout<<"Enter string: ";
    getline(cin, str);
    
    cout<<"Reversed String:";
    revStr(str,str.length()-1);
    cout<<endl;
    
    return 0;
}