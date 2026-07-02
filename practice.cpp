//Program to demonstrate the use of class and object
#include<iostream>
using namespace std;
class Book{
    private:
    string title, author, publication;
    float price;
    int pages;

    public:
    void setBook(string t, string a, string p, float pp, int pg){
        title= t; 
        author=a;
        publication=p;
        price=pp;
        pages=pg;

    } 
    void getDetails(){
        cout <<"Title=" <<title <<endl;
        cout<<"Author="<<author<<endl;
                cout<<"Publication="<<publication<<endl;
        cout<<"Price="<<price<<endl;
        cout<<"Pages="<<pages<<endl;

    }
}