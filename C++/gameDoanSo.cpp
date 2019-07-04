#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main()
{
    while (true)
    {
    srand(time(NULL));
    int key = 1 + rand() % 100;
    int myKey, count = 0;
    bool win = false;
    do
    {
        cin >> myKey;
        count++;
        if (key == myKey)
        {
            cout << "Ban da doan dung !";
            win == true;
            break;
        }
        else if (key > myKey) cout << "Ban da doan sai, lon hon nua" << endl;
        else cout << "Ban da doan sai, nho hon nua" << endl;
    } while (count <= 7 || win == true);
    if (win == false && count == 7) cout << "Ban da thua !\n"<< "So may la: " << key;

    cout<<"\nBan co muon choi tiep khong(c/k)? ";
    char c;
    cin>>c;
    system("clear");
    if ( c == 'k') 
    break;
    }
    cout<<"GOOD BYE!";
}