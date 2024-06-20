//This code is done to reverse a number by interchanging String to number and vice versa.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    string obj=to_string(n);
    reverse(obj.begin(),obj.end());
    int r=stoi(obj);
    cout<<n<<endl;
    cout<<r;
}