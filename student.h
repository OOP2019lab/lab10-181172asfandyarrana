#pragma once

#include <string>
using namespace std;

class course;
class student
{
	string username;
	string name;
	string roll_number;
	
	void task2_addcourse(course*);
	course *c[2];
public:
	friend class course;
	student();
	void dropcourse(course* cr)
	{
		bool flag= true;
		for(int i=0;i<2;i++)
		{
			if(this->c[i]==cr)
			{
				this->c[i]=nullptr;
				cr->dropstudent(this);
				flag=false;
			}

		}
		if(flag)
		{
			cout<<"student not registered"<<endl;
		}

	}
	student(string, string, string);
	void addcourse( course*);
	friend ostream& operator <<(ostream &out, const student& s1);
	friend ostream& operator <<(ostream & out,const course& c1);
	~student(void);
};

