#include "stdafx.h"
#include "student.h"
#include "course.h"
#include<iostream>

student::student()
{
	username="";
	name="";
	roll_number="";
}
student::student(string n, string uname, string num)
{
	username=uname;
	name=n;
	roll_number=num;
	for (int i=0; i<2;i++)
	{
		c[i]=nullptr;
	}
}
void student::addcourse(course* n)
{
	bool flag=true;
	
	for (int i=0; i<2 && flag;i++)
	{
		if(c[i]==nullptr)
		{	
			flag=false;
              c[i]=n;
			  n->addstudent(this);
			  break;
			  
			  
	   }
		else if(c[i]==n)
		 {
			 flag=false;
			 cout<<"already takes this course"<<endl;
		 }
	}
	
	 if(flag)
		cout<<"already takes two courses"<<endl;
}
ostream& operator <<(ostream & out,const student& s1)
	{
		out<<s1.username;
		out<<endl;
		out<<s1.name;
		out<<endl;
		out<<s1.roll_number;
		out<<endl;

		for(int i=0;i<2;i++)
		{
			out << s1.c[i]->course_name;
			out<<endl;
		}

		return out;
	}
void student::task2_addcourse(course* n)
{
	bool flag=true;
	
	for (int i=0; i<2 && flag;i++)
	{
		if(c[i]==nullptr)
		{	
			flag=false;
              c[i]=n;
			  break;
			  
			  
	   }
		else if(c[i]==n)
		 {
			 flag=false;
			 cout<<"already takes this course"<<endl;
		 }
	}
	
	 if(flag)
		cout<<"already takes two courses"<<endl;
}
student::~student(void)
{
}
