//WAP to print Hello World
#include<iostream>
using namespace std;

int main(){
     cout << "Hello World😁" << std:: endl; //or we can use "<< '\n' " to break a line. 
     cout << "I Like Pizza!"<< '\n';
    return 0;
}
/* We might see some C++ programs that run without the standard namespace line.
 The using namespace std; statement can be omitted, and replaced with the std keyword followed by the 
 :: operator, for some objects (like std::cout in the example below):
 #include<iostream>
 int main(){
 std:: cout << "Hello World!";
 return 0;
 }
 
 
 */

