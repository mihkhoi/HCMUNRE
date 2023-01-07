#include<iostream>
using namespace std;
#define MAX 100
void nhap(int a[], int n)
{
       for(int i = 0;i < n;i++)
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
              if(a[i]%2 == 0)
              {
                     s = s + a[i];
              }
       }
       return s;
}

int tl(int a[], int n)
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
       cout << "Mang vua nhap: ";
       for(int i = 0;i < n;i++)
       {
              cout << a[i] << " ";
       }
}
int main()
{
       int a[MAX], n;
       cout << "Nhap so phan tu cua mang: ";
       cin >> n;
       nhap(a,n);
       xuat(a,n);
       cout << "\n" << tc(a,n) << endl;
       cout << tl(a,n);
       return 0;
}