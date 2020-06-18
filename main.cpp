#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
//#include <windows.h>
#include <unistd.h>
using namespace std;

class Team {
  public:
  string teamName ;
  string playerOne ;
  string PlayerTwo ;
  string playerThree ;
  double totalRunsScored;
};
void welcomeMessage();
void dispTeam(Team& t1,Team& t2);
void choosebatsman(Team& t1);
void choosebowler(Team& t2);
void changebatsman(Team& t2);
void changebowler(Team& t1);
int Innings();
int firstInnig(Team& a);
int secondInning(Team& b);
int winDecider(Team& s1,Team& s2);
int currentBatsmen;
int currentBowler;
int main()
{
    welcomeMessage();
    Team t1,t2 ;
    dispTeam(t1,t2);
    cout<<"\n lets start first innings \n";
    choosebatsman(t1);
    choosebowler(t2);
    srand(time(0));
    t1.totalRunsScored=firstInnig(t1);
    changebatsman(t2);
    changebowler(t1);
    t2.totalRunsScored=secondInning(t2);
    winDecider(t1,t2);

    return 0;
}

void welcomeMessage(){
    usleep(1000000);
    cout << "\nWelcome to gully Cricket \n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    usleep(1000000);

}
void dispTeam(Team& t1,Team& t2) {
   usleep(1000000);
   cout << "\n Enter team name : For team one \n";
   getline(cin,t1.teamName);
   usleep(1000000);
   cout << "\n Enter team name : For second team \n";
   getline(cin,t2.teamName);
   usleep(1000000);

   cout << "\nEnter the name of your team players for " <<t1.teamName<< " \n";
   getline(cin,t1.playerOne);
   getline(cin,t1.PlayerTwo);
   getline(cin,t1.playerThree);
   usleep(1000000);
   cout << "\n Player of\t"<<t1.teamName<<"\tare "<< " \t" <<"\t" <<t1.playerOne << "\t" << t1.PlayerTwo << "\t" << t1.playerThree <<"\t" << endl ;
   usleep(1000000);

   cout << "\nEnter the name of your team players for " << t2.teamName << " \n";
   getline(cin,t2.playerOne);
   getline(cin,t2.PlayerTwo);
   getline(cin,t2.playerThree);
   cout << "\n Player of \t" << t2.teamName <<"\t are " <<t2.playerOne <<"\t"<< t2.PlayerTwo <<"\t"<< t2.playerThree <<"\t" << endl ;
   usleep(1000000);
}
void choosebatsman(Team& a){
    usleep(1000000);
    cout<<"\nChoose Your batsmen from\t"<<a.teamName << "\tpress 1,2,3 : \n";
    cin >> currentBatsmen;
    if (currentBatsmen==1){
     cout<<"\nyou have chosen \t" <<a.playerOne <<" \t as your batsmen";
    }else if (currentBatsmen==2){
    cout<<"\nyou have chosen \t" << a.PlayerTwo <<" \t as your batsmen";
    }else if(currentBatsmen==3){
    cout<<"\nyou have chosen \t "<< a.playerThree <<" \t as your batsmen \n";
    }
}


void choosebowler(Team& b){
    usleep(1000000);
    cout<<"\n Choose Your bowler from\t"<<b.teamName<<"\tpress 1,2,3 : \n";

    cin >> currentBowler;
    if (currentBowler==1){
     cout<<"\nyou have chosen \t" <<b.playerOne <<" \t as your bowler";
    }else if (currentBowler==2){
    cout<<"\nyou have chosen \t" << b.PlayerTwo <<" \t as your bowler";
    }else if(currentBowler==3){
    cout<<"\nyou have chosen \t "<< b.playerThree <<" \t as your bowler";
    }
}


int firstInnig(Team& r){
    usleep(1000000);
    cout<<"\n Batting Of \t "<< r.teamName<<" \t has begun \n";
    int b1=Innings();
    int b2=Innings();
    int b3=Innings();
    int b4=Innings();
    int b5=Innings();
    int b6=Innings();
    usleep(10000000);

    cout <<"\n Ball by Ball score is as follows \t"<<b1<<"\t"<<b2<<"\t"<<b3<<"\t"<<b4<<"\t"<<b5<<"\t"<<b6<<"\t"<<endl ;
    int sum = b1+b2+b3+b4+b5+b6;
    usleep(100000);
    cout<<"\n Final Score for\t"<<r.teamName<<"\tis  ------->\t" << sum ;
    return sum;
}

void changebatsman(Team& b){
    usleep(1000000);
    cout<<"\nChoose Your batsmen from\t"<<b.teamName << "\tpress 1,2,3 : \n";
    cin >> currentBatsmen;
    if (currentBatsmen==1){
     cout<<"\nyou have chosen \t" <<b.playerOne <<" \t as your batsmen";
    }else if (currentBatsmen==2){
    cout<<"\nyou have chosen \t" << b.PlayerTwo <<" \t as your batsmen";
    }else if(currentBatsmen==3){
    cout<<"\nyou have chosen \t "<< b.playerThree <<" \t as your batsmen \n";
    }
}

void changebowler(Team& a){
    usleep(1000000);
    cout<<"\n Choose Your bowler from\t"<<a.teamName<<"\tpress 1,2,3 : \n";

    cin >> currentBowler;
    if (currentBowler==1){
     cout<<"\nyou have chosen \t" <<a.playerOne <<" \t as your bowler";
    }else if (currentBowler==2){
    cout<<"\nyou have chosen \t" << a.PlayerTwo <<" \t as your bowler";
    }else if(currentBowler==3){
    cout<<"\nyou have chosen \t "<< a.playerThree <<" \t as your bowler";
    }
}


int Innings(){
for (int i= 0;i <7;i++){
return rand()%6+1;
}
}


int secondInning(Team& i){
    usleep(100000);
    cout<<"\n Batting Of \t" <<i.teamName << "\t has begun \n";
    int b1=Innings();
    int b2=Innings();
    int b3=Innings();
    int b4=Innings();
    int b5=Innings();
    int b6=Innings();
    usleep(10000000);
    cout <<"\n Ball by Ball score is as follows \t"<<b1<<"\t"<<b2<<"\t"<<b3<<"\t"<<b4<<"\t"<<b5<<"\t"<<b6<<"\t"<<endl ;
    int sum = b1+b2+b3+b4+b5+b6;
    usleep(10000);
    cout<<"\n Final Score for\t"<<i.teamName<<"\tis ------->\t" << sum ;
    return sum;
}

int winDecider(Team& s1,Team& s2){
    usleep(10000000);
    if (s1.totalRunsScored > s2.totalRunsScored){
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"\n ***************************** \n";
    cout<<"\n \t "<<s1.teamName<<"\t is the winner \n ";
    cout<<"\n ***************************** \n";
    }else if (s2.totalRunsScored > s1.totalRunsScored)  {
    cout<<"\n ***************************** \n";
    cout<<"\n \t " <<s2.teamName<<"\t is winner \n ";
    cout<<"\n ***************************** \n ";
    }else {
    cout<<"\n ***************************** \n";
    cout<<"\n \t It's a Draw \t ";
    cout<<"\n ***************************** \n ";
    }
}
