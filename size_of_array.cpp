#include <iostream>
using namespace std;
int main(){
    int arr[]={2,4,5,6,7,2,52,23};
    cout<<"Size of array = "<<sizeof(arr)<<endl;
    int l=sizeof(arr)/sizeof(arr[0]);
    cout<<"Length of array = "<<l;
}