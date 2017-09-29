#include <iostream>

using namespace std;

const double DegreeToMinute(60);
const double MinuteToSecond(60);

int main()
{
    int degreeValue;
    int minuteValue;
    int secondValue;
    cout << "Enter a latitude in degrees, minutes, and seconds:\n";
    cout << "First, enter the degrees: ";
    cin >> degreeValue;
    cout << "Next, enter the minutes of arc: ";
    cin >> minuteValue;
    cout << "Finally, enter the seconds of arc:";
    cin >> secondValue;
    cout << degreeValue << " degrees, " << minuteValue << " minutes, " << secondValue << "seconds = ";
    cout << degreeValue + (minuteValue + secondValue/MinuteToSecond)/DegreeToMinute << " degrees\n" ;

    return 0;
}
