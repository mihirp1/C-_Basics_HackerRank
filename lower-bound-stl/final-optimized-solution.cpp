#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//vector<int> vec;

void ReturnClosest(int a,int length,vector<int> &vec)

{

   vector<int>::iterator low,up;
   low = lower_bound (vec.begin(), vec.end(), a);
   cout << low - vec.begin() +1<<endl;

}

void CheckPresence(int a,int length,vector<int> &vec)
{
   int flag = 0; 
   vector<int>::iterator low,up;
   low = lower_bound (vec.begin(), vec.end(), a);

       if(a == vec[low-vec.begin()])
       {
          cout << "Yes "<< low-vec.begin()+1 <<endl;
          flag = 1;
          //break;
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

