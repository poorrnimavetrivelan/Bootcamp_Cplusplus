#include <iostream>
using namespace std;

int main(){
  //Unary - ++, --
  int a=10,b,c;
  b=a++; // B=A, A=A+1
  c=++a; // A=A+1, C=A

  int a1=10,b1,c1;
  b1=a1--; 
  c1=--a1; 

  //Arithmetic
  int d=2;
  std::cout << a+d << endl << a-d << endl << a*d << endl << a%d << endl;

  //Logical
  // >
  // <
  // >=
  // <==
  // ==
  // !=

  return 0;
}
