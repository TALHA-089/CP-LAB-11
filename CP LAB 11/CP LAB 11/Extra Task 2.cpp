#include<iostream>
#include<string>

using namespace std;

struct customer
{
	string name;
	string address;
	string phone_number;
};


int main()
{
	customer Customer;

	cout << "\n\nEnter Customer's Name: ";
	getline(cin, Customer.name);
	cout << "\n\nEnter Customer's Address: ";
	getline(cin, Customer.address);
	cout << "\n\nEnter Customer's Phone Number: ";
	getline(cin, Customer.phone_number);
	system("cls");

	cout << "\n\n-------------------Customer's Information--------------------\n\n";
	cout << "Customer's Name: " << Customer.name;
	cout << "\nCustomer's Address: " << Customer.address;
	cout << "\nCustomer's Phone Number: " << Customer.phone_number;

	cout << endl << endl;
	system("pause");
	return 0;
}