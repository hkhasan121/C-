#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream h("hasan.txt");
    ofstream n("Hasan12.txt");
    int a;
    h>>a;
    string cal;
    int firstNum,secondNum;
    string sign;
    for(int i=1; i<a; i++)
    {
        h>>cal;
        h>>firstNum;
        h>>sign;
        h>>secondNum;
        if(sign=="+"){
            n<<firstNum + secondNum<<endl;
        }
       else if(sign=="-"){
            n<<firstNum - secondNum<<endl;
        }
        else if(sign=="*"){
            n<<firstNum * secondNum<<endl;
        }
        else if(sign=="/"){
            n<<firstNum / secondNum<<endl;
        }
    }
}
