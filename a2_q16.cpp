#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the number of rows";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
            cout<<" ";
        }
        for(int j=1;j<=(2*(n-i)-1);j++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            if(j==n){
                continue;
            }
            else{
            cout<<j;
            cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
