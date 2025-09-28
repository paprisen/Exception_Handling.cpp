// Papri Sen
// 24070123070
// A3

#include <iostream>
using namespace std;
int main() {
    float n1,n2,ans;
    cout << "Enter Number 1:";
    cin >> n1;
    cout << "Enter Number 2:";
    cin >> n2;
    try{
        if(n2 == 0){
            throw n2;
        }
        else{
            ans = n1/n2;
            cout << "Answer is: "<<ans<<endl;
        }
    }
    catch(float num){
        cout << "\nCannot Divide by 0";
    }

    return 0;
}

/* 
Outputs:
Enter Number 1: 10
Enter Number 2: 2
Answer is: 5
*/
