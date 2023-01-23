# include <iostream>
# include <iomanip>
# include <cmath>

using namespace std;

    int main(){
        // Declarattion of variables
        double a,b,c,dis,ans1,ans2;

        // Taking user inputs
        cout << "Enter the coefficient of x^2: " ;
        cin >> a;
        cout <<endl;
        cout << "Enter the coefficient of x: ";
        cin >> b;
        cout << endl;
        cout << "Enter the value of the constant term: ";
        cin >> c;

        cout << fixed << showpoint;

        // Calulating the discriminant
        dis = pow(b,2.0) - (4*a*c);
        cout << "The discriminant = " << dis << endl;

        // Calculating and is playing the roots if they are not complex
        if (dis < 0.0){
            cout << "The roots of the equation are complex." << endl;
        }
        else if (dis == 0.0){
            cout << "The equation has repeated roots." << endl;
            ans1 = (-b)/(2*a);
            cout << "The roots of the equation are " << ans1 << " and " << ans1 << endl;
        }
        else if (dis > 0.0){
            cout << "The equation has real distinct roots." << endl;
            ans1 = (-b + sqrt(dis))/(2*a);
            ans2 = (-b - sqrt(dis))/(2*a);
            cout << "The roots of the equation are " << ans2 << " and " << ans1 << endl;
        }

        return 0;
    }