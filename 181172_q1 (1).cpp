// 181172_q1.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include "student.h"
#include "course.h"




int main()
{

	 student *S1=new student("anum","Anum", "11-1351");
     student *S2=new student("sara", "Sara", "12-6462");
     student *S3=new student("sana","Sana","11-4531");
     student *S4=new student("zara","Zara","12-4342");
     student *S5=new student("hira","Hira","11-5940");


	 course* c1=new course("OOP", "CS102");
	 course* c2=new course("PF","CS101");
     course* c3=new course("AI", "CS365");

	 S1->addcourse(c1);
	 S1->addcourse(c1);
	 S1->addcourse(c2);
	 S1->addcourse(c3);
	 S2->addcourse(c2);
	 S3->addcourse(c2);
	 S4->addcourse(c2);
	 S5->addcourse(c2);
	 
	 cout<<*S1;
	 cout<<*c1;
	 cout<<*c2;

	 c1->task2_addstudent(S5);
	 c1->task2_addstudent(S5);
	 c3->task2_addstudent(S5);
	return 0;
}
