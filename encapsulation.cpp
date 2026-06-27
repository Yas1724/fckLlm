#include<iostream>
#include<list>
using namespace std;

class youtubeChannel{
private:    
    string Name;
    string OwnerName;
    int subscriberCount;
    list<string>publishedVideoTitle;

public:    
    //constructor
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
//encapsulation : 
//making the data of class pirvate and using public method to access or modify the variables/data of that class.

int main(){
    youtubeChannel ytchnl1("yassh","yashraj");
    ytchnl1.publishedVdo("how to train your llm");
    ytchnl1.publishedVdo("Things we are alive for, explained");
    ytchnl1.subscribe();
    ytchnl1.unsubscribe();
    ytchnl1.unsubscribe();
    ytchnl1.GetInfo();
}