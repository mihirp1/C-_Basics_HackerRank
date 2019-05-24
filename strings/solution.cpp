#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    std::string first;
    std::string second;
    std::string third;
    char temp; 

    cin >> first >> second;
    cout<<first.size()<< " "<<second.size()<<endl;
    
    //third = ;
    cout << first + second<<endl;
    temp = first[0]; 
    first[0] = second[0];
    second[0] = temp;

    cout<<first<<" "<<second<<endl;

    return 0;
}


