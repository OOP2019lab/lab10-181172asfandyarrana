
#include <string>
using namespace std;

#pragma once
class student;
class course
{
    string course_name;
	string course_number;
	student *s[4];
	void addstudent(student*);
	
public:
	friend class student;
	course();
	course(string , string);
	void task2_addstudent(student*);
	void dropstudent(student* st)
	{
		bool flag= true;
		for(int i=0;i<4;i++)
		{
			if(this->s[i]==st)
			{
				this->s[i]=nullptr;
				
				flag=false;
			}

		}
		if(flag)
		{
			cout<<"student not registered"<<endl;
		}

	}
	friend ostream& operator <<(ostream & out,const course& c1);
	friend ostream& operator <<(ostream &out, const student& s1);
	~course(void);

};

