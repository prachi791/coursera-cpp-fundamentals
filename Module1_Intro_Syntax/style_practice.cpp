/*
* code before formatting practice
* Starting with the poorly styled code 
#include<iostream>
using namespace std;
class calc{
public:
int x,y;
void domath(){
x=10;y=20;
int res=x+y;
cout<<"result is "<<res<<endl;
if(res>25){
cout<<"big number"<<endl;}
else{cout<<"small number"<<endl;
}
}
};
int main(){
calc c;
c.domath();
return 0;
}
*/

// ---------- Improved code with better styling practices ----------
#include <iostream>
using namespace std;

// This class is responsible for performing a simple result calculation
// using two marks and displaying the result with a condition check
class ResultCalculator {
public:
    int marks1, marks2;

    void calculateResult() {
        // Assigning sample values to marks
        marks1 = 10;
        marks2 = 20;

        int Result = marks1 + marks2;

        cout << "result is " << Result << endl;

        // Determining the performance category based on result value
        if (Result > 25) {
            cout << "big number" << endl;
        }
        else {
            cout << "small number" << endl;
        }
    }
};

int main() {
    // Creating an object to access result calculation features
    ResultCalculator c;

    // Calling the function to perform calculation
    c.calculateResult();

    return 0;
}
