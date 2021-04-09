//Unit 2 COSC-1437 Starter 
/* Task - Top level solution folder: C_STL_Library_Angora
create a single main.cpp that contains code samples and implementations of each of the following topics */

#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
using namespace std; 

//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector1 
{ 
  private:  
      vector<int> vec; 
  public: 
      MyClassVector1 (vector<int> v)  //parameterized constructor
      { 
        vec = v; 
      } 
      void print() 
      { 
          /// print the value of vector 
          for (int i = 0; i < vec.size(); i++) 
          {
              cout << vec[i] << " "; 
          }    
      } 
};

class MyClassVector2
{
      vector<int> vec; // Private by default
  public:
      MyClassVector2 (vector<int> v) // Parameterized constructor
      {
      }
      void print()
      {
        /// print the value of the vector
        for (int i = 0; i < vec.size(); i++)
        {
          cout << vec[i] << " ";
        }      
      }
};

class MyClassVector3
{
      vector<int> vec; // Private by default
  public:
      MyClassVector3(vector<int>& arr) // Assign the reference of stl container
        : vec(arr)
        {
        }
};

int main() 
{
    /****COSC-1437***Vectors*/ 
    //Write the base code for: 5. std::vector example
    vector<double> vd; //vd elments are floating point numbers
    vector<int> vi; //vi elements are integer numbers 
    vector<string> vs; //vs elements are string objects 

    //Expand this code to:

    //add 3 elements to the vd vector
    vd.push_back(1);
    vd.push_back(2);
    vd.push_back(3);
    vd.push_back(55.4); 

    //add 3 elements to the vi vector
    vi.push_back(1);
    vi.push_back(2);
    vi.push_back(3);

   // add 3 elements to the vs vector
    vs.push_back("One");
    vs.push_back("Two");
    vs.push_back("Three");

   // display the 3 elements in the vd vector
   cout << "\nValues in vd: \n"; 
   for(double vals : vd)
   {
     cout << vals << endl; 
   }
   cout << "\nAnother way to print vectors_vd: " << endl; 
   for(int i = 0; i < vd.size(); i++)
   {
     cout << vd[i] << endl; 
   }

   //display the 3 elements in the vi vector
   cout << "\nValues in vi: \n";
   for(int vals : vi)
   {
     cout << vals << endl;
   } 
   cout << "\nAnother way to print vectors_vi: " << endl;
   for(int i = 0; i < vi.size(); i++)
   {
     cout << vi[i] << endl;
   }

   // display the 3 elements in the vs vector
   cout << "\nValues in vs: \n";
   for(string vals : vs)
   {
     cout << vals << endl;
   } 

    /****COSC-1437***Vector_as_Class_Member*/ 
    //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/

   cout << "\nVector_as_Class_Member" << endl; 
    vector<int> vec; 
        for (int i = 1; i <= 5; i++) 
            vec.push_back(i); 
        MyClassVector1 obj(vec); 
        obj.print(); 
      
      //Continue with MyClassVector2 and MyClassVector3
   cout << "\nInitializeing_Vector_using_Initializer_List" << endl; 
    vector<int> vec2; 
        for (int i = 1; i <= 5; i++) 
            vec2.push_back(i); 
        MyClassVector2 obj2(vec); 
        obj.print(); 

   cout << "\nVector_Reference" << endl; 
    vector<int> vec3; 
        for (int i = 1; i <= 5; i++) 
            vec3.push_back(i); 
        MyClassVector1 obj3(vec); 
        obj.print(); 
    /****COSC-1437***STL_Iterators*/ 
    vector< int > vint(10);
    vint [ 0 ] = 10;
    vint [ 1 ] = 20;
    vint [ 2 ] = 30;
    vint [ 3 ] = 40;
    vint [ 4 ] = 50;
    vint [ 5 ] = 60;
    vint [ 6 ] = 70;
    vint [ 7 ] = 80;
    vint [ 8 ] = 90;
    vint [ 9 ] = 100;

    
    // Display elements of the vector:
    vector< int >::iterator it;
    cout << "\n\nSTL Iterators";
    for (it = vint.begin(); it != vint.end(); ++it)
    {
      cout << "\n" << *it;
    }

    /****COSC-1437*** Stack*/


    //Write comments that help one better understand what the code is doing.

    /****COSC-1437**** Set*/
    //Write the code as presented in: 3. std::set

    //Write comments that help one better understand what the code is doing.

    /****COSC-1437****Pair_Structure*/
    //Write the code as presented in: 4. std::pair structure

    //Write comments that help one better understand what the code is doing.

    /****COSC-1437**** Map_Insert*/
    //Write the code as presented in: 14. std::map::insert

    //Write comments that help one better understand what the code is doing.

    /****COSC-1437****Map_Summary*/
    //Write the code as presented in: 16. Map summary

    //Write comments that help one better understand what the code is doing.

    /****COSC-1437**** Sort_Algorithm*/
    //Write the code as presented in: 23. sort example

    //Write comments that help one better understand what the code is doing.

    /****COSC-1437****Predicate_Algorithm*/
    //Write the code as presented in: 25. count_if and predicate function

    //Write comments that help one better understand what the code is doing. 

      return 0; 
 }