#include<iostream>
#include<string>
using namespace std;

int main() {
    //string better alternative of character array ,char arr[] ❌    string s; ✅


    //string intialization
    string s0; //is null string basically
    string s1("hello world");
    string s2 = "helllooooo world";
    string s3(s2);
    string s4  = s3;

    char arr[] ={'a','b','c','\0'};

    string s5(arr);

    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;

    //check if string is empty or not
    if(s0.empty())cout<<"yes it is empty indeed"<<endl;

    //add string to the end of string 
    s0.append("i love c++ idk why");

    cout<<s0<<endl;

    //string concatentation 

    s0 += "and idk java maybe have to learn it some day";
     cout<<s0<<endl;


     //remove everything from the string 
    cout<<s0.length()<<"before clear"<<endl;
     s0.clear();
cout<<s0.length()<<"after clear"<<endl;
    return 0;
}
