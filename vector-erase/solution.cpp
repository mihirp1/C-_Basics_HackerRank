#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int len,temp;
    int del_index;
    cin >> len;
    
    int i,start,end;

    vector<int> vec;

    for(int i;i<len;i++)
    {
        cin >> temp;
    vec.push_back(temp);

    }
    cin >> del_index;
    int range1,range2;
  
    cin >> range1 >> range2;
    //cout << "Value of length : " << len<<endl;
    //cout << "Value of delete index : " << del_index<<endl;
    //cout << "Value of range : " << range1<<" "<<range2<<endl;

    vec.erase(vec.begin()+del_index-1);
 
    //cout << "Value of start : " << start << "Value of end : " << end<<endl;

    //vec.erase(vec.begin());
    vec.erase(vec.begin()+range1-1,vec.begin()+range2-1);

    cout<<vec.size()<<endl;


    for(int i = 0;i<vec.size();i++)
    {

        cout<<vec[i] <<" ";
    }

    return 0;
}

