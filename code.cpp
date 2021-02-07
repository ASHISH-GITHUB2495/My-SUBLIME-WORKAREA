#include<iostream>
#include<string.h>
using namespace std;


class student{

 private:
 	string name;
 	int roll;
 	int marks;

 public:
 void getData(){
       
    cout<<"Enter name:";
    getline(cin,name);
    cout<<"Enter roll:";
    cin>>roll;
    cout<<"Enter marks:";
    cin>>marks;
    cout<<endl;

 	}

 void   display()
    {

 cout<<"Your name is: "<<name<<endl;
 cout<<"Your Roll is: "<<roll<<endl;
 cout<<"Your marks is: "<<marks<<endl;




    }

};


int main()
{


	student ob;
	ob.getData();
	ob.display();

	return 0;

}


