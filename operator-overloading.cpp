#include<iostream>
using namespace std;

//if we define it on class then member of class are by default private
//whereas members of structure are public by default 
//both can have datamember, member function, inheritance, polymorphism, etc. 

struct YoutubeChannel{
    string Name;
    int SubscriberCount;
//just like we define the consturctor inside the class, we do it in the structure likewise
//inititing constructor   
        //structure name and constructor name should be same like we do it in class. 
     YoutubeChannel(string name, int subscount){
        Name = name;
        SubscriberCount = subscount;
     }
};

int main(){
//using constructor to create object
    YoutubeChannel yt1 = YoutubeChannel("yassh", 1000);
}