#include "hello.h"

using namespace std;

int main()
{
    cout<<"Test procedure Greeting"<<endl;
    string name = "Vincent Williams Jonathan";
    string id = "1301190381";
    greetings(name, id);
    cout<<"please answer Question 1"<<endl<<endl;

    cout<<"Test procedure swap_1 and swap_2"<<endl;
    int a = 15;
    int b = 30;
    int c = 75;
    swap_1(a,b,c);
    cout<<"a = "<<a<<", b = "<<b<<", c = "<<c<<endl;
    a = 15;
    b = 30;
    c = 75;
    swap_2(a,b,c);
    cout<<"a = "<<a<<", b = "<<b<<", c = "<<c<<endl;
    cout<<"please answer Question 2"<<endl<<endl;

    cout<<"Test procedure confused"<<endl;
    confused();
    cout<<"please answer Question 3"<<endl<<endl;

    cout<<"Test procedure remove inside"<<endl;
    remove_inside(5);
    cout<<"please answer Question 4"<<endl<<endl;

    cout<<"Test procedure indexing"<<endl;
    cout<<"example 1 : "<<indexing(70,75,60)<<endl;
    cout<<"example 2 : "<<indexing(45,70,50)<<endl;
    cout<<"example 3 : "<<indexing(75,80,82)<<endl;


}
