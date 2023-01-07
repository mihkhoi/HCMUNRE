#include<iostream>
using namespace std;
int main()
{
       double t, l, h, v, a, s, tb;
       cin >> t >> l >> h >> v >> a >> s;
       tb = (t + l + h + v + a + s)/6;
       if(t, l, h, v, a, s >= 6.5 && tb >= 8)
       {
              cout << "Dat loai gioi";
       }
       else if(t, l , h, v, a, s >= 5.0 && tb >= 7.0)
       {
              cout << "Dat loai kha";
       }
       else if(t, l, h, v, a, s >= 3.5 && tb >= 5.0)
       {
              cout << "Dat loai trung binh";
       }
       else
       {
              cout << "Dat loai yeu";
       }
       return 0;
}