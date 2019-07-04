#include <iostream>
using namespace std;
int main()
{
    int t;
    int hour, minute, second;
    cout << "Nhap so giay: ";
    cin >> t;
    hour = (t / 3600) % 24;
    minute = (t % 3600) / 60;
    second = (t % 3600) % 60;
    int hour2 = hour > 12 ? hour - 12 : hour;
    cout << hour2 << " : " << minute << " : " << second << (hour > 12 ? " PM" : " AM") << endl;
    return 0;
}