// Program to explore appropriate data type usage in C++
#include <iostream>
using namespace std;

int main(){
    // Program header
    cout << "=======================================" << endl;
    cout << "    PRACTICAL DATA TYPE APPLICATION    " << endl;
    cout << "=======================================" << endl;
    cout << "This program demonstractes appropriate usage of different data types" << endl;
    cout << "for various kinds of information" << endl << endl;

    // Main program section starts from here...
    // Age data section
    cout << "----- Age Data Section -----" << endl;
    cout << "selecting appropriate data type for age information: " << endl;
    // Int types for ages (No fractional parts needed)
    int childAge = 8;
    int teenAge = 15;
    int adultAge = 42;

    // Displaying age info
    cout << "Child age: " << childAge << " years" << endl;
    cout << "Teen age: " << teenAge << " years" << endl;
    cout << "Adult age: " << adultAge << " years" << endl;

    // Memory usage
    cout << "\nAge data memory usage:" << endl;
    cout << "Size of int (for ages): " << sizeof(int) << " bytes" << endl;

    // Showing age calculations
    cout << "\nAge calculations:" << endl;
    int totalAge = childAge + teenAge + adultAge;
    cout << "Total of all ages: " << totalAge << " years" << endl;

    // Age calculations practice
    // Average age calculation
    double averageAge = static_cast<double> (totalAge) / 3;
    cout << "Average age: " << averageAge << " years" << endl;

    // Age difference calculation
    int ageDifference = adultAge - childAge;
    cout << "Age difference between adult and child: " << ageDifference << " years" << endl;

    // Personal age calculation
    int yearOfBirth = 2007;
    int currentYear = 2026;
    int myAge = currentYear - yearOfBirth;
    cout << "My age (born in " << yearOfBirth << "): " << myAge << endl;

    // ----- PRICE DATA SECTION -----
    cout << "\n----- PRICE DATA SECTION -----" << endl;
    cout << "selecting appropriate data type for price information: " << endl;

    // Using double for prices (needs decimal precision)
    double coffeePrice = 3.99;
    double laptopPrice = 1299.99;
    double housePrice = 350000.00;

    // Displaying price info
    cout << "Coffee price: $" << coffeePrice << endl;
    cout << "Laptop price: $" << laptopPrice << endl;
    cout << "House price: $" << housePrice << endl;

    // showing memory usage
    float priceAsFloat = 19.99f;
    double priceAsDouble = 19.99;
    cout << "\nPrice storage comparison:" << endl;
    cout << "Price as float: $" << priceAsFloat << " (uses " << sizeof(float) << " bytes)" << endl;
    cout << "Price as double: $" << priceAsDouble << " (uses " << sizeof(double) << " bytes)" << endl;

    // simple price calculations
    double totalPrice = coffeePrice + laptopPrice;
    cout << "\nPrice calculations:" << endl;
    cout << "Total price of coffee and laptop: $" << totalPrice << endl;

    // character data section
    cout << "\n----- CHARACTER DATA SECTION -----" << endl;
    cout << "selecting appropriate data type for character information: " << endl;

    // Character variables for single characters
    char grade = 'A';
    char symbol = '#';
    char initial = 'J';

    // Displaying character info
    cout << "Student Grade: " << grade << endl;
    cout << "Special Symbol: " << symbol << endl;
    cout << "First Initial: " << initial << endl;

    // Showing how characters are related to numbers (ASCII)
    cout << "\nCharacter to ASCII conversions:" << endl;
    cout << "ASCII value of " << grade << " is " << (int)grade << endl; 
    cout << "ASCII value of " << symbol << " is " << (int)symbol << endl;

    // showing memory usage
    cout << "\nCharacter data memory usage:" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;

    // character practice

    // storing my initials in char variables
    char myFirstInitial = 'P';
    char myLastInitial = 'M';
    cout << "\nMy initials are: " << myFirstInitial << myLastInitial << endl;

    // displaying ASCII values of my initials
    cout << "ASCII value of my first initial (" << myFirstInitial << ") is " << (int)myFirstInitial << endl;
    cout << "ASCII value of my last initial ( " << myLastInitial << ") is: " << (int)myLastInitial << endl;

    // My fav char
    char favChar = 'K';
    cout << "My favorite character is: " << favChar << endl;
    
     // ------ BOOLEAN DATA SECTION ------
    cout << "\n----- BOOLEAN DATA SECTION -----" << endl;

    // Boolean variables for simple flags
    bool isActive = true;
    bool hasPermission = false;
    bool isCompleted = true;

    // Display boolean values (they show as 1 for true, 0 for false)
    cout << "User account active: " << isActive << endl;
    cout << "User has admin permission: " << hasPermission << endl;
    cout << "Task completed: " << isCompleted << endl;

    // Show memory usage
    cout << "\nBoolean data memory usage:" << endl;
    cout << "Size of bool: " << sizeof(bool) << " byte(s)" << endl;
    
    // Simple boolean comparisons
    cout << "\nBoolean comparisons:" << endl;
    cout << "Are both account active AND task completed? ";
    if (isActive == true && isCompleted == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    // ------ SIMPLE PRODUCT EXAMPLE ------
    cout << "\n------ SIMPLE PRODUCT EXAMPLE ------" << endl;
    cout << "Combining multiple data types for a product:" << endl;

    // Product information using different data types
    int productId = 12345;
    double productPrice = 29.99;
    char productGrade = 'B';
    bool inStock = true;

    // Display product information
    cout << "\nProduct Information:" << endl;
    cout << "Product ID: " << productId << endl;
    cout << "In Stock: " << inStock << endl;
    cout << "Price: $" << productPrice << endl;
    cout << "Quality Grade: " << productGrade << endl;

    // Simple calculations
    double salesTax = productPrice * 0.08;  // 8% tax
    double total = productPrice + salesTax;
    
    cout << "\nPrice Calculations:" << endl;
    cout << "Sales tax (8%): $" << salesTax << endl;
    cout << "Total with tax: $" << total << endl;
    
    // Memory usage summary
    int totalMemory = sizeof(productId) + sizeof(productPrice) + sizeof(productGrade) + sizeof(inStock);
    cout << "\nTotal memory used for this product: " << totalMemory << " bytes" << endl;
    
    // ----- SECOND PRODUCT -----
    cout << "\n----- SECOND PRODUCT -----" << endl;
    int productId2 = 67890;
    double productPrice2 = 199.99;
    char productGrade2 = 'A';
    bool inStock2 = false;
    cout << "\nProduct Information:" << endl;
    cout << "Product ID: " << productId2 << endl;
    cout << "In Stock: " << inStock2 << endl;
    cout << "Price: $" << productPrice2 << endl;
    cout << "Quality Grade: " << productGrade2 << endl;
    double salesTax2 = productPrice2 * 0.08;  // 8% tax
    double total2 = productPrice2 + salesTax2;

    // Price calculations for 2nd product
    cout << "\nPrice Calculations:" << endl;
    cout << "Sales tax (8%): $" << salesTax2 << endl;
    cout << "Total with tax: $" << total2 << endl;

    // COmparing prices of both products
    cout << "\nComparing both products:" << endl;
    if (total < total2) {
        cout << "Product 2 costs more." << endl;
    } else if (total > total2) {
        cout << "Product 1 costs more." << endl;
    } else{
        cout << "Both products cost the same." << endl;
    }
    return 0;
}