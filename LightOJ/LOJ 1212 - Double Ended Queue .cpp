#include <iostream>
#include <deque>

using namespace std;

int main(){

    int t, com, sz;

    cin>>t;

    for(int tc= 1; tc<=t; tc++){

        cin>>sz>>com;
        cout<< "Case " << tc <<":" <<endl;

        deque<int> dq;

        int temp;
        string str;
        while(com--){
            cin>>str;

            if(str == "pushLeft"){
                cin>>temp;
                if(dq.size() == sz){
                    cout<<"The queue is full"<<endl;
                }
                else{
                    dq.push_front(temp);
                    cout<<"Pushed in left: " << temp <<endl;
                }
            }
            else if(str == "pushRight"){
                cin>>temp;
                if(dq.size() == sz){
                    cout<<"The queue is full"<<endl;
                }
                else{
                    dq.push_back(temp);
                    cout<<"Pushed in right: " << temp <<endl;
                }

            }
            else if(str == "popLeft"){
                if(dq.empty()){
                    cout<<"The queue is empty"<<endl;
                }
                else{
                    cout<<"Popped from left: " << dq.front() <<endl;
                    dq.pop_front();
                }
            }
            else if(str == "popRight"){
                if(dq.empty()){
                    cout<<"The queue is empty"<<endl;
                }
                else{
                    cout<<"Popped from right: " << dq.back() <<endl;
                    dq.pop_back();
                }
            }
        }

    }




    return 0;
}

