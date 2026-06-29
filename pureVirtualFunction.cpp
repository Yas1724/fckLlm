#include<iostream>
using namespace std;

class instrument{
public:
    virtual void MakeSound() = 0;   //pure virtual function
    //making abstract class 
};

class piano: public instrument{
public:
    void MakeSound(){
        cout<<"playing piano"<<endl;
    }    
};
class guitar: public instrument{
public:
    void MakeSound(){
        cout<<"playing guitar"<<endl;
    }
};
int main(){
    instrument* i1 = new piano();
    instrument* i2 = new guitar();
    /* i1->MakeSound();
    i2->MakeSound(); */
    //making array of instrument, so that we wont have to call the method again for different instrument child class 
    instrument* instr[2] = {i1,i2};
    for(int i=0; i<2; i++){
        instr[i]->MakeSound();
    }

}