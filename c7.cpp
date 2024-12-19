#include <iostream>
#include<string>
using namespace std;

class student
{
    public:
    void Student_details()
    {
        string name;
        int roll_no;
        cout<<"Enter name:";
        getline(cin,name);
        cout<<"Enter roll number:";
        cin>>roll_no;
        cout<<"Name is "<<name<<endl;
        cout<<"Roll number is "<<roll_no<<endl;
    }
    
};

class result: public student
{
    public:
    void marks()
    {
        int n,marks,total;
        cout<<"Enter number of subjects:";
        cin>>n;
        cout<<"Enter marks of subjects:";
        for(int i=1; i<=n;i++)
        {
            cin>>marks;
            total+=marks;
        }
        cout<<"Total marks="<<total<<endl;
    
        cout<<"Percentage="<<(total/n)<<endl;
    }
    
};

int main() {
    result Stu;
    cout<<"Details of Student:-"<<endl;
    Stu.Student_details();
    cout<<"Marks of Student:-"<<endl;
    Stu.marks();
    
    return 0;
}
