#include <iostream>
#include <vector>
using namespace std;

class Item {
protected:
    string name; double price;
public:
    Item(string n,double p):name(n),price(p){}
    virtual double bill(){ return price; }
    virtual void display(){
        cout<<name<<" : Rs."<<bill()<<endl;
    }
};

class Discounted: public Item{
    double disc;
public:
    Discounted(string n,double p,double d):Item(n,p),disc(d){}
    double bill() override { return price*(1-disc/100); }
    void display() override {
        cout<<name<<" : Rs."<<bill()<<" (after "<<disc<<"% off)"<<endl;
    }
};

int main(){
    vector<Item*> list;
    list.push_back(new Item("Pen",20));
    list.push_back(new Discounted("Notebook",100,10));
    list.push_back(new Discounted("Bag",800,25));
    cout<<"---Invoice---\n";
    for(auto i:list) i->display();
}
