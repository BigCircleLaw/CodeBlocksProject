#include <iostream>

using namespace std;
const int FootToInch(12);
const double KgToIb(2.2);
const double InchToM(0.0254);
int main()
{
    int footValue;
    int inchValue;
    double ibValue;
    cout << "foots : ";
    cin >> footValue;
    cout << "inchs : ";
    cin >> inchValue;
    cout << "ibs : ";
    cin >> ibValue;
    double mValue = ( footValue * FootToInch + inchValue ) * InchToM;
    double kgValue = ibValue/KgToIb;
    cout << mValue << endl;
    cout << kgValue << endl;
    cout << "BMI : " << kgValue/mValue/mValue << endl;
    return 0;
}
