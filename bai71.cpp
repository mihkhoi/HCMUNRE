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

void dptd(int a[], int n)
{
       int d = 0;
       for(int i = 0;i < n;i++)
       {
              if(a[i] > 0)
              {
                     d++;
              }
       }
       cout << d;
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
       dptd(a,n);
       return 0;
}