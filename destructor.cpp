#include<iostream>
using namespace std;
class hasan{
    public:
    string name;
    int age;
    hasan()
    {
    
        cout<<"hi "<<endl;
    }

    ~hasan(){
        cout<<"bye "<<name<<endl;
            }


};

int main()
{
    hasan h1;
    h1.name="HASAN";
    hasan h2;
    h2.name="AKASH";
}