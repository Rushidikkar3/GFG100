#include<iostream>
using namespace std;
//To Check Whether Number is Even Or Odd
int main(){
    
    int n;
    cin>>n;
    if(n%2==0){
        cout<<"Number is Even: "<<n;
    }
    else{
        cout<<"Number is Odd: "<<n;
    }
    return 0;
}


// // Or
// bool isEven(int n) 
// { return (n % 2 == 0); 

// int main()
// {
//     int n = 247;
//     if (isEven(n) == true) {
//         cout << "Even" << endl;
//     }
//     else {
//         cout << "Odd";
//     }

//     return 0;
// }
