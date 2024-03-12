#include<bits/stdc++.h>
using namespace std;
class Moneybag{
    public:
    int total=0;
    void printDetails()
    {
        cout<<"Total: "<<total<<endl;

    }
};

class Salami:public Moneybag{
    public:
    int extra;
    void given(){
        total-=100;
    }
    void taken(){
        total+=100;
    }
};

class Tour:public Moneybag{
    public:
    int cost=500;
    void Cost(){
        cost-=100;
        total-=100;
    }
};

int main(){
    Tour t;
    t.Cost();
    
    Salami s;
    s.given();
    s.taken();
    s.printDetails();
    t.printDetails();
}