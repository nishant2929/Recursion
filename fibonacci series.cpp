/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int f(int n){
  if(n<=1){
      return n;
  }  
  
  int last = f(n-1);
  int seclast = f(n-2);
  return last + seclast;
}

int main()
{
    int n;
    cin>>n;
    cout<<f(n);
}