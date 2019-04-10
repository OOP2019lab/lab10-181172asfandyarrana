#include "stdafx.h"
#include "course.h"
#include "student.h"
#include <iostream>

course::course()
{
	course_name="";
	course_number="";
	
}

course::course(string name, string number)
{
	course_name=name;
	course_number=number;
	for (int i=0; i<4;i++)
	{
		s[i]=nullptr;
	}

}
void course::addstudent(student *ne)
{
	bool flag=false;
	for (int i=0; i<4;i++)
	{
		if(s[i]==nullptr)
		{
			s[i]=ne;
			
			flag=true;
			break;
		}
	}
	if(flag==false)
		cout<<"no seats available"<<endl;
}
ostream& operator <<(ostream & out,const course& c1)
	{
		out<<c1.course_name;
		out<<endl;
		out<<c1.course_number;
		out<<endl;

		for(int i=0;i<4;i++)
		{
			out << c1.s[i]->name;	
			out<<endl;
		}
		return out;

	}
void course::task2_addstudent(student *ne)
{
	bool flag=true;
	for (int i=0; i<4 &&flag;i++)
	{
		if(s[i]==nullptr)
		{
			s[i]=ne;
			ne->task2_addcourse(this);
			flag=false;
			break;
		}
		else if(s[i]==ne)
		{
			flag=false;
			cout<<"student already takes class"<<endl;
		}
	}
	if(flag)
		cout<<"no seats available"<<endl;
}


course::~course(void)
{
}
