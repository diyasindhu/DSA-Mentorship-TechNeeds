#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number  of rows ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i+j==n+1){
                cout<<"*\t";
            }
            else if(i==j){
                cout<<"*\t";
            }
            else{
                cout<<"\t";
            }
        }    
        cout<<endl;   
    }
    return 0;
}
