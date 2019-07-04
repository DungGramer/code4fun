#include <iostream>
using namespace std;
int main()
{
    cout << "Nhap vao ky tu: ";
    char c;
    cin >> c;
    cout << "Ky tu co ma ASCII: " << (int)c << endl;
    (int)c++;
    cout << "\nKy tu ke tiep: " << c << endl 
    << "Ma ASCII: " << (int)c;
}