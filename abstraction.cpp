#include<iostream>
using namespace std;

class smartPhone{
public:
    virtual void takeSelfie() = 0;
    virtual void makeCall() = 0;    
};
class Android:public smartPhone{
public:
    void takeSelfie(){
        cout<<"Android selfie\n";
    }
    void makeCall(){
        cout<<"Android calling\n";
    }
};
class iphone:public smartPhone{
public:
    void takeSelfie(){
        cout<<"iphone selfie\n";
    }    
    void makeCall(){
        cout<<"iphone calling\n";
    }
};
//we cannot create instances of abstract class, but can create pointers of abstract class
int main(){
    smartPhone*s1 = new Android();
    smartPhone*s2 = new iphone();
    s1->makeCall(); s2->takeSelfie();
    s1->takeSelfie(); s2->makeCall();
} 
    