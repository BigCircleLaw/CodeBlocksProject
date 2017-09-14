#include <iostream>

using namespace std;

double celsiusToFahrenheit(double celsiusValue);

int main()
{
    cout << "Please enter a Celsius value: "  ;
    double value;
    cin>>value;
    cout<<endl;
    cout<<value<<" degrees Celsius is "<<celsiusToFahrenheit(value)<<" degrees Fahrenheit"<<endl;
    return 0;
}


double celsiusToFahrenheit(double celsiusValue)
{
    return 1.8*celsiusValue+32;
}
