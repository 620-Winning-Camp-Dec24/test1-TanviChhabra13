#include <iostream>
using namespace std;

void salary(int base)
{
    cout<<"Salary of intern="<<base;
}
void salary(int base, int bonus)
{
    cout<<"Salary of employee="<<(base+bonus);
}
void salary(int base, int bonus, int incentive)
{
    cout<<"Salary of manager="<<(base+bonus+incentive);
}
int main()
{
    int n;
    cout<<"To find Salary of intern enter 1\nTo find Salary of employee enter 2\nTo find Salary of manager enter 3\n";
    cin>>n;
    switch(n)
    {
        case 1:
        int base;
        cout<<"Enter Base pay: ";
        cin>>base;
        salary(base);
        break;
        
        case 2:
        int bonus;
        cout<<"Enter Base pay: ";
        cin>>base;
        cout<<"Enter Bonus: ";
        cin>>bonus;
        salary(base, bonus);
        break;
        
        case 3:
        int incentive;
        cout<<"Enter Base pay: ";
        cin>>base;
        cout<<"Enter Bonus: ";
        cin>>bonus;
        cout<<"Enter incentive: ";
        cin>>incentive;
        salary(base, bonus, incentive);
        break;
    }
    return 0;
}