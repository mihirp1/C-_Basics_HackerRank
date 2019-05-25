#include<bits/stdc++.h>

using namespace std;
class Box {

  private:
  long length,breadth,height;

  public:

  Box()
   { 
     length = 0;
     breadth = 0;
     height = 0;
 
   }

   Box(long L,long B,long H)
   {
     length = L;
     breadth = B;
     height = H;
   }

   Box(const Box &A)
   {
     length = A.length;
     breadth = A.breadth;
     height = A.height;

   }

   int getLength()
   {

     return length;

   }

   int getBreadth()
   {

       return breadth;
   }

   int getHeight()
   {
       return height; 
   }

   long long CalculateVolume()

   {

       return ( length*breadth*height);

   }

   friend bool operator<(const Box &A,const Box &B)

   {
    int flag = true;   
    if(A.length < B.length)

   {
      flag = false;
      return true; 
   }
    
    else if(A.breadth < B.breadth && A.length == B.length)
    
    {
     flag = false;  
     return true;
    }

    else if(A.height < B.height && A.breadth == B.breadth && A.length == B.length)
     {
        flag = false;
     return true; 

     }

    return false;

   }


   friend ostream& operator<<(ostream& out,const Box &A)
   {
     
     out << A.length << " " << A.breadth << " "<< A.height;
     return out;

   }

};


//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


