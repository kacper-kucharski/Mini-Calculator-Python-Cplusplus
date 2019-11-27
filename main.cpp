#include <iostream>
#include <string>

using namespace std;

string correctInputs[7] = {"1", "2", "3", "4", "d", "c", "q"};
int storedValue;
string option;
bool stop = false;

int inputoperand() {
    int operand;
    cout << "********************\n";
    cout << "Please input the operand\n";
    cin >> operand;
    return operand;
}

void showstoredvalue() {
    bool correct = false;

    string n;
    cout << "********************\n";
    cout << "Stored value = " + to_string(storedValue) + "\n";

    while (!correct){
        cout << "Press 'c' to continue...\n";
        cin >> n;
        if (n == "c"){
            correct = true;
        }
        else {
            cout << "Invalid Input";
        }
    }
}

void processoption(const string& parm_option){
    if (parm_option == "1") {
        storedValue += inputoperand();
        showstoredvalue();
    }
    if (parm_option == "2") {
        storedValue -= inputoperand();
        showstoredvalue();
    }
    if (parm_option == "3") {
        storedValue *= inputoperand();
        showstoredvalue();
    }
    if (parm_option == "4") {
        storedValue /= inputoperand();
        showstoredvalue();
    }
    if (parm_option == "d") {
        showstoredvalue();
    }
    if (parm_option == "c") {
        storedValue = 0;
        showstoredvalue();
    }
    if (parm_option == "q") {
        stop = true;
    }
}

int main() {
    while (!stop) {
        bool correctInput = false;
        cout << "********************\n";
        cout << "CALCULATOR MENU\n";
        cout << "1-add\n";
        cout << "2-subtract\n";
        cout << "3-multiply\n";
        cout << "4-divide\n";
        cout << "d-display\n";
        cout << "c-clear\n";
        cout << "q-quit\n";
        cout << "********************\n";
        cout << "Choose an option:\n";

        while (!correctInput) {
            string inp;
            cin >> inp;
            for (const auto & i : correctInputs) {
                if (inp == i){
                    correctInput = true;
                    option = i;
                }
            }
            if (!correctInput) {
                cout << "Invalid input. Please try again.";
            }
        }
        processoption(option);
    }
    return 0;
}