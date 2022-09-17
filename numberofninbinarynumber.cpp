// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {    
    int n=13,c=0;
    while(n>0)
    {c += n & 1;
    n>>=1;
    }
    cout<<c<<endl;
    }

  