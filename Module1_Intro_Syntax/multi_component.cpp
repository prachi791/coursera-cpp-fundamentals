// Including necessary headers
#include <iostream> // for input/output operations
#include <iomanip> // for output formatting
#include <string> // for string data type

// Adding aditional headers here
// #include <random> // for random number generation
// #include <chrono> // for time-related functions
// Using standard namespace
using namespace std;

int main() {
    // Program title and introduction
    cout << "================================================" << endl;
    cout << "           MULTI-COMPONENT PROGRAM              " << endl;
    cout << "================================================" << endl;
    cout << "This program demonstrates using multiple headers" << endl;
    cout << "and formatting techniques in C++." << endl << endl;
    
    // Component 1: Basic information display
    cout << "------------- COMPONENT 1: BASIC INFO -------------" << endl;

    // Create variables to store information
/*
    A string is a sequence of characters 
    A variable is a storage location that holds a value
*/
    string name = "C++ Programming";
    string version = "C++17";
    string creator = "Bjarne Stroustrup";
    int yearCreated = 1985;

    // Display the information
    cout << "Language: " << name << endl;
    cout << "Version: " << version << endl;
    cout << "Creator: " << creator << endl;
    cout << "Year Created: " << yearCreated << endl << endl;  
    
    // Add more variables and facts about C++
    string fact1 = "C++ is used to build games and operating systems";
    bool fact2 = true; // C++ supports object-oriented programming
    int fact3 = 0; // C++ has zero garbage collection

    cout << "Interesting Fact 1: " << fact1 << endl;
    cout << "Interesting Fact 2: " << (fact2 ? "Yes, C++ supports OOP" : "No") << endl;
    cout << "Interesting Fact 3: C++ has " << fact3 << " garbage collection" << endl << endl;

    // Component 2: Formatted numeric output
    cout << "------------- COMPONENT 2: FORMATTED NUMBERS -------------" << endl;

    // creating numeric variables
    double pi = 3.14159265358979323846;
    double e = 2.71828182845904523536;
    double goldenRatio = 1.618033988749894820;

    // Displaying with different precision
    cout << "Default display:" << endl;
    cout << "pi = " << pi << endl;
    cout << "e = " << e << endl;
    cout << "Golden Ratio = " << goldenRatio << endl << endl;

    cout << "With 2 decimal places:" << endl;
    cout << fixed << setprecision(2);
    cout << "pi = " << pi << endl;
    cout << "e = " << e << endl;
    cout << "Golden Ratio = " << goldenRatio << endl << endl;

    cout << "With 6 decimal places:" << endl;
    cout << fixed << setprecision(6);
    cout << "pi = " << pi << endl;
    cout << "e = " << e << endl;
    cout << "Golden Ratio = " << goldenRatio << endl << endl;

    // Reset formatting
    cout.unsetf(ios::fixed);
    cout << setprecision(6);

    // Component 3: Table display
    cout << "------------- COMPONENT 3: TABLE DATA -------------" << endl;
    
    // Set up table header
    // setw sets the field width for the next output
    cout << left << setw(15) << "Data Type" << setw(20) << "Size (bytes)" << setw(20) << "Value range" << endl;
    cout << string(55, '-') << endl;

    // Table rows
    cout << left << setw(18) << "int" << setw(13) << sizeof(int) << setw(20) << "  -2^31 to 2^31-1" << endl;
    cout << left << setw(18) << "double" << setw(13) << sizeof(double) << setw(20) << "  +/- 1.7e^308" << endl;
    cout << left << setw(18) << "char" << setw(13) << sizeof(char) << setw(20) << "  -128 to 127" << endl;
    cout << left << setw(18) << "bool" << setw(13) << sizeof(bool) << setw(20) << "  true or false" << endl;

    // adding two more data types
    cout << left << setw(18) << "float" << setw(13) << sizeof(float) << setw(20) << "  +/- 3.4e^38" << endl;
    cout << left << setw(18) << "long" << setw(13) << sizeof(long) << setw(20) << "  -2^63 to 2^63-1" << endl;

    // Component 4: Custom component - program infromation
    cout << "\n------------- COMPONENT 4: PROGRAM INFO -------------" << endl;

    // Getting current date/time info (simulated)
    string currentDate = "2026-01-16";
    string userName = "Developer";
    int linesOfCode = 140;
    
    // Formatting and displaying program info
    cout << "Program: Multi-Component Example" << endl;
    cout << "Author: " << userName << endl;
    cout << "Date: " << currentDate << endl;
    cout << "Lines of Code: " << linesOfCode << endl;
    cout << " - Header files: 3" << endl;
    cout << " - Components: 4" << endl;

    // Displaying progress bar (simulated)
    cout << "Completion: [";
    int progress = 80; // 80% complete
    // looping helps something to happen over and over again
    for (int i = 0; i < 20; i++){
        if (i < progress/5) cout  << "=";
        else cout << " ";
    }
    cout << "] " << progress << "%" << endl;

    // Program end
    cout << "\nProgram execution completed." << endl;
    return 0;
}
