#include<iostream>

using namespace std;

struct TIME{
	int hours;
	int minutes;
	int seconds;
};

int main()
{
	
	TIME time;
	char a, b;

	cout << "\n\nEnter Time (Hours:Minutes:Seconds) --> ";
	cin >> time.hours;
	cin >> a;
	cin >> time.minutes;
	cin >> b;
	cin >> time.seconds;
	
	long Total_Seconds = time.hours * 3600 + time.minutes * 60 + time.seconds;

	cout << "\n\nTotal Seconds: " << Total_Seconds;

	cout << endl << endl;
	system("pause");
	return 0;
}