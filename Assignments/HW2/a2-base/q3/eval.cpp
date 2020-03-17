#include <fstream>
#include <iostream>
#include "Scanner.h"
#include "Stack.h"  // GENERIC STACK

using namespace std;

// Desc: Conduct the passed operation with passed two integers
// Pre: right and left has tokenType integer,
//      operation has tokenType pltok, mitok, asttok, or slashtok
Token calculate (Token right, Token left, Token operation) {

    int result;

    switch(operation.tt){
        case pltok:
            result = left.val + right.val;
            break;
        case mitok:
            result = left.val - right.val;
            break;
        case asttok:
            result = left.val * right.val;
            break;
        case slashtok:
            result = left.val / right.val;
            break;
        default:
            result = 0;
    }

    Token newNum;
    newNum.tt = integer;
    newNum.val = result;

    return newNum;
}

int main () {

    // Create a file from cin
    string cinExpression;
    cin >> cinExpression;

    ofstream outputOfCin;
    outputOfCin.open("cin.txt");
    outputOfCin << cinExpression;
    outputOfCin.close();

    ifstream inputFile;
    inputFile.open("cin.txt");

    // Instantiate a scanner, token and two stacks then pass arguments
    Scanner expression(inputFile);
    Token currentToken = expression.getnext();
    Stack<Token> numStack, opStack;

    while (currentToken.tt != eof || !(opStack.isEmpty())) {

        if (currentToken.tt == integer) {
            numStack.push(currentToken);
        }
        else if (currentToken.tt == lptok) {
            opStack.push(currentToken);
        }
        else if (currentToken.tt == rptok) {
            if (opStack.peek().tt == lptok) {
                // opStack.pop()
            }
            else {
                while (opStack.peek().tt != lptok) {
                    numStack.push( calculate(numStack.pop(), numStack.pop(), opStack.pop()) );
                }
            }

            opStack.pop();
        }
        else if (currentToken.tt == pltok || currentToken.tt == mitok || currentToken.tt == eof) {
            if (!opStack.isEmpty() && (opStack.peek().tt == pltok || opStack.peek().tt == mitok || opStack.peek().tt == asttok ||opStack.peek().tt == slashtok)) {

                while (!opStack.isEmpty()) {
                    if (opStack.peek().tt == lptok) {
                        break;
                    }

                    numStack.push( calculate(numStack.pop(), numStack.pop(), opStack.pop()) );
                }

                if (currentToken.tt == eof) {
                    break;
                }
            }

            opStack.push(currentToken);
        }
        else if (currentToken.tt == asttok || currentToken.tt == slashtok) {
            if (!opStack.isEmpty() && (opStack.peek().tt == asttok ||opStack.peek().tt == slashtok)) {
                numStack.push( calculate(numStack.pop(), numStack.pop(), opStack.pop()) );
            }

            opStack.push(currentToken);
        }

        // Update currentToken
        currentToken = expression.getnext();
    }

    inputFile.close();
    cout << "ans = " << numStack.pop().val << endl;

    return 0;
}


