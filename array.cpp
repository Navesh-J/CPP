#include <iostream>
using namespace std;
int main(){
    int arr[]={1,4,6,8,94,22,8,9,7,5};
    for(int i: arr) //for-each loop
    cout<<i<<endl;      //In a range-based for loop, the variable i directly represents the elements of the array, not their indices
}