#include <iostream>
using namespace std;

void print_Array (int arr[], int n){

    cout<<"In funtion"<<sizeof (arr)<<endl;
    arr[0]=100;
   
    for (int i = 0; i < n ; i++)

    {
        cout<<arr[i]<<endl;

    }
    }   
    int main(){
        int arr = {1,2,3,4,5,6};
        int n= sizeof(arr)/sizeof(int);
        print_Array(arr,n);

        cout<<"in main"<< sizeof(arr)<<endl;
        for (int i=0;i<n;i++){

            cout<<arr[i]<<endl;
            
        }    
    }
//this is comment 
    
