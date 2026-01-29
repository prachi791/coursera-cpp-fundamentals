#include <iostream>
using namespace std;

/*
* Issue 1:
Line number(s): 4
Problem:
The class name 'a' is not meaningful. Thus it does not describe its purpose.
Impact:
Makes the code hard to understand and reduces readability.

* Issue 2:
Line number(s): 6
Problem:
Variables like x, temp, and arr have unclear names.
Impact:
Confuses the reader and makes debugging difficult.

* Issue 3:
Line number(s): 9–11, 14–16
Problem:
The magic number '10' is used multiple times without explanation.
Impact:
If the array size changes, it must be updated everywhere, increasing errors.

* Issue 4:
Line number(s): Entire program
Problem:
No comments are present to explain the code.
Impact:
New developers will struggle to understand program logic.

* Issue 5:
Line number(s): 8–27
Problem:
All logic is written inside one function.
Impact:
Code becomes long, complex, and hard to maintain.
*/

/*
* issues covered: corrected the names of class, function, variables to meaningful names,
* replaced magic numbers with named constants, added comments to explain code. 
*/

int main(){
    cout << "Program runs successfully!!" << endl;
    return 0;
}
