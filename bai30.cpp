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
int tc(int a[], int n)
{
       int s = 0;
       for(int i = 0;i < n;i++)
       {
              if(a[i]%2 != 0)
              {
                     s = s + a[i];
              }
       }
       return s;
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
       xuat(a,n);
       cout << endl << "Tong cac so le= " << tc(a,n);
       return 0;
}