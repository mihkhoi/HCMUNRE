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

void tpta(int a[], int n)
{
       float s = 0;
       for(int i = 0;i < n;i++)
       {
              if(a[i] < 0)
              {
                     s = s + a[i];
              }
       }
       cout << s;
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
       tpta(a,n);
       return 0;
}