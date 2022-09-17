#include <iostream>
using namespace std;


int main() {
   int i;
   for(i=1;i<=30;i++){
       
       switch(i){
       default :i+=2;
       break ;
       case 1 : i+=5;
       case 2 : i+=3;
       case 3 : i+=7;
       
       }
       cout<<i<<endl;
       
   }
}
