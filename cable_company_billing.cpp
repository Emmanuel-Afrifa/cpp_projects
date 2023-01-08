# include <iostream>
# include <string>
# include <iomanip>

using namespace std;

const double bill_processing_fee_r = 4.50, basic_service_fee_r = 20.50, premium_channels_r = 7.50;
const double bill_processing_fee_b = 15.00, basic_service_fee_b = 75.00, premium_channels_b = 50.00, connection_cost_b = 5.00;

    int main(){
        int cust_acc_no;
        char cust_type;
        int no_of_premium_cha;
        int no_of_basic_services;
        double amount_due;

        cout << "...........................................................................................\n" << endl;
        cout << "This program calculates the billings from the cable company. " << endl;
        cout << "Please enter your account number: ";
        cin >> cust_acc_no;
        cout  << endl;

        cout << "Please enter your customer type: ";
        cin >> cust_type;
        cout << endl;

        cout << fixed << showpoint << setprecision(2);

        switch (cust_type)
        {
        case 'r':
        case 'R':    
            cout << "Please enter the number premium channels: ";
            cin >> no_of_premium_cha; 
            cout  << endl;
            amount_due = bill_processing_fee_r + basic_service_fee_r + (premium_channels_r * no_of_premium_cha);

            cout << "Customer's account number: " << cust_acc_no << endl;
            cout << "Billing amount: " << amount_due << endl;
            break;        

        case 'b':
        case 'B':
            cout << "Please enter the number of basic connections: ";
            cin >> no_of_basic_services;
            cout  << endl;

            cout << "Please enter the number of premium channels: ";
            cin >> no_of_premium_cha;
            cout << endl;
        
            if (no_of_basic_services <= 10)
                amount_due = bill_processing_fee_b + basic_service_fee_b + (no_of_premium_cha * premium_channels_b);
            else if (no_of_basic_services > 10)
                amount_due = bill_processing_fee_b + basic_service_fee_b + (no_of_premium_cha * premium_channels_b) 
                + ((no_of_basic_services - 10) * connection_cost_b);


            
            cout <<  "Customer's account number: " <<  cust_acc_no << endl;
            cout << "Billing amount: "<< amount_due << endl;
            break;

            default:
                cout << "You entered an invalid customer type!!!" << endl;
        }
        return 0;
    }

