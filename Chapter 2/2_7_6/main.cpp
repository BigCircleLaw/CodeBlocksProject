#include <iostream>

using namespace std;

double lightYearToAstronomicalUmit(double celsiusValue);

int main()
{
    cout << "Enter the number of light years: "  ;
    double value;
    cin>>value;
    cout<<endl;
    cout<<value<<" light years = "<<lightYearToAstronomicalUmit(value)<<" astronomical uits."<<endl;
    return 0;
}


double lightYearToAstronomicalUmit(double lightYearValue)
{
    return 63240*lightYearValue;
}
