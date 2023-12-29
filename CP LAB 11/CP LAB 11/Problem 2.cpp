#include<iostream>
using namespace std;

struct Phone
{
	int area_code;
	int exchange;
	int number;
};

int main()
{
	Phone My_number;
	Phone Your_number;

	My_number.area_code = 456;
	My_number.exchange = 746;
	My_number.number = 8099;

	cout << "\n\nEnter your area code,exchange, and number: ";
	cin >> Your_number.area_code;
	cin >> Your_number.exchange;
	cin >> Your_number.number;

	cout << "\n\nMy Number is (" << My_number.area_code << ") " << My_number.exchange << "-" << My_number.number;
	cout << "\n\nYour Number is (" << Your_number.area_code << ") " << Your_number.exchange << "-" << Your_number.number;



	cout << endl << endl;
	system("pause");
	return 0;
}