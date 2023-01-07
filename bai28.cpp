#include<iostream>
using namespace std;

void nhap(int a[], int n)
{
       for(int i = 0; i < n;i++)
       {
              cout << "a["<<i<<"]= ";
              cin >> a[i];
       }
}

void gd(int a[], int n)
{
       int t;
       for(int i = 0;i < n;i++)
       {
              for(int j = i + 1;j < n;j++)
              {
                     if(a[i] > a[j])
                     {
                            t = a[i];
                            a[i] = a[j];
                            a[j] = t;
                     }
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
       int a[100], n;
       cin >> n;
       nhap(a,n);
       gd(a,n);
       xuat(a,n);
       return 0;
}