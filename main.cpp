//Unit 2 COSC-1437 Starter 
/* Task - Top level solution folder: C_STL_Library_Angora
create a single main.cpp that contains code samples and implementations of each of the following topics */

#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <cassert>
#include <stack>
#include <set>
#include <utility>
#include <map>
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

typedef map<string, int> MapT;
typedef MapT::const_iterator MapIterT;

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
    for (it = vint.begin(); it != vint.end(); ++it)
    {
      cout << "\n" << *it;
    }

    /****COSC-1437*** Stack*/
    // A stack is a container that permits to insert and extract its elements only from the top of the container.
    stack < int > st;

    st.push( 100 );                 // Push number on the stack
    assert( st.size() == 1 );       // Verify 1 element is on the stack
    assert( st.top() == 100);       // Verify element value  

    st.top() = 456;                 // Assign new value
    assert( st.top() == 456 );

    st.pop();                       // Remove element
    assert( st.empty() == true );


    /****COSC-1437**** Set*/
    // A set is a container that holds unique elements
    set< int > iset;             // Set of unique interger numbers

    iset.insert( 11 );           // Populate set with some values
    iset.insert( -11 );
    iset.insert( 55 );
    iset.insert( 22 );
    if ( iset.find( 55 ) != iset.end() )  // Is value already stored?
    {
      iset.insert( 55 );
    }
    assert( iset.size() == 4 );   // Sanity check :-)
    set< int >::iterator ist;
    for ( ist = iset.begin(); ist != iset.end(); ist++ )
    {
      cout << "\n" << *ist;
    }


    /****COSC-1437****Pair_Structure*/
    // A Pair Structure holds one object of type T1 & another of type T2
    pair< string, string > strstr;  // Pair with two objects set as strings
    strstr.first = "Hello";
    strstr.second = "World";

    pair< int, string > intstr;     // Pair with two objects set as string and int
    intstr.first = 1;
    intstr.second = "one";

    pair< string, int > strint( "two", 2 ); // Pair with two objects set as int and string
    assert( strint.first == "two" );
    assert( strint.second == 2 );


    /****COSC-1437**** Map_Insert*/
    // A map stores pairs of a key type and a value type. 
    // Provides fast access to a value when given a key.
    // Uses trees, so fast means 0(log(num items in map))
    MapT amap;
    pair< MapIterT, bool > result =
        amap.insert( make_pair( "Fred", 45 ) );

        assert( result.second == true );
        assert ( result.first -> second == 45 );

        result = amap.insert( make_pair( "Fred", 54 ) );

        // Fred was already in the map, and result.first
        // simply points there now:
        assert( result.second == false );
        assert( result.first -> second == 45 );

    /****COSC-1437****Map_Summary*/
    map< string, string > phone_book;
    phone_book[ "\n\n411" ] = "Directory";
    phone_book[ "911" ] = "Emergency";
    phone_book[ "508-678-2811" ] = "BCC";
    if ( phone_book.find( "411" ) != phone_book.end() )
    {
      phone_book.insert( make_pair( string( "411" ), string( "Directory" )));
    }
    assert( phone_book.size() == 3 );
    map< string, string >::const_iterator its;
    for ( its = phone_book.begin(); its != phone_book.end(); ++its)
      {
        cout << its -> first << " " << its -> second << endl;
      }


    /****COSC-1437**** Sort_Algorithm*/
    // Sort the range between two iterators
    // Iterators must be random access
    // Items pointed to must have operator <
    int arr[ 100 ];
    sort( arr, arr + 100 );
    vector v1;
    sort( v1.begin(), v1.end() );

    /****COSC-1437****Predicate_Algorithm*/
    bool less_than_7( int value )
    {
      return value < 7;
    }

    vector< int > v1;
    int count_less = std::count_if( v1.begin(), v1.end(), less_than_7 );

    return 0; 
 }