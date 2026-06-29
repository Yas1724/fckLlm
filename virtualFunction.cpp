#include<iostream>
using namespace std;

class instrument{
public:    
    virtual void MakeSound(){
        cout<<"playing instrument..."<<endl;
    }
};
class piano: public instrument{
public:
    void MakeSound(){
        cout<<"playing piano"<<endl;
    }
};

int main(){
    instrument* i1 = new piano();
    i1->MakeSound();
}
