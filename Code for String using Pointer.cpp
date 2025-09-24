// Experiment Number - 9
// Siddhesh Gajare
// ENTC (A3)
// 25070122505

#include <iostream>
using namespace std;

int main() {
    char str[50];
    cout<<"Enter a String :- ";
    cin>>str;
    char*ptr=str;
    
    cout<<"The String is :- "<<endl;
    while(*ptr !='\0'){
        cout<<*ptr<<endl;
        ptr++;
    }
    return 0;
}

Output :-
Enter a String :- SIDDHESH
The String is :- 
S
I
D
D
H
E
S
H


=== Code Execution Successful ===
