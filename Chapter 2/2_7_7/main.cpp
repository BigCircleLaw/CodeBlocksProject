#include <iostream>

using namespace std;

void conversion(int hour, int minute);

int main()
{
    cout << "Enter the number of hours: " ;
    int hourValue,minuteValue;
    cin>>hourValue;
    cout<<endl<<"Enter the number of minutes: ";
    cin>>minuteValue;
    cout<<endl;
    conversion(hourValue,minuteValue);
    return 0;
}
void conversion(int hour, int minute)
{
    cout<<"Time: "<<hour<<':'<<minute<<endl;
}
