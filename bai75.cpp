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

bool ktx(int a[], int n, int x)
{
       for(int i = 0;i < n;i++)
       {
              if(a[i] == x)
              {
                    return 1;
              }
       }
       return 0;
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
       int a[MAX], n, x;
       cout << "Nhap so phan tu cua mang: ";
       cin >> n;
       nhap(a,n);
       xuat(a,n);
       cout << "\n";
       cin >> x;
       if(ktx(a,n,x) == 1)
       {
              cout << "Ton tai";
       }
       else
       {
              cout << "Khong ton tai";
       }
       return 0;
}