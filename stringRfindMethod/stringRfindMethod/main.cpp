//
//  main.cpp
//  stringRfindMethod
//
//  Created by Gorakh Chavan on 30/05/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

// C++ program to demonstrate
// rfind() method

#include <cstddef>
#include <iostream>
#include <string>
using namespace std;

// Function to return last occurrence
// of character in a string
void findLastOccurernce(string str, char ch)
{

    // To store the index of the result
    size_t found;

    // Function to find the last
    // occurence of character ch
    // in string str
    found = str.rfind(ch);

    // If string doesn't have
    // character ch present in it
    if (found == string::npos) {
        cout << "Character " << ch
            << " is not present in"
            << " the given string.";
    }

    // Else print the position
    else {
        cout << "The last occurence of '"
            << ch << "' is found at index: "
            << found << endl;
    }
}

// Driver Code
int main()
{
    // Given String
    string str("Welcome to GeeksforGeeks!");

    // Character to be found
    char ch = 'e';

    findLastOccurernce(str, ch);
}


