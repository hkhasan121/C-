#include<bits/stdc++.h>
using namespace std;
class Nkash{
    private:
    int balance;
    public:
    void setBalance(int b){
        balance=b;
    }
    int getBalance(){
        return balance;
    }
    void cashOut(int x){
        balance-=x;
        cout<<"CashOut: "<<x<<endl;
    }
    void cashIn(int y){
        balance+=y;
        cout<<"CashIn: "<<y<<endl;
    }
    void Balance(){
        cout<<"Total Balance: "<<balance<<endl;
    }

};
int main(){
    Nkash n;
    n.setBalance(5000);
    n.Balance();
    n.cashOut(1000);
    n.cashIn(500);
    n.Balance();
}