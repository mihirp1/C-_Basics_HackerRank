#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include  <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string str;  
    int len;
    cin >> len;
    std::stringstream ss(str);
    vector<int> vec;
    int i;
    int count = 0;
    
    while( cin >> i)
    {
      vec.push_back(i);
     }


    std::sort(vec.begin(),vec.end());

    for(int i = 0;i < len  ;i++)
    {
    
        cout << vec[i] << " ";
    }

    return 0; 
    }

