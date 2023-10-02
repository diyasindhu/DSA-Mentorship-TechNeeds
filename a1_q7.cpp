#include <iostream>
using namespace std;
int main()
{
    double n;
    cout<<"enter the number whose inverse is to be found"<< endl;
    cin>>n;

    if (n == 0)
    {
        cout<<"inverse will be not finite"<<endl;
    }
    else
    {
        double inverse;
        inverse = 1 / n;

        cout<<"the inverse of number entered is"<<inverse<<endl;
    }
}
