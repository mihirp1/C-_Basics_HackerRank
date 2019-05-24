#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student 

{
  private :
  int age,standard  ;
  string first_name;
  string last_name;

  public:

  int get_age()
  {

      return age;
  }

  string get_first_name()
  {

      return first_name;
  }

  string get_last_name()
  {

      return last_name;
  }

  int get_standard()

  {

      return standard;
  }

  void set_first_name(string a)
  {


      first_name = a;
  }


  void set_last_name(string b)
  {


      last_name = b; 
  }

   void set_standard(int c)
   {

      standard = c;

   }

   void set_age(int d)
   {

       age = d;
   }

   string to_string()

   {
     stringstream ss1;  
     stringstream ss2;
     ss1 << age;
     ss2 << standard;
     string str1 = ss1.str();
     string str2 = ss2.str();
     string rvalue = str1 + "," + first_name + "," + last_name + "," + str2;

     //string rvalue = string(age) + "," + first_name + "," + last_name + "," + string(standard);
      
       return rvalue;

   }


};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}


