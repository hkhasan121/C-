#include<bits/stdc++.h>
using namespace std;
class FootballGame{
    public:
    int matchId;
    string homeTeamName;
    string awayTeamName;
    vector<string>homeTeamPlayers;
    vector<string>awayTeamPlayers;
    int homeTeamScore=0;
    int awayTeamScore=0;

    FootballGame(int id,string htn,string atn){
        matchId=id;
        homeTeamName=htn;
        awayTeamName=atn;
        //homeTeamScore=0;
        //awayTeamScore=0;

    }
    void addPlayerHomeTeam(string x){
        homeTeamPlayers.push_back(x);
    }

    void addPlayerAwayTeam(string y){
        awayTeamPlayers.push_back(y);
    }

    void updateScore(int x,int y){
        homeTeamScore=homeTeamScore+x;
        awayTeamScore=awayTeamScore+y;
    }

    void displayMatchDetails(){
        cout<<"Match ID : "<<matchId<<endl;
        cout<<"Home Team : "<<homeTeamName<<endl;
        cout<<"Players : "<<endl;
        for(int i=0;i<homeTeamPlayers.size();i++){
            cout<<homeTeamPlayers[i]<<endl;
        }
        cout<<"Home Team Score: "<<homeTeamScore<<endl;
        cout<<"Away Team: "<<awayTeamName<<endl;
        cout<<"Players :"<<endl;
        for(int i=0;i<awayTeamPlayers.size();i++){
            cout<<awayTeamPlayers[i]<<endl;
        }
        cout<<"Away Team Score: "<<awayTeamScore<<endl;
    }

};

int main(){
    FootballGame h(101,"Barcelona","Real Madrid");
    h.addPlayerHomeTeam("Messi");
    h.addPlayerHomeTeam("Ronaldo");
    h.addPlayerAwayTeam("Neymar");
    h.updateScore(2,1);
    h.displayMatchDetails();
}