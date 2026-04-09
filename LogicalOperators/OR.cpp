/*################## SUMMARY ##################
# Logical Operators: OR ( || )

    Truth Table for OR:

    X | Y | OUTPUT
    ----------------
    0 | 0 | 0
    0 | 1 | 1
    1 | 0 | 1
    1 | 1 | 1

The purpose of this short progam is to demonstrate the logical OR operator in a real world situation. 

The program will check if the customer has a valid coupon, or if their cart meets a certain threshold price, and apply a 15% discount if either are true.
*/

#include <iostream> 
#include <string> 
#include <cmath>

using namespace std;

int main(){

    char choice;
    double cartSum = 0;

    string vCoupon;
    bool coupon;

    bool shop = true;

    cout << "Do you have a valid Coupon? Type 'Yes' or 'No': " << endl;
        cin >> vCoupon;
        if(vCoupon == "Yes" || vCoupon == "yes"){
            coupon = true;
        } else if (vCoupon == "No" || vCoupon == "no"){
            coupon = false; 
        } else {
            cout << "Invalid input." << endl;
            return 0;
        }

    while(shop){
        cout << "What would you like to purchase? : " << endl;
            cout << "A.) TV - $800" << endl;
            cout << "B.) Radio - $70" << endl;
            cout << "C.) Dog Toy - $25" << endl;
            cout << "D.) Nuclear Bomb - $10,000,000" << endl;
            cout << "E.) Rose - $5" << endl;
            cout << "F.) Plant. - $100,000,000" << endl;
            cout << "G.) Checkout " << endl;

        cin >> choice;
            cin.ignore();

        switch(choice){
            case 'A': 
                cartSum += 800;
                break;
            case 'B':
                cartSum += 70;
                break;
            case 'C': 
                cartSum += 25;
                break;
            case 'D': 
                cartSum += 10000000;
                break;
            case 'E': 
                cartSum += 5;
                break;
            case 'F': 
                cartSum += 100000000;
                break;
            case 'G':
                shop = false;
                break;
            default:
                break;

        }
    }

    if(cartSum >= 500 || coupon == true){
        cartSum -= cartSum * .15;

        cout << "Discount applied. Your total is: " << cartSum << endl;
        cout << "Thank you for shopping with us today!" << endl;
    } else {
        cout << "You do not qualify for the coupon, because you neither had a coupon, nor did you meet the threshold for the discount." << endl;
        cout << "Logical OR require one or the other, or both to be true." << endl;
    }

}