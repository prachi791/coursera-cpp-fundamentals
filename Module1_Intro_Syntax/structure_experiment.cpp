#include<iostream>
using namespace std;

int main(){
    // Experiment 1
    // Removed #include<iostream>
    // Error: 'cout' was not declared in this scope or 'cout' is not a member of 'std'

    // Expriment 2
    // Removed 'std::'
    // Error: 'cout' was not declared in this scope

    // Experiment 3
    // changed int main() to double main()
    // Error: main function must return int

    // Experiment 4
    // removed ';' at the end of cout line
    // Error: expected ';' before 'return'

    // Experiment 5
    // wrote cout outside main function
    // Error: 'cout' does not name a type

    // Experiment 6
    // removed return 0;
    // program still works fine as main returns 0 by default in C++

    // Experiment 7
    // mismatched braces
    // Error: expected '}' at end of input
    
    cout << "Hello, World!" << endl;
    return 0;
}
