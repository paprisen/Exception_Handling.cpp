// Papri Sen
// 24070123070
// A3

#include<iostream>
using namespace std;

int main(){

    int age;

    cout << "Enter your age: ";
    cin >> age;

    try{
        if(age<18){
            throw(age);
        }

        else{
            cout << "You are eligible to vote!" << endl;
        }
    }

    catch(int n){
        cout<<"Exception: You are below 18 years of age!"<<endl;
    }

    return 0;
}
/* 
Outputs:
Enter your age: 18
You are eligible to vote!

Enter your age: 12
Exception: You are below 18 years of age!
*/
