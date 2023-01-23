#include <iostream>

using namespace std;

int sum(int n1, int  n2){
    return n1 + n1;
}

int main() {
    // datatypes: int, lonf, float, double, string, char
    
    int n1, n2;  //definig the datatype is integer by using int;
     cin>>n1,n2;  //taking i/p from the user by using cin
    cout << sum(n1,n2);  //Print thr sum by calling the sum function 

    return 0;
}