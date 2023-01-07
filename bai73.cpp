#include<iostream>
using namespace std;

void nhap(int a[], int n)
{
       for(int i = 0;i < n;i++)
       {
              cout << "a["<<i<<"]= ";
              cin >> a[i];
       }
}

void tx(int a[], int n)
{
       int vt = 0;
       float x;
       cin >> x;
       for(int i = 0;i < n;i++)
       {
              if(a[i] == x)
              {
                     cout << i;
              }
       }
}

void xuat(int a[], int n)
{
       for(int i = 0;i < n;i++)
       {
              cout << a[i] << " ";
       }
}
int main()
{
       int a[10000], n;
       cin >> n;
       nhap(a,n);
       xuat(a,n);
       cout << "\n";
       tx(a,n);
       return 0;
}