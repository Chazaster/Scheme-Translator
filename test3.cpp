// Autogenerated Scheme to C++ Code
// File: test3.cpp
#include <iostream>
#include "Object.h"
using namespace std;

Object listop_ex1 ()
{
 cons( listop( "car",  Object( "(abc )" ) ),  listop( "cdr",  Object( "(def )" ) ) )

}

Object listop_ex2 ()
{
 cons( listop( "cadr",  Object( "(abc )" ) ),  listop( "cddr",  Object( "(def )" ) ) )

}

int main ()
{
	cout << listop_ex1( );
	cout << endl; 
 	cout << listop_ex2( ); 
 	cout << endl;
}

