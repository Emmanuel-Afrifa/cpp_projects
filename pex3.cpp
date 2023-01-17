# include <iostream>
# include <iomanip>

using namespace std;

    int main(){
        // Declaration of variables
        int num, dif;
        char ch;

        // Taking user inputs
        cout << "Please enter an integer between 0 and 35 inclusively: " ;
        cin >> num;
        cout << endl;

        // If the input is between 0 and 9 (inclusive), the number is printed, else an alphabet is printed with 10 
        // corresponding to A
        // If the number is outside of the given range, a warning is printed and the program exited.
        if (num >=0 and num <=9)
            cout << "\nThe value is: " << num << endl;
        else if (num >9 and num <= 35){
            ch = static_cast<char>(num+55);
            cout << ch<< endl;
        }
        else if (num < 0 || num > 35){
            cout << "Enter a number in the given range!!!" << endl;
            return 1;
        }

    }