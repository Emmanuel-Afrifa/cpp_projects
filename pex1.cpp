# include <iostream>
# include <iomanip>
# include <fstream>

using namespace std;

    int main(){
        // declaring the file I/O variiables
        ifstream inFile;
        ofstream outFile;

        //declaring other variables
        string firstname, lastname, department;
        double monthlySalary, taxes, bonus, paycheck, distanceT, travelingTime, avgSpeed, cost, salesAmount;
        int numberCoffeeCups;

        // opening the files 
        inFile.open("inData.txt");
        outFile.open("outData.txt");

        
        // reading the data from the file
        inFile >> firstname >> lastname >> department;
        inFile >> monthlySalary >> bonus >> taxes;
        inFile >> distanceT >> travelingTime;
        inFile >> numberCoffeeCups >> cost;
/*
        //check if data was read correctly
        cout << firstname << " " << lastname << ", " << department << endl;
        cout << monthlySalary << ", " << bonus << ", " << taxes << endl;
        cout << distanceT << ", " << travelingTime << endl;
        cout << numberCoffeeCups << ", " << cost << endl;
*/
        //Calculating the paycheck
        paycheck = (monthlySalary + (monthlySalary*(bonus/100.0))) - (monthlySalary * (taxes/100.0));

        //Calculating the average traveling time
        avgSpeed = distanceT/travelingTime;

        //Caluclating the total sales
        salesAmount = numberCoffeeCups * cost;

        // Outputing the data to the file
        outFile << fixed << showpoint << setprecision(2);

        outFile << "Name: " << firstname << " " << lastname << ", "
            << "Department: " << department << endl;
        outFile << "Monthly Gross Salary: $" << monthlySalary << ", "
            << "Monthly Bonus: " << bonus << "%, " << "Taxes: " << taxes << "%" << endl;
        outFile << "Paycheck: $" << paycheck << endl;
        outFile << "\n\n";
        outFile << "Distance Traveled: " << distanceT << " miles, " << "Traveling Time: "
            << travelingTime << " hours" << endl;
        outFile << "Average Speed: " << avgSpeed << " miles per hour" << endl;
        outFile <<"\n\n";
        outFile << "Number of Coffee Cups Sold: " << numberCoffeeCups << ", " << "Cost: $" 
            << cost << "per cup" << endl;
        outFile << "Sales Amount = $" << salesAmount << endl;
     
        inFile.close();
        outFile.close();

        return 0;
    }