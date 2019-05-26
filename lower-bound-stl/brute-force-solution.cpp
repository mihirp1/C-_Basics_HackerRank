#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//vector<int> vec;

void ReturnClosest(int a,int length,vector<int> &vec)

{

for(int i=0;i<length;i++)
   {
       if(vec[i] > a)
       {
          cout << i+1 <<endl;
          //flag = 1;
          break;
       }
   }

}

void CheckPresence(int a,int length,vector<int> &vec)
{
   int flag = 0; 
   for(int i=0;i<length;i++)
   {
       if(a == vec[i])
       {
          cout << "Yes "<< i+1 <<endl;
          flag = 1;
          break;
       }
   }
   int i;
  if(flag == 0)
    {

        cout << "No ";
        ReturnClosest(a, length,vec);

    }   

}



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int length;
    cin >> length;
    int i,temp,q;
    vector<int> vec;
    vector<int>::iterator low,up;
    
    for(int i = 0;i<length;i++)
    { 
      cin >> temp;
      vec.push_back(temp);
    }

    for(int i = 0;i<length;i++)

    {
     //cout << vec[i] << " ";
    }

   cin >> q;

    while(cin >> i)

    {
     CheckPresence(i,length,vec);

    }


    return 0;
}

