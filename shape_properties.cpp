# include <iostream>
# include <iomanip>
# include <cmath>

using namespace std;

// Including the function prototype
double rectangle(double length, double breath);
double circle(double radius);
double cylinder(double radius, double height);

    int main(){
        //Declaration of variables
        int choice;
        double length, height, breath, radius;
 
        // Printing the choices onto the screen
        cout << "1. Rectangle" << endl; 
        cout << "2. Circle" << endl; 
        cout << "3. Cylinder" << endl; 
        cout << "\nChoose one of the shapes above to check its properties: ";
        cin >> choice;
        cout << endl;

        // A switch statement that takes a decision a decision based on the input of the user
        switch(choice){
            case 1:
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << endl;

                cout << "Enter the breath of the rectangle: ";
                cin >> breath;
                cout << endl;

                rectangle(length, breath);
                break;

            case 2:
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                cout << endl;

                circle(radius);
                break;

            case 3: 
                cout << "Enter the radius of the cylinder: ";
                cin >> radius;
                cout << endl;

                cout << "Enter the height of the cylinder: ";
                cin >> height;
                cout << endl;

                cylinder(radius, height);
                break;

            default:
                cout << "Please choose from on of the options given" << endl;
                return 1;
        }
        return 0;
    }

// Function definitions for the various shapes

double rectangle(double length, double breath){
    double area, perimeter;
    area = length * breath;
    perimeter = 2*length + 2*breath;

    cout << fixed << showpoint;
    cout << "The area of the rectangle, A = " << area << endl;
    cout << "The perimeter of the rectangle, P = " << perimeter << endl;
    return area, perimeter;
}

double circle(double radius){
    double area, circumference;
    const double PI = 3.142;
    area = PI*pow(radius,2.0);
    circumference = 2*PI*radius;

    cout << fixed << showpoint;
    cout << "The area of the circle, A = " << area << endl;
    cout << "The circumference of the circle, C = " << circumference << endl;    
    return area, circumference;
}

double cylinder(double radius, double height){
    double volume, tsa;
    const double PI = 3.142;
    volume = PI*pow(radius,2.0)*height;
    tsa = 2*PI*radius*height + 2*PI*pow(radius,2.0);

    cout << fixed << showpoint;
    cout << "The volume of the cylinder, V = " << volume << endl;
    cout << "The total surface area of the cylinder, TSA = " << tsa << endl;    
    return volume, tsa;
}