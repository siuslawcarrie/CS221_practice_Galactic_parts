#include <iostream>

using namespace std;

//FUNCTION PROTOTYPES
int parts_produced();
int validation_integer(int min, int max);

int main() {
 //VARIABLES
 int parts_produced_week, base_credits = 200;//parts produced, guaranteed credits
 float parts_credits, total_credits, piece_rate = .09;/*variable for parts produced funtion,
 total credits & piece rate %*/

 //WELCOME MESSAGE
 cout<<"Welcome to Galactic Enterprises Employee Credits Calculator. You'll enter parts produced"
       "; the calculator will give you credits earned. Enter -1 to exit"<<endl;
 //PROGRAM
 //get parts produced
 parts_produced_week = parts_produced();
 if (parts_produced_week != -1) {
     total_credits = base_credits + (parts_produced_week * piece_rate);
     cout << "Your total credits are: " << total_credits;
 }
 else {
     exit(0);
 }
}
//FUNCTION DEFINITIONS
int parts_produced() {
    int parts_produced;
    cout << "Enter parts produced this week: " << endl;
    cin >> parts_produced;
    int min = 1, max = 99999;
    return validation_integer(min, max);
}
    int validation_integer(int min, int max) //function to validate integers
    {
        int number;
        cin >> number;
        while (!cin or (number < min) or (number > max)) {
// Explain error not entering an integer
            cout << "I'm sorry that's not a valid entry. Please enter a number between " << min << " and " << max << ": ";
// Clear input stream
            cin.clear();
// Discard previous input
            cin.ignore(123, '\n');
            cin >> number;
            cout << endl;
        }
        return number;
}
