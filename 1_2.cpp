/*
2. WAP to get and display 5 Customers
information using encapsulation by including
below mentioned attributes:
- cust_id
- cust_name
- cust_age
- cust_telecome_brand_name (like Jio, Airtel, Vi, etc.)
- cust_mobile_number
- cust_city
- cust_simcard_validity (in years)
Output:
Enter ID : 101
Enter Name : Kunal
Enter Age : 18
Enter Telecom Brand Name : Jio'
Enter Mobile Number : 8460842328
Enter City : Surat
Enter Sim Validity : 1
Enter ID : 102
Enter Name : Jai
Enter Age : 19
Enter Telecom Brand Name : Vodaphone
Enter Mobile Number : 7788994455
Enter City : Surat
Enter Sim Validity : 1
Enter ID : 103
Enter Name : Kiara
Enter Age : 17
Enter Telecom Brand Name : jio
Enter Mobile Number : 4455663322
Enter City : Kolkata
Enter Sim Validity : 1
Enter ID : 104
Enter Name : Tarun
Enter Age : 13
Enter Telecom Brand Name : jio
Enter Mobile Number : 4477885566
Enter City : Puhne
Enter Sim Validity : 1
Enter ID : 105
Enter Name : Hari
Enter Age : 16
Enter Telecom Brand Name : Airtel
Enter Mobile Number : 7788996655
Enter City : Goa
Enter Sim Validity : 1
Customer ID is : 101
Customer Name is : Kunal
Customer Age is : 18
Customer Brand  is : Jio'
Customer Mobile Number is : 8460842328
Customer City is : Surat
Customer Simcard Validity is : 1
Customer ID is : 102
Customer Name is : Jai
Customer Age is : 19
Customer Brand  is : Vodaphone
Customer Mobile Number is : 7788994455
Customer City is : Surat
Customer Simcard Validity is : 1
Customer ID is : 103
Customer Name is : Kiara
Customer Age is : 17
Customer Brand  is : jio
Customer Mobile Number is : 4455663322
Customer City is : Kolkata
Customer Simcard Validity is : 1
Customer ID is : 104
Customer Name is : Tarun
Customer Age is : 13
Customer Brand  is : jio
Customer Mobile Number is : 4477885566
Customer City is : Puhne
Customer Simcard Validity is : 1
Customer ID is : 105
Customer Name is : ?
Customer Age is : 16
Customer Brand  is : Airtel
Customer Mobile Number is : 7788996655
Customer City is : Goa
Customer Simcard Validity is : 1
*/
#include<iostream>
using namespace std;
class Cust{
	int id;
	char name[20];
	int age;
	char brand[15];
	long long int mobile;
	char city[25];
	int validity;
	public:
		void setData(){
			cout<<"Enter ID : ";
			cin>>id;
			cout<<"Enter Name : ";
			cin>>name;
			cout<<"Enter Age : ";
			cin>>age;
			cout<<"Enter Telecom Brand Name : ";
			cin>>brand;
			cout<<"Enter Mobile Number : ";
			cin>>mobile;
			cout<<"Enter City : ";
			cin>>city;
			cout<<"Enter Sim Validity : ";
			cin>>validity;
		}
		void getData(){
			cout<<"Customer ID is : "<<id<<endl;
			cout<<"Customer Name is : "<<name<<endl;
			cout<<"Customer Age is : "<<age<<endl;
			cout<<"Customer Brand  is : "<<brand<<endl;
			cout<<"Customer Mobile Number is : "<<mobile<<endl;
			cout<<"Customer City is : "<<city<<endl;
			cout<<"Customer Simcard Validity is : "<<validity<<endl;
		}
};
int main(){
	Cust c[5];
	int i;
	for(i=1;i<=5;i++){
		c[i].setData();
	}
	for(i=1;i<=5;i++){
		c[i].getData();
	}
	return 0;
}
