#include<iostream>
using namespace std;
class student
{
public:
	char *studentName;
	char grade;
	int maths;
	int english;
	int science;
};
class CollegeCourse
{
	student s1;
	float avg;
public:
	void setData(const char *sname, char g, int math, int eng, int sci)
	{
		int len = strlen(sname);
		s1.studentName = (char *)malloc(sizeof(char)*(len + 1));
		strcpy(s1.studentName, sname);
		s1.grade = g;
		s1.maths = math;
		s1.english = eng;
		s1.science = sci;
		cout << s1.studentName << " " << s1.grade<< " "<<s1.maths<<" "<<s1.english<<" "<<s1.science<<endl;
	}
	void ComputeAvg()
	{
		
		avg = (s1.maths + s1.science + s1.english) / 3;
		cout << avg<<endl;
	}
	void ComputeGrade()
	{
		if (avg >= 60)
			s1.grade = 'A';
		else if (avg >= 50 && avg < 60)
			s1.grade = 'B';
		else
			s1.grade = 'C';
		cout << "new grade is " << s1.grade;
	}
};
void main()
{
	CollegeCourse c1;
	c1.setData("hima", 'A', 30, 30, 30);
	c1.ComputeAvg();
	c1.ComputeGrade();
}