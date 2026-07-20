//Here, we'll learn about the basics of OOP .
//Object= It is a collection of attributes and methods.
 // they can have characteristics and could perform actions.
 //can also be used to mimic real world items(eg: car, book, phone etc)
 // created from a class which acts as a blueprint.
 
  /*Member variables vs. member functions
Variables describe state (what the object has), functions describe behavior (what the object does). */

 //Now, lets write a program to demonstrate the use of a class and objects.
 #include<iostream>
 using namespace std;
 class human{   //creates a class named 'human' or defines a new blueprint.
public:             //access specifier, which means it controls who can access what's below it. And 'public' means it is accessible from outside the class too.

string name, address, gender;       //member variables(also called data members or attributes)
int age;
float heightft, heightinch, weight;
 
  void sleep(){             //member function (behaviours that object are capable of performing)
    cout<<"This human can sleep"<<endl;
}
    void eat(){
        cout<<"This human can eat!"<<endl;
        }
    };
    int main(){                 //this is where program actually starts running. 
     human human1;          //here, memory gets allocated for human1
        human1.name="Ram";          //The dot . is the member access operator. It lets you reach into human1 and set/read its individual attributes.
        human1.age=20;
        human1.address="Sirjanachowk";

        human human2;
        human2.name="Subikshya";
        human2.age=16;
        human2.address="Zero Km";
        human2.heightft=5;
        human2.heightinch=3;


        cout<<human1.name<<endl;
        cout<<human1.age<<endl;
        cout<<human1.address<<endl;
       cout<< '\n';
         cout<<human2.name<<endl;
        cout<<human2.age<<endl;
        cout<<human2.address<<endl;
         cout<<human2.heightft<<"ft";
        cout<<human2.heightinch<<"inch"<<endl;

        human1.eat();
          return 0;
 }
