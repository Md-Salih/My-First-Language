#include <iostream>
#include <vector>
using namespace std;

int main(){
    int rows=5, cols=6;
    vector<vector<int>> seats(rows, vector<int>(cols,0));

    int choice;
    do{
        cout<<"\n1.Book  2.Cancel  3.Show  0.Exit\nChoice: ";
        cin>>choice;
        if(choice==1){
            int r,c;
            cout<<"Enter row and seat: "; cin>>r>>c;
            if(seats[r][c]==0){ seats[r][c]=1; cout<<"Booked!\n"; }
            else cout<<"Already booked!\n";
        } else if(choice==2){
            int r,c; cout<<"Enter row and seat to cancel: "; cin>>r>>c;
            if(seats[r][c]==1){ seats[r][c]=0; cout<<"Cancelled!\n"; }
            else cout<<"Not booked yet!\n";
        } else if(choice==3){
            cout<<"Seat Map (0=Free, 1=Booked):\n";
            for(auto &row:seats){
                for(int x:row) cout<<x<<" ";
                cout<<endl;
            }
        }
    }while(choice!=0);
}
