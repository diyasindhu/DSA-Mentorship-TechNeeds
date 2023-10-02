#include<iostream>
using namespace std;               
int main() 
 {
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;

    int digit =0;

    if (n==0) {
        digit=1;
    }
    else {
        while(n !=0) {
            n/=10;
            digit++;
        }
    }

    cout<<"number of digits in the number"<<digit<<endl;
}
