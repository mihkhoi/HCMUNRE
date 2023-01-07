#include<iostream>
using namespace std;
int main()
{
       char c;
       cin >> c;
       if(c >= 'a','A' && c <= 'z','Z')
       {
              cout << c << " thuoc 1 trong 26 chu cai tieng anh";
       }
       else
       {
              cout << c << " khong thuoc trong 26 chu cai tieng anh";
       }
       return 0;
}