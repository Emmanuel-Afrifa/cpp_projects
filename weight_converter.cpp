# include <iostream>
# include <string>
# include <iomanip>

using namespace std;

    int main(){
        // Declaring variables
        string name;
        double weight;
        double weight_pound;

        // Taking inputs from the user
        cout << "What is your name?? " << endl;
        getline(cin, name);

        cout << "What is your weight in kilograms??" << endl;
        cin >> weight;

        // Calculating the weight in pounds
        weight_pound = weight * 2.2;

        cout << fixed << showpoint << setprecision(2);

        cout << "\nName: " << name << endl;
        cout << "Weight in kilograms = " << weight << endl;
        cout << "Weight in pounds = " << weight_pound << endl;
    }