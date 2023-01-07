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
int ln(int a[], int n)
{
       int max = a[0];
       for(int i = 0;i < n;i++)
       {
              if(a[i] > max)
              {
                     max = a[i];
              }
       }
       return max;
}

int nn(int a[], int n)
{
       int min = a[0];
       for(int i = 0;i < n;i++)
       {
              if(a[i] < min)
              {
                    min = a[i]; 
              }
       }
       return min;
}
void xuat(int a[], int n)
{
       for(int i = 0;i < n;i++)
       {
              cout << a[i] << " ";
       }
}
int main() {
       int a[10000], n;
       cin >> n;
       nhap(a,n);
       xuat(a,n);
       cout << "\n" << ln(a,n) << endl;
       cout << nn(a,n);
       return 0;
}