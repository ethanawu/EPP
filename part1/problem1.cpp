/* You are to write two functions, printString() and testString(), which are called from the given main function.  
printString (string) prints characters to std::cout with a space after every character and 
a newline at the end.  testString (string) returns true if the string contains two consecutive characters that are the same, false otherwise. 
See the main() to see how the two functions are called.  
Some sample runs are given below (the main has more example): 

string: “hello” 
printString prints: h e l l o 
testString returns: true  
string: “world” printString prints: w o r l d 
testString returns: false  
string: “hello world” printString 
prints: h e l l o   w o r l d 
testString returns: true  

• Write only the two functions in the space provided.  
• You can change the main function for your own testing.Your code will be tested with a similar main function. 
• Do not change the name of the given file (it should remain prob1.cpp)  

Hint: You can access the i-th character of a string s with s[i]. The number of characters in the string is s.size().  

File submission: Upload prob1.cpp with the two functions to Titanium 
Command to compile and run on Linux/Tuffix (RECOMMENDED): clang++ -std=c++17 prob2.cpp IntegerLinkedList.cpp ./a.out */

#include <iostream>
#include <string>

using std::string;
using std::cout;
bool checkAnswer(const string &nameOfTest, bool received, bool expected);

// Implement printString here
void printString(string input) {
    for(int i = 0; i < input.size(); i++) {
        std::cout << " " << input[i];
    }
    std::cout << std::endl;
}

// Implement testString here
bool testString(string input) {
    bool doubleChar = false;
    for(int i = 0; i < input.size() - 1; i++) {
        if(input[i] == input[i+1]){
            doubleChar = true;
        }
    }
    return doubleChar;
}



// EDIT CODE BELOW ONLY FOR TESTING (ANY CODE BELOW WILL BE OVER-WRITTEN DURING GRADING WITH DIFFERENT TESTS)

int main() {
    cout << "Test if the string contains two consecutive characters that are the same\n";
    string s = "hello";
    cout << "Contents of array : ";
    printString(s);
    
	checkAnswer(s, testString(s), true);
    
    string a = "world";
    cout << "Contents of array : ";
    printString(a );
	checkAnswer(a , testString(a), false);

    string b = "hello world";
    cout << "Contents of array : ";
    printString(b);
	checkAnswer(b, testString(b), true);

    string c = "zzz";
    cout << "Contents of array : ";
    printString(c);
	checkAnswer(c, testString(c), true);

    string f = "snakess";
    cout << "Contents of array : ";
    printString(f);
	checkAnswer(f, testString(f), true);

    string d = "a";
    cout << "Contents of array : ";
    printString(d);
	  checkAnswer(d, testString(d), false);
    
  return 0;
}

bool checkAnswer(const string &nameOfTest, bool received, bool expected) {
    if (received == expected) {
        cout << std::boolalpha << "PASSED " << nameOfTest << ": expected and received " << received << "\n";
        return true;
    }
    cout << std::boolalpha << "FAILED " << nameOfTest << ": expected " << expected << " but received " << received << "\n";
    return false;
}
