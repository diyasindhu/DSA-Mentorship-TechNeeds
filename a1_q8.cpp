#include<iostream>
using namespace std;
int main()
{
    int n,a;
    int div=1;
    cout<<"enter the number n "<<endl;
    cin>>n;

    cout<<"enter by how many digits u want to rotate"<<endl;
    cin>>a;

    for(int i=1;i<=a;i++) {
        div=div*10;
    }
    cout<<n%div<<n/div;

}
