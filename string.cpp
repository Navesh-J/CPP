#include <iostream>
#include<string>
using namespace std;
int main(){
    string s1;
    cout<<"Enter a String : ";
    // cin>>s1;
    // cout <<s1<< "\t This cin will read only 1 word as input in a string"<<endl;
    
    getline(cin,s1);
    cout<<s1<<" --  getline(cin,variable_name) will take complete string as input";
}