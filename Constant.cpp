#include<iostream>
using namespace  std;
int main(){
    double pi=3.14159;
    double radius= 7.23;
    radius=3;
    double circumference =2*pi*radius;
        cout<< circumference <<"cm"<< "\n \n";

            /* In above condition, the value of the variable can be changed at anytime. But if we use constant keyboard, 
            it specifies that the variable's value is constant.  And make them read-only.*/

            const double PI= 3.14159;
            const double RADIUS=7.23;
            const double CIRCUMFERENCE=2*PI*RADIUS;
            cout << CIRCUMFERENCE << "cm";
    return 0;


}