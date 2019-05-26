#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    set<int>s;
    int q;
    cin >> q;

    int i,temp1,temp2;

    for(i  = 0;i<2*q;i+=2)

    {

        cin >>  temp1 >> temp2;
        //cout << temp1 << " " << temp2 << endl;

        if(temp1 == 1)
        {
        s.insert(temp2);

        }

        if(temp1 == 2)
        {

            s.erase(temp2);
        }

        if(temp1 == 3)
        {
         set<int>::iterator itr=s.find(temp2);
         if(itr != s.end())
         cout << "Yes"<<endl;
         else
         cout << "No"<<endl;

        }
    }

    return 0;
}




