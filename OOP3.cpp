//Next example of practicing Objects and Class
#include<iostream>
using namespace std;
class sunscreen{
    public:
    string brand, skin_relevancy;
    float price;
    int SPF;

    void protectiveness(){
        cout<<"This Sunscreen is really helpful and protective!"<<endl;
    }
};
int main(){
    sunscreen s1;
    s1.brand="Cera Ve";
    s1.skin_relevancy="Suitable for Oily Face";
    s1.price=2000.99;
    s1.SPF=50;

    s1.protectiveness();
    cout<<"Brand ="<<s1.brand<<endl;
        cout<<s1.skin_relevancy<<endl;
    cout<<"Npr."<<s1.price<<endl;
    cout<<"SPF="<<s1.SPF<<"++"<<endl;

    return 0;
}