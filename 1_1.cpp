/*
1. WAP to get and display 5 Students information using
encapsulation by including below mentioned
attributes:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_email
- stu_city
- stu_college
Output:
Enter ID : 101
Enter Name : Kunal
Enter Age : 18
Enter Course : BCA
Enter Email : kunalgangani@gmail.com
Enter City : Surat
Enter College Name : SDJ
Enter ID : 102
Enter Name : Vishva
Enter Age : 18
Enter Course : BBA
Enter Email : vpatel009@gmail.com
Enter City : Vadodra
Enter College Name : MSU
Enter ID : 103
Enter Name : Raj
Enter Age : 16
Enter Course : BCOM
Enter Email : rajgupta@gmail.com
Enter City : Pune
Enter College Name : PPS
Enter ID : 104
Enter Name : Tia
Enter Age : 19
Enter Course : BCOM
Enter Email : tia009@gmail.com
Enter City : Gandhinagar
Enter College Name : GTU
Enter ID : 105
Enter Name : Tanishq
Enter Age : 19
Enter Course : BSC
Enter Email : tanishq@gmail.com
Enter City : Kolkata
Enter College Name : TSU
User ID is : 101
User Name is : Kunal
User Age is : 18
User Course is : BCA
User Email is : kunalgangani@gmail.com
User City is : Surat
User College Name is : SDJ
User ID is : 102
User Name is : Vishva
User Age is : 18
User Course is : BBA
User Email is : vpatel009@gmail.com
User City is : Vadodra
User College Name is : MSU
User ID is : 103
User Name is : Raj
User Age is : 16
User Course is : BCOM
User Email is : rajgupta@gmail.com
User City is : Pune
User College Name is : PPS
User ID is : 104
User Name is : Tia
User Age is : 19
User Course is : BCOM
User Email is : tia009@gmail.com
User City is : Gandhinagar
User College Name is : GTU
User ID is : 105
User Name is : Tanishq
User Age is : 19
User Course is : BSC
User Email is : tanishq@gmail.com
User City is : Kolkata
User College Name is : TSU
*/
#include<iostream>
using namespace std;
class Stud{
	int id;
	char name[20];
	int age;
	char course[10];
	char email[35];
	char city[15];
	char clg[15];
	public:
		void setData(){
			cout<<"Enter ID : ";
			cin>>id;
			cout<<"Enter Name : ";
			cin>>name;
			cout<<"Enter Age : ";
			cin>>age;
			cout<<"Enter Course : ";
			cin>>course;
			cout<<"Enter Email : ";
			cin>>email;
			cout<<"Enter City : ";
			cin>>city;
			cout<<"Enter College Name : ";
			cin>>clg;
		}
		void getData(){
			cout<<"User ID is : "<<id<<endl;
			cout<<"User Name is : "<<name<<endl;
			cout<<"User Age is : "<<age<<endl;
			cout<<"User Course is : "<<course<<endl;
			cout<<"User Email is : "<<email<<endl;
			cout<<"User City is : "<<city<<endl;
			cout<<"User College Name is : "<<clg<<endl;
		}
};
int main(){
	Stud s[5];
	int i;
	for(i=1;i<=5;i++){
		s[i].setData();
	}
	for(i=1;i<=5;i++){
		s[i].getData();
	}
	return 0;
}
