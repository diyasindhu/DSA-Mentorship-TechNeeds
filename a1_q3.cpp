#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the digit which is to be test"<<endl;
    cin>>n;

    if(n==0 || n==1) {
        cout<<"The number entered is nither prime nor composite"<<endl;
    }

    for (i=2;i<=n/2;i++) {
        if(n%i==0) {
            cout<<"the number is not prime"<<endl;
        }
        else {
            cout<<"the number is prime"<<endl;
        }
    }
}
