#include <iostream>
#include <string>

using namespace std ;
class A {
	int x;
	string y;
	double z;
	public : 	A( ) { x = 0; y =""; z=0.5; }
		A(int s) : x(s) { }
		A(int a, string b, double c) : x(a), y(b), z(c) { }
	 int getX( ) { return x; }
	string getY( ) { return y; }
	double getZ( ) { return z; }
} ;
int main ( ) {		
      A a1[10];
      A a2[3] = {5, 9 ,12} ;
      A a3[3] = { A(5,"ali",3.1), A(2,"can",2.2), 8} ;
      cout << a1[2].getZ( ) << endl ;
      cout << a2[0].getX( ) << endl ;
      cout << a3[1].getY( ) << endl ;
      cout << a3[2].getX( ) << endl ; 

      return 0 ;
}