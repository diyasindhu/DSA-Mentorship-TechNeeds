#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number  of rows ";
    cin>>n;
    int outerspace=n/2;
    int innerspace=-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=outerspace;j++){
            cout<<"\t";
        }
        cout<<"*\t";

        for(int j=1;j<=innerspace;j++){
            cout<<"\t";
        }
        if(i>1 && i<n){
            cout<<"*\t";
        }
        if(i<=n/2){
            outerspace--;
            innerspace+=2;
        }
        else{
            outerspace++;
            innerspace-=2;
        }
        cout<<endl;   
    }
    return 0;
}
