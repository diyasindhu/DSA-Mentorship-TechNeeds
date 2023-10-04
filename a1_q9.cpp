#include<iostream>
using namespace std;
int main()
{
    int first,second,LCM,GCD;
    cout<<"enter the first number"<<endl;
    cin>>first;
    cout<<"enter second number"<<endl;
    cin>>second;

    for(int i=1;i<=first && i<=second;i++) {
        if(first%i==0 && second%i==0) {
            GCD=i;
        }
    }
    cout<<"GCD is equal to"<<GCD<<endl;
    LCM=(first*second)/GCD;
    cout<<"LCM is equal to"<<LCM<<endl;

}
