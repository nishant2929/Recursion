#include <iostream>

using namespace std;

bool f(int i,string&s){
    int n = 5;
    if(i>=n/2){
        return true;
    }
    if(s[i]!=s[n-1-i]){
        return false;
    }
   // swap(arr[i],arr[n-1-i]);
    f(i+1,s);
}

int main()
{
    string s = "madam";
    cout<< f(0,s);
    
}

