#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <map>

using namespace std;


//Macros
short CC_;
#define sf scanf
#define pf printf
#define PP getchar();
#define NL cout<<"\n";
#define pqueue priority_queue
#define testb(x_, i_) ((x_&1<<i_)!=0)
#define setb(x_, i_) (x_=(x_|(1<<i_)))
#define clrb(x_, i_) (x_=(x_&(!(1<<i_))))
#define all(container) container.begin(),container.end()
#define DC(x_) cout<<">>> "<<#x_<<"\n";DA(x_.begin(), x_.end());
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define SS printf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;

class team{
public:
    string name;
    int point;
    int wins;
    int ties;
    int loss;
    int goals;
    int goals_taken;
    int games;
    
    team(){
        point= wins= ties= loss= goals= goals_taken= games= 0;
    }
    team(string newName){
        name= newName;
        point= wins= ties= loss= goals= goals_taken= games= 0;
    }
    
    bool operator<(string& name2){
        int l1= name.size(), l2= name2.size();
        
        for(int i= 0; i<l1 && i<l2; i++){
            if(islower(name[i]) && isupper(name2[i])) return true;
            else if(isupper(name[i]) && islower(name2[i])) return false;
            else return name < name2;
        }
        
        if(l1<l2) return true;
    }
    
    bool operator<(team& t2){
        if(this->point > t2.point) return true;
        else if(point < t2.point) return false;
        else if(wins > t2.wins) return true;
        else if(wins < t2.wins) return false;
        else if(goals - this->goals_taken > t2.goals - t2.goals_taken) return true;
        else if(goals - this->goals_taken < t2.goals - t2.goals_taken) return false;
        else if(goals > t2.goals) return true;
        else if(goals < t2.goals) return false;
        else if(games < t2.games) return true;
        else if(games > t2.games) return false;
        for(int i = 0;i < 35;i++)
	{
            char c1=name[i],c2= t2.name[i];
            if(isupper(c1)) c1=c1-'A'+'a';
            if(isupper(c2)) c2=c2-'A'+'a';
            if(c1<c2) return true;
            if(c1>c2) return false;
        }
        
        return false;
    }

    friend ostream& operator<<(ostream& os, team& tt);
};

ostream& operator<<(ostream& os, team& tt){
    os<<tt.name<<" ";
    os<<tt.point<<"p, ";
    os<<tt.games<<"g (";
    os<<tt.wins<<"-"<<tt.ties<<"-"<<tt.loss<<"), ";
    os<<tt.goals-tt.goals_taken<<"gd (";
    os<<tt.goals<<"-"<<tt.goals_taken<<")";
    return os;
}

int main(void)
{
    int tuna, team_count, g;
    //team1 team2 score of t1 score of t2
    string tname, t1, t2;
    int s1, s2;
    
    team teams[32];
    map<string, team*> team_ref;
    
    cin>>tuna;
    cin.ignore();
    
    for(int turnament= 0; turnament<tuna; turnament++){
        getline(cin, tname);
        cin>>team_count;
        string temp;
        
        cin.ignore();
        //store team names
        for(int i= 0; i<team_count; i++){
            getline(cin, temp);
            teams[i]= team(temp);
            team_ref[temp]= &teams[i];
        }
        
        cin>>g;
        cin.ignore();
        
        while(g--){
            getline(cin, t1, '#');
            cin>>s1;
            cin.get(); //@
            cin>>s2;
            cin.get(); //#
            getline(cin, t2);
            
            team* t1ref= team_ref[t1];
            team* t2ref= team_ref[t2];
            
            t1ref->goals+= s1;
            t1ref->goals_taken+= s2;
            t1ref->games++;
            
            t2ref->goals+= s2;
            t2ref->goals_taken+= s1;
            t2ref->games++;
            
            if(s1>s2){
                t1ref->point+= 3;
                t1ref->wins++;
                t2ref->loss++;
            }
            else if(s1<s2){
                t2ref->point+= 3;
                t2ref->wins++;
                t1ref->loss++;
            }
            else{
                t1ref->point++;
                t2ref->point++;
                t1ref->ties++;
                t2ref->ties++;
            }
        }
        
        sort(teams, teams+team_count);
        
        if(turnament!=0) NL
        cout<< tname <<"\n";
        for(int i= 0; i<team_count; i++){
            cout<< i+1<< ") " << teams[i] <<endl;
        }
    }
    
    return 0;
}