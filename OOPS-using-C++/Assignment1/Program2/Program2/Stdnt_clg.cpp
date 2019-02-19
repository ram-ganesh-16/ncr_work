#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Student
{
public:
	int m1, m2, m3;
	char *name;
	char grade;
	Student()
	{

	}
	/*Student(char *nam,int ms1, int ms2, int ms3)
	{
		name = (char *)malloc(strlen(nam));
		strcpy(name, nam);
		m1 = ms1;
		m2 = ms2;
		m3 = ms3;
	}*/
	void display()
	{
		cout << "\n\n Student name is :"<<name;
		cout <<"\n Grade:"<<grade;
		cout << "\n Marks:"<<m1;
		cout <<" "<< m2;
		cout << " "<<m3;
	}
};
class CollegeCourse
{
public:
	
	Student set_data(char *name, char grade, int m1, int m2, int m3)
	{
		Student s;
		s.name = (char *)malloc(strlen(name));
		strcpy(s.name, name);
		s.grade = grade;
		s.m1 = m1;
		s.m2 = m2;
		s.m3 = m3;
		return s;
	}
	int average(int m1,int m2,int m3)
	{
		return (m1 + m2 + m3) / 3;
	}
	char compute_grade(int avg)
	{
		if (avg > 60)
		{
			cout << "First Class";
			return 'A';
	    }
		else if (50 < avg && 60 > avg)
		{
			cout << "Second Class";
			return 'B';
		}
		else if (40 < avg && 50 > avg)
		{
			cout << "Third Class";
			return 'C';
		}

		else
		{
			cout << "FAIL";
			return 'F';
		}
	}
};
int main()
{
	char name[10];
	cout << "enter student name ";
	cin >> name;
	int m1, m2, m3;
	cout << "Enter marks ";
	cin >> m1;
	cin >> m2;
	cin >> m3;
	CollegeCourse c;
	int avg = c.average(m1,m2,m3);
	char grade=c.compute_grade(avg);
	Student s = c.set_data(name, grade,m1,m2,m3);
	s.display();
	getchar();
	getchar();
	return 0;
}