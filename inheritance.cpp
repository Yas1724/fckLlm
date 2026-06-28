#include<iostream>
#include<list>
using namespace std;

class youtubeChannel{
private:
    string Name;
    int subscriberCount;
    list<string>publishedVideoTitle;
protected: 
    string OwnerName; //we move the ownerName from private to protected so that we can use this variable in the derived class methord. 

public:
    youtubeChannel(string name, string ownername){
        Name = name;
        OwnerName = ownername;
        subscriberCount = 0;
    }

    void GetInfo(){
        cout<<"name: "<<Name<<endl;
        cout<<"owner name: "<<OwnerName<<endl;
        cout<<"subscribers count: "<<subscriberCount<<endl;
        cout<<"videos: "<<endl;
        for(string vdoTitles: publishedVideoTitle){
            cout<<vdoTitles<<endl;
        }
    }
    void subscribe(){
        subscriberCount++;
    }
    void unsubscribe(){
        if(subscriberCount>0)
            subscriberCount--;
    }
    void publishedVdo(string title){
        publishedVideoTitle.push_back(title);
    }  
};
//inheriting the youtubeChannel to CodingYtChannel. 
//CodingYtChannel = Base class & youtubeChannel = derived class. 
class CodingYtChannel: public youtubeChannel{
    //constructor of derived class, since the base class is private so does the derived class,
    //we have to make the constuctor of the derived class public in order to access the derived class.
public:    
    CodingYtChannel(string name, string ownername):youtubeChannel(name, ownername){
//inheriting the constructor of parent class
    }
//all the properties and methords of base class is inherited to the derived class
//we can also write methords and properties only for the derived class itself, 
        void properties(){
            cout<<OwnerName<<" is this is the special methord only for child class, parent cant get that method"<<endl;
        }
};

int main(){
    CodingYtChannel ytchnl("yassh", "yassh codin");
    ytchnl.subscribe();
    ytchnl.publishedVdo("making WAL from scratch in cpp");
    ytchnl.GetInfo();
    ytchnl.properties();
}
