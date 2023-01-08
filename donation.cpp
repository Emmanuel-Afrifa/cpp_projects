# include <iostream>
# include <string>
# include <iomanip>

using namespace std;

    int main(){
        string movie_name;
        double price_adult_ticket;
        double price_child_ticket;
        int no_of_adult_ticket;
        int no_of_child_ticket;
        double gross_amount;
        double percentage;
        int no_of_tickets_sold;
        double netSale;
        double amountDonated;


        cout << "Enter the name of the movie: " << endl;
        getline(cin, movie_name);
        cout << "Enter the price of adult ticket: " << endl;
        cin >> price_adult_ticket;
        cout << "Enter the number od adult tickets sold: " << endl;
        cin >> no_of_adult_ticket;
        cout << "Enter the price of child ticket: " << endl;
        cin >> price_child_ticket;
        cout << "Enter the number od child tickets sold: " << endl;
        cin >> no_of_child_ticket;
        cout << "Enter the percentage of the gross amount to be given as donation in decimals: " << endl;
        cin >> percentage;

        // Calculating the total number of tickets sold
        no_of_tickets_sold = no_of_adult_ticket + no_of_child_ticket;

        // Calculating the total revenue generated
        gross_amount = (no_of_adult_ticket * price_adult_ticket) + (no_of_child_ticket * price_child_ticket);
     
        // Calculating the amount to be donated
        amountDonated = gross_amount * percentage;
        
        // Calculting the amount left after the donation.
        netSale = gross_amount - amountDonated;


        // Printing the results onto screen

        cout << fixed << showpoint << setprecision(2);
        cout << "\n_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\n" << endl; 
        cout << setfill('.') << left << setw(35) << "Movie name: " << right << " " << movie_name << endl;
        cout << setfill('.') << left << setw(35) << "Number of tickets sold: "
            << setfill(' ') << right << setw(10) << no_of_tickets_sold << endl;
        cout << setfill('.') << left << setw(35) << "Gross amount: " 
            << setfill(' ') << right << " $" << setw(8) << gross_amount << endl;
        cout << setfill('.') << left << setw(35) << "Percentage of gross amount donated: "
            << setfill(' ') << right << setw(9) << percentage*100 << "%" << endl;
        cout << setfill('.') << left << setw(35) << "Amount Donated: " 
            << setfill(' ') << right << " $" << setw(8) << amountDonated << endl;
        cout << setfill('.') << left << setw(35) << "Net Sale: "
            << setfill(' ') << right << " $" << setw(8) << netSale << endl;

        return 0;
    }