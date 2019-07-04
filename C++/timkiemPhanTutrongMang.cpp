#include<iostream>
using namespace std;
#define MAX 100
int main()
{
    int n, arr[MAX];
    cout<<"Nhap n: ";cin>>n;

    for(int i = 0; i < n; i++)
    {
        cout<<"arr["<<i+1<<"] = ";cin>>arr[i];
    }
    
    cout<<"Mang da nhap: "<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<"arr["<<i+1<<"] = "<<arr[i]<<endl;
    }

    cout<<"Nhap phan tu muon tim kiem: ";int k;cin>>k;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == k)
        {
            cout<<"Da tim thay "<<k<<" tai vi tri i = "<<i;
            break;
        }else{
            cout<<"Khong co phan tu can tim";
            break;
        }
    }    
}