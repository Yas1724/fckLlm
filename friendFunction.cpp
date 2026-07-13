#include<iostream>
using namespace std;

class equilateralTraingle{
private:    
    float a;
    float perimeter;
    float area;

public: 
    void setA(float length){
        a = length;
        perimeter = a;
        area = (1.75*a*a)/4;
    }

    friend void printResult(equilateralTraingle);
};
    void printResult(equilateralTraingle et){
        cout<<"perimeter: "<<et.perimeter<<endl;
        cout<<"Area: "<<et.area<<endl;
    }
int main(){
    equilateralTraingle et;
    et.setA(3);
    printResult(et);
}