#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Nhap n: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j || j == 0 || i == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}