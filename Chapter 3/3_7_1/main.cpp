#include <iostream>

using namespace std;

const int FootToInch = 12;

int main()
{
    int footValue;
    int inchValue;
    cout << "_____\b\b\b\b\b" ;
    cin>> inchValue;
    footValue = inchValue/FootToInch;
    inchValue = inchValue%FootToInch;
    cout << footValue<< " foots "<< inchValue<< " inchs\n";
    return 0;
}
