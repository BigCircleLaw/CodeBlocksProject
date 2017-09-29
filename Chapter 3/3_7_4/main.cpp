#include <iostream>

using namespace std;

const int  CONVERSION[3] = {60, 60, 24};

int main()
{
    long timeValue[4] = {0};
    cout << "Enter the number of seconds: ";
    cin >> timeValue[0];
    long secondValue = timeValue[0];
    for (int i = 0; i < 3; i++)
    {
        timeValue[i+1] = timeValue[i] / CONVERSION[i];
        timeValue[i] = timeValue[i] % CONVERSION[i];
    }
    cout << secondValue << " seconds = " << timeValue[3] << " days, " << timeValue[2];
    cout << " hours, " << timeValue[1] << " minutes, " << timeValue[0] << " seconds\n";
    return 0;
}
