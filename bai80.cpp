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

 bool ktxk(int a[], int n)
{
       for(int i = 0;i < n-1;i++)
       {
              if((a[i]%2 == 0 && a[i+1]%2 == 0) || (a[i]%2 != 0 && a[i+1]%2 != 0))
              {
                     return 0;
              }
       }
       return 1;
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
       if(ktxk(a,n) == 1)
       {
              cout << "Co";
       }
       else
       {
              cout << "Khong";
       }
       return 0;
}