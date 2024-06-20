#include <iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter your Number : ";
    cin>>n;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==1)
    cout<<"Prime Number";
    else
    cout<<"Not Prime Number";
}