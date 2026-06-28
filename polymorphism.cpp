#include<iostream>
#include<list>
using namespace std;

class youtubeChannel{
private:   
    string Name;
    int subscriberCount;
    list<string>publishedVideoTitle;
protected:
    string ownerName;
    int contentQuality;
    
public:
//constructor of class youtubeChannel
    youtubeChannel (string name, string ownername){
        Name = name;
        ownerName = ownername;
        subscriberCount = 0;
        contentQuality = 0;
    } 
    //making method functions to invoke the private variables/data of youtubeChannel class
    void GetInfo(){
        cout<<"name: "<<Name<<endl;
        cout<<"owner name: "<<ownerName<<endl;
        cout<<"subscriber: "<<subscriberCount<<endl;
        cout<<"vidoes: "<<endl;
        for(string vdoTitle: publishedVideoTitle){
            cout<<vdoTitle<<endl;
        }
    }
    //invoking subsrciber method
    void subscribe(){
        subscriberCount++;
    }
    void unsubscribe(){
        if(subscriberCount > 0)
           subscriberCount--;
    }
    //
    void publishedVdo(string title){
        publishedVideoTitle.push_back(title);
    }
    void checkAnalytics(){
        if(contentQuality < 2)
            cout<< Name <<" is not good channel"<<endl;
        else
            cout<< Name <<" is great channel"<<endl;    
    }
};

class codingYt: public youtubeChannel{
    //setting up constructor of child class
public:    //is this is the special methord only for child class, parent cant get that method
    codingYt(string name, string ownername): youtubeChannel(name, ownername){}
    void properties(){
            cout<<ownerName<<" all coding vidoes are uploaded here"<<endl;
            contentQuality++;
        }
};

class streamYt: public youtubeChannel{
    //setting up constructor of child class
public:    
    streamYt(string name, string ownername): youtubeChannel(name, ownername){}
    void properties(){
            cout<<ownerName<<" all the live streams are done here"<<endl;
            contentQuality++;
        }
};

int main(){
    //compile time polymorphism -
    codingYt ytchnl("yassh", "yassh codin");
    streamYt ytchnl2("yasshStream", "yashraj");
    ytchnl2.properties();
    ytchnl2.properties();
    ytchnl2.properties();
    ytchnl.properties();
    ytchnl2.checkAnalytics();
    ytchnl.checkAnalytics();

    /* ytchnl.subscribe();
    ytchnl.publishedVdo("making WAL from scratch in cpp");
    ytchnl.GetInfo();
    ytchnl.properties(); */

    //runtime polymorphism - 
    youtubeChannel* yt1 = &ytchnl;
    youtubeChannel* yt2 = &ytchnl2;
    yt2->checkAnalytics();
    yt1->checkAnalytics();

}