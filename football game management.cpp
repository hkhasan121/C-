#include<bits/stdc++.h>
using namespace std;
class FootballGame   //class create
{
    public:
    string team1;
    string team2;
    int score1;
    int score2;
    FootballGame(string t1,string t2)
    {
        team1=t1;
        team2=t2;
        score1=0;
        score2=0;
    }
    
    void updateScore(int x){
        if(x==1){
            score1++;
        }
        else if(x==2){
            score2++;
        }
        else
        cout<<"Invalid"<<endl<<endl;
    }

    void displayScore(){
        cout<<"Current Score: "<<team1<<" "<<score1<<" - "<<score2<<" "<<team2<<endl<<endl;
    }

    void FinalResult()
    {
        if(score1>score2){
            cout<<"Winner: "<<team1<<endl;
        }
        else if(score1<score2){
            cout<<"Winner: "<<team2<<endl;
        }
        else{
            cout<<"MATCH DRAW!!!!"<<endl;
        }
    }

};

int main(){
    FootballGame F("Barcelona","Real Madrid");
    cout<<"Welcome to Football Game Management System!"<<endl;
    cout<<"Football game initialized between Barcelona and Real Madrid."<<endl;
    F.displayScore();
    F.updateScore(1);
    F.displayScore();
    F.updateScore(2);
    F.displayScore();
    F.updateScore(1);
    F.displayScore();
    F.updateScore(1);
    F.displayScore();
    cout<<"The game ends."<<endl;
    F.FinalResult();

}
