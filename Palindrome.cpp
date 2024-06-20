#include <iostream>
using namespace std;
int main(){
    int n,r=0;
    cout<<"Enter the number : ";
    cin>>n;
    int temp=n;
    while(temp>0){
        int d=temp%10;
        r=r*10+d;
        temp/=10;
    }
    if(n==r)
    cout<<"Palindrome";
    else
    cout<<"Not Palindrome";

}