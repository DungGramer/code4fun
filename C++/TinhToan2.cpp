#include <iostream>
using namespace std;
int main()
{
    cout << "Nhap a: ";
    float a, b; char key;
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout<<"Nhap phep tinh: ";
    cin>>key;
    switch (key)
    {
    case '+':
        cout<<a<<" + "<<b<<" = "<<a+b;
        break;
    case '-':
        cout<<a<<" - "<<b<<" = "<<a-b;
        break;
    case '*':
        cout<<a<<" * "<<b<<" = "<<a*b;
        break;
    case '/':
        cout<<a<<" / "<<b<<" = "<<a/b;
        break;
    default:
    cout<<"Moi nhap phep tinh dung (+, -, *, /)";
        break;
    }
    return 0;
}