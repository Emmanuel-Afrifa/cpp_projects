# include <iostream>
# include <iomanip>

using namespace std;

    int main(){

        // Variable declaration
        float num1, num2, num3, *num4, *num5, num6;
        int i,count = 0;

        // Taking the user inputs
         cout << "Enter the first number: ";
         cin >> num1;
         cout << endl;

         cout << "Enter the second number: ";
         cin >> num2;
         cout << endl;

         cout << "Enter the third number: ";
         cin >> num3;
         cout << endl;

    
        cout << fixed << showpoint;

        // Printing the numbers taken as input to the standard output.
        cout << "---------------------------------------------------------------------------------------------------------" << endl;
        cout << "\nThis program sorts any three numbers taken as input in ascending order. \n" << endl;
        cout << "The numbers you entered are: " << num1 << "," << num2 << "," << num3 << endl;
        
        // Condition checking the number of times to perform the iterations
        if (num1 > num2 && num2 > num3)
            count = 2;
        else if (num1 > num2 && num2 < num3)
            count = 1;
        else if (num1 < num2 && num2 > num3)
            count = 1;
        else
            count = 0;
        

        // Conditions evaluated to check if there is the need to perform a swap and which values to swap.
        for (i = 0; i < count; i++)
        {
            if (num1 > num2){
                num4 = &num1;
                num5 = &num2;
                num6 = *num4;
                *num4 = *num5;
                *num5 = num6;
                count += count;
                }
            else
                {
                    num1;
                    num2;
                    num3;
                }
            if (num2 > num3){
                num4 = &num2;
                num5 = &num3;
                num6 = *num4;
                *num4 = *num5;
                *num5 = num6;
                count += count;
                }
            else
                {
                    num1;
                    num2;
                    num3;
                    }

       }
        // Printing the sorted output.
        cout << "\nThe sorted form is: " << num1 << ","<< num2 <<","<< num3 <<endl;

    }

