#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    std::stringstream ss(str);
    vector<int> vec;
    int i;

    while(ss >> i)
    {
      //cout << "Me:" <<i<<endl;  
      vec.push_back(i);
      if(ss.peek() == ',')
      ss.ignore();
   
    }
    return vec;

}

int main() {
    string str;
    cin >> str;
    
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}


