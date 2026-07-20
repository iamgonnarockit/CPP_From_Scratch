//Another example showing the use of an object and class.
#include<iostream>
using namespace std;
class car{
private:
float price;
string engine;
public:
string brand, colour, suspension;
int seats;
void comfy(){
    cout<<"This car is very comfortable"<<endl;
}
void owner(){
    cout<<"This car belongs to me!"<<endl;
}
};

int main(){
    car car1;
     car1.brand="Saab";
    car1.colour="Black";
     car1.seats=6;

     car car2;
     car1.brand="BMW";
    car1.colour="White";
     car1.seats=5;

     cout<<car1.brand<<endl;
    cout<<car1.colour<<endl;
     cout<<car1.seats<<endl;

     car2.owner();
     cout<<car2.brand<<endl;
    cout<<car2.colour<<endl;
     cout<<car2.seats<<endl;

    car1.comfy();
     return 0;
}