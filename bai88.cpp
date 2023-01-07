#include<iostream>
#include<math.h>
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

void xuat(int a[], int n)
{
       cout << "Mang vua nhap: ";
       for(int i = 0;i < n;i++)
       {
              cout << a[i] << " ";
       }
}

bool checksn(int n)
{
       if(n <= 1)
       {
              return 0;
       }
       for(int i = 2;i <= sqrt(n);i++)
       {
              if(n % i == 0)
              {
                     return 0;
              }
       }
       return 1;
}

int dem(int a[], int n)
{
       int dem = 0;
       for(int i = 0;i < n;i++)
       {
              if(checksn(a[i]) == 1)
              {
                     dem++;
              }
       }
       return dem;
}

int main()
{
       int a[MAX], n;
       cout << "Nhap so phan tu cua mang: ";
       cin >> n;
       nhap(a,n);
       xuat(a,n);
       cout << "\nSo luong cac so nguyen: " << dem(a,n);
       return 0;
}