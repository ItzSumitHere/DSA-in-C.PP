// WAP to print sum of digits of a given number.

#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter num : ";
    cin>>n;
    int sum=0;
    while(n>0){
        
        sum+=n%10;
        n=n/10;
    }
    
    cout<<sum<<endl;

}