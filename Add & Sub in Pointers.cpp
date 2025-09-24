// Experiment Number - 9
// Siddhesh Gajare
// ENTC (A3)
// 25070122505

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10,20,30,40,50};
    int *P1=&arr[2];
    int *P2=&arr[4];
    
    int add=*P2+*P1;
    int sub=*P2-*P1;
    
    cout<<"P1 ="<<*P1<<endl;
    cout<<"P2 ="<<*P2<<endl;
    cout<<"addition is = "<<add<<endl;
    cout<<"Subtraction is  = "<<sub<<endl;
    
    return 0;
}

Output :-
P1 =30
P2 =50
addition is = 80
Subtraction is  = 20


=== Code Execution Successful ===
