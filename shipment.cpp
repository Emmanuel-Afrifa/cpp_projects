# include <iostream>
# include <iomanip>

using namespace std;

    int main(){
        // Declaration of variables
        int total_cookies, cookies_in_box, boxes, containers, no_boxes, leftover_box = 0, leftover_cookies = 0;

        // Taking user inputs
        cout << "Enter the total number of cookies: ";
        cin >> total_cookies;
        cout << endl;

        cout << "Enter the number of cookies in a box: ";
        cin >> cookies_in_box;
        cout << endl;

        cout << "Enter the number of boxes in a container: ";
        cin >> boxes;
        cout << endl;


        // Maximum number of cookies in a box.
        if (cookies_in_box > 24){
            cout << "Sorry! The maximum number of cookies that can fit in a box is 24" << endl;
            return 1;
        }
    
        // Maximum number of boxes in a container
        if (boxes > 75){
            cout << "Sorry! The maximum number of boxes that can fit in a container is 75" << endl;
            return 1;
        }

        // Calculating the total number of boxes to be shipped
       if (total_cookies%cookies_in_box == 0)
            no_boxes = total_cookies/cookies_in_box;
        else if (total_cookies%cookies_in_box != 0){
            no_boxes = total_cookies/cookies_in_box + 1;
            // Calculaing the leftover cookies to be discarded
            leftover_cookies = total_cookies%cookies_in_box;
        }
       
       
        // Calculating the number of containers needed for the shipment
        if (no_boxes > boxes){
            if (no_boxes % boxes == 0){
                containers = no_boxes/boxes;
            }
            else if (no_boxes % boxes != 0){
                containers = no_boxes/boxes + 1;
                // Calculaing the leftover boxes to be discard
                leftover_box = no_boxes % boxes;
            }
        }
        else if (no_boxes < boxes){
            containers = 1;
            // Calculaing the leftover boxes to be discard
            leftover_box = no_boxes % boxes;
        }

        
        // Printing the number of boxes and containers needed for the shipment
        cout << "The total number of boxes = " << no_boxes << endl;
        cout << "The number of containers needed to ship the cookies = " << containers << endl;

        // Printing the number of left over cookies
        if (leftover_cookies > 0){
            cout << "The last box is discarded. It contains " << leftover_cookies << " cookies instead of "
                << cookies_in_box << " cookies." << endl; 
        }

         // Printing the number of left over boxes
        if (leftover_box > 0){
            cout << "The last container is discard. It contains " << leftover_box << " boxes instead of "
                << boxes << " boxes." << endl;
            // Printing the total number of cookies discarded
            cout << "The total number of cookies discarded = " << leftover_box*cookies_in_box + leftover_cookies << endl;
        }
    }
