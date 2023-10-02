#include<iostream>
using namespace std;
int main()
{
    int start,end;
    cout<<"enter the lower bound of interval"<<endl;
    cin>>start;
    cout<<"enter the upper bound of interval"<<endl;
    cin>>end;

    cout<<"the prime numbers are"<<endl;
    for(int i=start;i<=end;i++) {
        for(int j=2;j<i;j++) {
            if(i%j==0) {
                break;
            }
            else if (i%j!=0 && j==(i-1)) {
                cout<<i<<endl;
            }
        }
    }  
}
