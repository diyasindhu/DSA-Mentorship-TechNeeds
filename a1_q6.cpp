#include<iostream>
using namespace std;
int main()
{
    int n, reverse=0;
    cout<<"enter the number that is to be reversed"<<endl;
    cin>>n;

    while (n>0) {
        reverse=(reverse*10)+n%10;
        n=n/10;
    }

    cout<<"the reversed number is:"<<reverse<<endl;
}
