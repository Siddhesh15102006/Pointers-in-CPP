// Experiment Number - 9
// Siddhesh Gajare
// ENTC (A3)
// 25070123505

#include <iostream>
using namespace std;

int main() 
{
    int arr[]={5,10,15,20,25};
    
    int *ptr = arr;
    
    cout<<"The Original Pointer is :- ";
    for(int i=0;i<5;i++){
        cout<<*(ptr+i)<<" ";
    }
    cout<<endl;
    
    cout<<"The Reversed Pointer is :- ";
    for(int i=4;i>=0;i--){
        cout<<*(ptr+i)<<" ";
    }
   
   return 0;   

}

Output :- 
The Original Pointer is :- 5 10 15 20 25 
The Reversed Pointer is :- 25 20 15 10 5 

=== Code Execution Successful ===
