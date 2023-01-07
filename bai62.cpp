#include<iostream>
#define MAX 100
using namespace std;

int main()
{
       long n;
       int sd, t = 0, max = 0, d = 0, a[MAX], i = 0;
       cin >> n;
       do
       {
              sd = n%10;
              t = t + n%10;
              if(sd > max)
              {
                     max = sd;
              }
              d++;
       } while (n /= 10);
       cout << "So dau tien: " << sd << endl;
       cout << "Tong: " << t << endl;
       cout << "So lon nhat: " << max << endl;
       cout << "Chu so: " << d << endl;
       bool checktangdan;
       int themang = n;
       int chusocuoi = themang%10;
       themang /= 10;
       while(themang != 0)
       {
              int chusokecuoi = themang%10;
              themang /= 10;
              if(chusocuoi < chusokecuoi)
              {
                     checktangdan = false;
                     break;
              }
              else
              {
                     chusocuoi = chusokecuoi;
              }
       }
       if(checktangdan)
       {
              cout << "Dung";
       }
       else
       {
              cout << "Sai";
       }
       return 0;
}