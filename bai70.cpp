#include<iostream>
using namespace std;

void Nhap(int a[], int n)
{
       for(int i = 0;i < n;i++)
       {
              cout << "a["<<i<<"]= ";
              cin >> a[i];
       }
}

void irc(int a[], int n)
{
       for(int i = 0;i < n;i++)
       {
              if(i%2 == 0)
              {
                     cout << a[i] << " ";
              }
       }
}
void Xuat(int a[], int n)
{
       for(int i = 0;i < n;i++)
       {
              cout << a[i] << " ";
       }
}

int main()
{
       int a[1000], n;
       cin >> n;
       Nhap(a,n);
       Xuat(a,n);
       cout << "\n";
       irc(a,n);
       return 0;
}