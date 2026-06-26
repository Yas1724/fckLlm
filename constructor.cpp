
#include<iostream>
#include<list>
using namespace std;

class youtubeChannel{
public:
    string Name;
    string OwnerName;
    int subscriberCount;
    list<string>publishedVideoTitle;

    //constructor
    youtubeChannel(string name, string ownername){
        Name = name;
        OwnerName = ownername;
        subscriberCount = 10;
    }
    
    void GetInfo(){
        cout<<"name: "<<Name<<endl;
        cout<<"owner name: "<<OwnerName<<endl;
        cout<<"subscribers count: "<<subscriberCount<<endl;
        cout<<"videos: "<<endl;
        for(string videoTitle : publishedVideoTitle){
            cout<<videoTitle<<endl;
        }
    }
};


int main(){
    youtubeChannel Ytchnl1("yas", "yashrja");
    Ytchnl1.publishedVideoTitle.push_back("deadlocks in 2 min");
    Ytchnl1.publishedVideoTitle.push_back("how to get Laid");
    Ytchnl1.publishedVideoTitle.push_back("make mind like llm");
    Ytchnl1.GetInfo();

    youtubeChannel ytchnl2("dre","drewwew");
    ytchnl2.publishedVideoTitle.push_back("Bench 400lbs in a month");
    ytchnl2.publishedVideoTitle.push_back("5 min workout for shoulders");
    
}