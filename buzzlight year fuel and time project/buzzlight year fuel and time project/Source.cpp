// Jared Hatfield
// 05/25/2023
// CIS 1111
// Buzz lightyear project

#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;

int main() {
	double milesPerGallon = 2655.67;
	double milesPerMin = 33865.65;
	double gallonsPerMin = 12.75;
	double distanceTraveled=1;
	double travelTimeForBuzz;
	double amountOfFuelUsed;
	

	// this a change to show what a commit to will look like...


	cout << "Enter the amount of miles Buzz Lightyear will travel on his 2nd trip: ";
	cin >> distanceTraveled;
	travelTimeForBuzz = distanceTraveled / milesPerMin;
	amountOfFuelUsed = travelTimeForBuzz * gallonsPerMin;

	cout << fixed << setprecision(2);
	cout << "\nBuzz Lightyear can travel " << distanceTraveled << " miles per minute.\n For Buzz Lightyear to complete his 2nd trip, his travel time would be: " << travelTimeForBuzz << " minutes and he would burn " << amountOfFuelUsed << " gallons of fuel.\n\n";
	
	//Buzz Lightyear's 3rd trip
	cout << "Enter the amount of miles Buzz Lightyear will travel on his 3rd trip: ";
	
	cin >> distanceTraveled;
	

	travelTimeForBuzz = distanceTraveled / milesPerMin;
	amountOfFuelUsed = travelTimeForBuzz * gallonsPerMin;

	cout << fixed << setprecision(2);
	cout << "Buzz Lightyear can travel " << distanceTraveled << " miles per minute.\n For Buzz Lightyear to complete his 3rd trip, his travel time would be: " << travelTimeForBuzz << " minutes and he would burn " << amountOfFuelUsed << " gallons of fuel.\n\n";



	return 0;
}
