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

void xuat(int a[], int n)
{
       cout << "Mang vua nhap: ";
       for(int i = 0;i < n;i++)
       {
              cout << a[i] << " ";
       }
}

int maxeven(int a[], int n)
{
       int max = a[0];
       for(int i = 0;i < n;i++)
       {
              if(a[i]%2 == 0)
              {
                     if(a[i] > max)
                     {
                            max = a[i];
                     }
              }
       }
       return max;
}

int main()
{
       int a[MAX], n;
       cout << "Nhap so phan tu cua mang: ";
       cin >> n;
       nhap(a,n);
       xuat(a,n);
       cout << "\nSo chan lon nhat: " << maxeven(a,n);
       return 0;
}