#include <iostream> //Header file
using namespace std;
class person //Declaration of Calss
{
    float force; // Declaring an data type of float for calculating force
    float length;// Declaring an data type of float for calculating length
    float ei;// Declaring an data type of float for calculating Flexural rigidity
    float deflection;// Declaring an data type of float for calculating the final deflection
    float numerator;// Declaring an data type of float for calculating the numerator of the formula
    float denominator;// Declaring an data type of float for calculating denominator of the formula

    public :
        void getdata(void); // Data type of C++ for collecting or getting data from user
        void display(void);// Data type of C++ for printing the final output
};
void person :: getdata(void)
{
cout << "Enter force";//Asking user to enter the Force value (in mm)
cin >> force;//Asking user to enter the Force value (in mm)
cout << "Enter length";//Asking user to enter the length value (in mm)
cin >> length;//Asking user to enter the length (in mm)
cout << "Enter ei (flexural rigidity)";//Asking user to enter the value of flexural rigidity (in mm)
cin >> ei;//Asking user to enter the Flexural rigidity (in mm)
numerator = force*(length*length*length);//Calculating the Numerator for the formula of DEFLECTION
denominator = 3*ei;//Calculating the denominator for the formula of DEFLECTION
deflection = numerator / denominator;//Formula for deflection for CANTILEVER BEAM LOAD acting at its FREE END 
}
void person :: display(void)
{
    cout << "\nForce is "<<force;//Value of force is displayed which was given by the user 
    cout << "\n Length is "<<length;//Value of Length is displayed which was given by the user 
    cout << "\n Flexural rigidity is "<<ei;//Value of flexural rigidity is displayed which was given by the user 
    cout << "\n deflection = "<<deflection;//Value of deflection is displayed which is calculated by the formula
    
}
int main()//Main fuction for completing the program
{
    person p;
    p.getdata();//Calling the above functions 
    p.display();//Calling the above functions

    return 0;
}