#include<iostream>
using namespace std;
//A virtual function is a member function declared in a base class that can be overridden in derived classes. 
//When called through a base class pointer/reference, C++ resolves the call at runtime (dynamic dispatch) instead of compile time.
class instrument{
public:    
//makeSound method maked virtual meaning, the child class might replace it or override it.
    virtual void MakeSound(){  //adding virtual keyword to make the method as virtual function
        cout<<"playing instrument..."<<endl;
    }
};
//virtual function -> if there is an implementation of this function in the derived class then execute the derived class
//and if there is no implementation of method in the derived class the execute the base class.
class piano: public instrument{
public:
//piano is a child class, it has it own verison of makeSound method that override the base version
    void MakeSound(){
        cout<<"playing piano"<<endl;
    }
};

int main(){
    //i1 is a pointer of type instrument but is actually pointing to a piano object
    instrument* i1 = new piano();
    i1->MakeSound();
}

                            /* i1 (instrument* pointer)
                                │
                                └──▶ piano object in memory
                                            │
                                            └──▶ piano::MakeSound()  ← this gets called  */
