#include <iostream>

using namespace std;

int main() {

	//prompt users for their name
	string name;
	cout << "What is your name: ";
	cin >> name;

	//promt user for their surname
	string surname;
	cout << "What is your surname: ";
	cin >> surname;

	//declaring the items and prices
	string menuItems[] = { "Coffee", "Sandwhich", "Salad", "Juice", "Muffin", "Pizza", "Soup", "Burger" };
	double prices[] = { 15.00, 30.00, 25.00, 10.00, 20.00, 35.00, 18.00, 40.00 };
	int numItems = 8;
	double discountRate = 0.05;

	//displaying the menu
	cout << "\n" << "Meun:" << "\n";

	for (int i = 0; i < numItems; i++) {
		cout << i + 1 << ". " << menuItems[i] << " - R" << prices[i] << "\n";
	}

	// prompt the user to select how many items they want to order
	int items;
	cout << "\n" << "How many items would you like to oder (1-8): ";
	cin >> items;

	if (items < 1 || items > numItems) {
		cout << "Please enter a number from 1 to 8";
		return 0;
	}

	//total bill
	double totalBill = 0;
	double discount = 0;

	for (int i = 0; i < items; i++) {
		int select;
		cout << "Select items " << i + 1 << "(1-8):";
		cin >> select;

		if (select < 1 || select > numItems) {
			cout << "Invalid, please enter the numbers from 1-8";
			return 0;
		}

		totalBill += prices[select - 1];

	}

	if (totalBill >= 200) {
		discount = totalBill * discountRate;
		totalBill -= discount;
		cout << "\n" << "A 5% discount has been applied." << "\n";
	}
	else {
		cout << "\n" << "No discount applied." << "\n";
	}

	// Display the final total
	cout << "Total Bill: R" << totalBill << "\n";

	// Thank the user
	cout << "\n" << "Thank you for shopping, " << name << " " << surname << "\n";


	return 0;
}