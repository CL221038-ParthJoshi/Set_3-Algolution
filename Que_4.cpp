#include <iostream>
#include <string>
using namespace std;

bool checkSmallParentheses(const string& str) {
    int balance = 0;

    
    for (char ch : str) {
        if (ch != '(' && ch != ')') {
            return false; 
        }
    }

    
    for (char ch : str) {
        if (ch == '(') {
            balance++;
        } else if (ch == ')') {
            balance--;
        }

        
        if (balance < 0) {
            return false;
        }
    }

    
    return balance == 0;
}

int main() {
    string testString1 = "(())()";
    string testString2 = "(()))(";

    cout << "Test 1: " << (checkSmallParentheses(testString1) ? "Balanced" : "Unbalanced") << endl;
    cout << "Test 2: " << (checkSmallParentheses(testString2) ? "Balanced" : "Unbalanced") << endl;

    return 0;
}
