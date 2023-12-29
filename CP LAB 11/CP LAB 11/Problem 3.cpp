#include<iostream>
#include<string>
using namespace std;

struct Students
{
	string Name;
	string en_no;
	string subjects[5];
	int cr_hrs[5];
	float q_marks[5];
	float a_marks[5];
	float m_marks[5];
	float f_marks[5];
	char Grade[5];
	float GPA;
	int Total_Marks[5];
	float Grade_point[5];
	float Total_credit;
	float total_grade_points;
};

int main()
{
	Students st_record;

	cout << "\n\nEnter Name: ";
	getline(cin ,st_record.Name);
	cout << "\n\nEnter Enrollment: ";
	getline(cin ,st_record.en_no);
	cin.ignore();
	
	for (int i = 0; i < 5 ; i++)
	{
		cout << "\nEnter Subject " << i + 1 << "'s name: ";
		getline(cin ,st_record.subjects[i]);

	}

	
	for (int i = 0; i < 5; i++)
	{
			cout << "\nEnter " << st_record.subjects[i] << "'s Credit hours: ";
			cin >> st_record.cr_hrs[i];
			cout << "\nEnter " << st_record.subjects[i] << "'s Quiz marks: ";
			cin >> st_record.q_marks[i];
			cout << "\nEnter " << st_record.subjects[i] << "'s Assignment marks: ";
			cin >> st_record.a_marks[i];
			cout << "\nEnter " << st_record.subjects[i] << "'s Mids marks: ";
			cin >> st_record.m_marks[i];
			cout << "\nEnter " << st_record.subjects[i] << "'s Final marks: ";
			cin >> st_record.f_marks[i];

			st_record.Total_Marks[i] = st_record.q_marks[i] + st_record.a_marks[i] + st_record.m_marks[i] + st_record.f_marks[i];

			if (st_record.Total_Marks[i] <= 100 && st_record.Total_Marks[i] >= 85)
			{
				st_record.Grade[i] = 'A';
			}
			else if (st_record.Total_Marks[i] < 85 && st_record.Total_Marks[i] >= 70)
			{
				st_record.Grade[i] = 'B';
			}
			else if (st_record.Total_Marks[i] < 70 && st_record.Total_Marks[i]>60)
			{
				st_record.Grade[i] = 'C';
			}
			else if (st_record.Total_Marks[i] < 60 && st_record.Total_Marks[i]>50)
			{
				st_record.Grade[i] = 'D';
			}
			else
			{
				st_record.Grade[i] = 'F';
			}
			
			switch (st_record.Grade[i])
			{
			case 'A':
				st_record.Grade_point[i] = 4.0 * st_record.cr_hrs[i];
				break;
			case 'B':
				st_record.Grade_point[i] = 3.5 * st_record.cr_hrs[i];
				break;
			case 'C':
				st_record.Grade_point[i] = 3.0 * st_record.cr_hrs[i];
				break;
			case 'D':
				st_record.Grade_point[i] = 2.0 * st_record.cr_hrs[i];
				break;
			case 'F':
				st_record.Grade_point[i] = 1.0 * st_record.cr_hrs[i];
				break;
			}

	}
	
	st_record.Total_credit = 0;

	for (int i = 0; i < 5; i++)
	{
		st_record.Total_credit += st_record.cr_hrs[i];
	}

	st_record.total_grade_points = 0;

	for (int i = 0; i < 5; i++)
	{
		st_record.total_grade_points += st_record.Grade_point[i];
	}

	st_record.GPA = st_record.total_grade_points / st_record.Total_credit;

	cout << "\n\nName: " << st_record.Name;
	cout << "\nEnrollment: " << st_record.en_no;


	cout << "\n\n\tSubjects\tCredit Hours\tTotal Marks\tGrade\n\n";
	
	for (int i = 0; i < 5; i++)
	{
		cout <<"\t" << st_record.subjects[i] << "\t\t" << st_record.cr_hrs[i] << "\t\t" << st_record.Total_Marks[i] << "\t\t" << st_record.Grade[i];
		cout << endl << endl;
	}

	cout << "\n\nGPA = " << st_record.GPA;


	cout << endl << endl;
	system("pause");
	return 0;
}