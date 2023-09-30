#include<iostream>
using namespace std;
int main ()
{
    float phy,chem,math;

    cout<<"enter your marks in phy"<<endl;
    cin>>phy;

    cout<<"enter your marks in chem"<<endl;
    cin>>chem;

    cout<<"enter your marks in math"<<endl;
    cin>>math;
  
    float percentage;
    percentage=(phy+chem+math)/3;

    cout<<"your percentage is:"<<percentage<<endl;

    if (percentage >= 90) {
       cout<<"your grade is A"<<endl;
    }

    else if (percentage<90 && percentage>=70) {
        cout<<"your grade is B"<<endl;
    }

    else if(percentage<70 && percentage>=50) {
        cout<<"your grade is C"<<endl;
    }

    else {
        cout<<"your grade is D"<<endl;
    }

}
