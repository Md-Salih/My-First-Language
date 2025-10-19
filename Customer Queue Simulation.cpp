#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<string> q;
    int choice;
    do{
        cout<<"\n1.Arrival  2.Serve  3.Display  0.Exit\nChoice: ";
        cin>>choice;
        if(choice==1){
            string name; cout<<"Enter customer name: "; cin>>name;
            q.push(name);
        } else if(choice==2){
            if(!q.empty()){ cout<<q.front()<<" served.\n"; q.pop(); }
            else cout<<"No customers.\n";
        } else if(choice==3){
            cout<<"Queue: "; 
            queue<string> temp=q;
            while(!temp.empty()){ cout<<temp.front()<<" "; temp.pop(); }
            cout<<endl;
        }
    }while(choice!=0);
}
