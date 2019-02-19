#include<iostream>
#include<string>
using namespace std;
class Student
{
	string name;
	int rno;
	int m1, m2, m3;
	int total_marks;
	char grade;
public:
	static int stdnt_count;
	Student()
	{

	}
	friend istream & operator>>(istream &in, Student &s);
	friend ostream & operator<<(ostream &out, Student &s);
	friend void generate_results(Student *s, int n);
};
int Student::stdnt_count = 1;
istream & operator>>(istream &in, Student &s)
{
	cout << "\n Enter student name : ";
	in >> s.name;
	s.rno = Student::stdnt_count;
	Student::stdnt_count = Student::stdnt_count + 1;
	cout << "\n Enter three subject marks : " << endl;
	in >> s.m1;
	in >> s.m2;
	in >> s.m3;
	return in;
}
ostream & operator<<(ostream &out, Student &s)
{
	//out << "student name is : "<<s.name<<endl;
	
	/*out << "Marks are : " << s.m1 << " " << s.m2 << " " << s.m3 << endl;
	out << "Total Marks are : " << s.total_marks << endl;
	out << "Grade is : " << s.grade << endl;*/
	out << s.rno << "\t \t" << s.name << " \t \t " << s.m1 << "\t \t" << s.m2 << "\t \t" << s.m3 << "\t \t" << s.total_marks << "\t \t" << s.grade << endl;
	return out;
}
void generate_results(Student *s, int n)
{
	int i = 0,avg;
	for (i = 0; i < n; i++)
	{
		s[i].total_marks = s[i].m1 + s[i].m2 + s[i].m3;
		avg = s[i].total_marks / 3;
		if (avg > 60)
		{
			s[i].grade='A';
		}
		else if (50 < avg && 60 > avg)
		{
			s[i].grade = 'B';
		}
		else if (40 < avg && 50 > avg)
		{
			s[i].grade = 'C';
		}

		else
		{
			//cout << "FAIL";
			s[i].grade = 'F';
		}
	}
}
int main()
{
	int n,i;
	cout << "\n Enter number of students : ";
	cin >> n;
	Student *s=new Student[n];
	// *s = (Student *)malloc(sizeof(Student)*n);
	for (i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	generate_results(s, n);
	cout << "Roll number \t Name \t \t Marks1 \t Marks2 \t Marks3 \t Total Marks \t Grade" << endl;
	for (i = 0; i < n; i++)
	{
		cout << s[i];
	}
	system("pause");
}