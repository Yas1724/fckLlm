#include<iostream>
#include<list>
using namespace std;

class youtubeChannel{
public:
    string name;
    string ownerName;
    int subscriberCount;
    list<string>publishedVideoTitle;
};
int main(){
    youtubeChannel ytchnl;
    ytchnl.name = "yashrra";
    ytchnl.ownerName="yashraj";
    ytchnl.subscriberCount=200;
    ytchnl.publishedVideoTitle={"how to write", "getting laid", "deadlocks in 3 min"};

    cout<< "name: "<<ytchnl.name<<endl;
    cout<< "ownerName: "<<ytchnl.ownerName<<endl;
    cout<< "subscriberCount: "<<ytchnl.subscriberCount<<endl;
    cout<< "Vidoes: "<<endl;
    for(string videolist: ytchnl.publishedVideoTitle){
        cout<< videolist << endl;
    }
}