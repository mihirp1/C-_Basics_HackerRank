#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    map<string,int> m;
    int q;
    int i,number,marks;
    int data;
    cin >> q;

    std::string key;
    for (int i =0;i<q;i++) 
    {
     cin >> number >> key;
     //cout<< number<<key<<endl;
     if(number == 1)
     {
       cin >> marks;
       m[key] += marks;

     }

     if(number == 2)
     {

         m.erase(key);
     }

     if( number == 3)
     {

         cout << m[key]<<endl;
     }

    }

    return 0;
}




