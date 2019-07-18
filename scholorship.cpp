using namespace std;
#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdio.h>
#include<process.h>
class student
{

  private:
   string stud_name;
   string father_name;
   char address[10];
   int lpu_marks;
   int jee_marks;
   float per_10;
   float per_12;
   public:
         void in();
         void out();
         void process();

};
void student::in()
{
    cout<<" you can get scholarship";
    cout<<"12th percentage        scholarship\n";
    cout<<"    90 to  100                   70000\n";
    cout<<"    90 to  80                   50000\n";
    cout<<"    80 to  70                   40000\n";
    cout<<"    70 to 60                    30000\n";

cout<<"\n================================================\n";
cout<<" JEE-marks basis scholarship";
cout<<"\n=================================\n";
cout<<"marks            scholarship\n";
cout<<"324 to 360        70000\n";
cout<<"324 to 290         40000\n";
cout<<"290 to 240         30000\n";
 cout<<"240 to 190         20000\n";

cout<<"\n==========================================\n";
cout<<" LPUNEST basis scholarship\n";
cout<<"\n=========================================\n";
cout<<"programming fee       top 90% student          top 10%            top 20% to 35%\n";
cout<<"94000                      70000                   40000             30000\n";
cout<<"84000                      60000                   30000            20000\n";
cout<<"98000                      74000                   40000            30000\n";
cout<<"\n=======================================\n";
cout<<" Which branch do you like?"<<"\n";
cout<<"click 1\n";
int select1;
cin>>select1;
cout<<"\n==============\n";
cout<<"\n1.engineering";
cout<<"\n2.medical";
cout<<"\n 3.BBA";
cout<<"\n 4.agriculture";

int s1;
		cin>>s1;
switch(s1)
{
	 int s2;
	case 1:
	{


cout<<"\nwhich Stream are you interested in:";
cout<<"\n1. computer science engineer";
cout<<"\n2.  mechanical engineer";
cout<<"\n3.  civil engineer";

cin>>s2;
cout<<"\n";
if(s2==1)
{
    cout<<"your branch is computer science engineer";
    cout<<"fee for cse    94000\n";

}
else if(s2==2)
{
    cout<<"your branch is mechanical engineer";
    cout<<"fee for mechanical  90000\n";

}
else if(s2==3)
{
    cout<<"your branch is civil engineer";
    cout<<"fee for civil engineer 80000\n";
}

break;
}
case 2:
{

cout<<"medical";
cout<<"\n1. pharma B";
cout<<"\n2. pharma D";
cout<<"\n3. pharma M";
cout<<"\nEnter your choice:";
int s3;
cin>>s3;

if(s3==1)
{
 cout<<" your branch is pharma B ";
 cout<<"fee for pharma B    80000";

}
else if(s3==2)
{


    cout<<"your branch is pharma D";
cout<<"fee for pharma D    740000";
}
else if(s3==3)
{
    cout<<" your branch is pharma m";
    cout<<" fee for pharma m    90000";

}

break;
	}
case3:
{


    cout<<"branch for BBA";
    cout<<"\n 1.BUSINESS ECONOMICS";
    cout<<"\n 2.FINACIAL AND MANAGEMENT ACCOUNTING";
    cout<<"\n 3.MARKETING MANAGEMENT";
    cout<<"\n please select anyone";
    int s4;
    cin>>s4;
    if(s4==1)
    {
     cout<<"\n business economics";
     cout<<"fee for business economics  64000";

    }
    if(s4==2)
    {
        cout<<"financial and management accounting";
        cout<<"fee for financial management accounting      74000";

    }
    if(s4==3)
{
   cout<<"\n marketing management";
   cout<<"\n fee for marketing management      84000";

}
break;
}
 default:

    {
    cout<<"\n choose any one 1,2,3";
    }

}
 cout<<"\n=======================================================================\n";
	cout<<"Enter your Name:";
	cin>> stud_name;
	cout<<"Enter your Father's' Name:";
	cin>>father_name;
	cout<<"Enter Your  Address:";
	cin>>address;

	cout<<"Enter your 10th class percentage:";
	cin>>per_10;
	cout<<"Enter your 12th class percentage:";
	cin>>per_12;
	cout<<"Enter your JEE main marks:";
	cin>>jee_marks;
	cout<<"Enter your LPUNEST marks:";
	cin>>lpu_marks;
}
		void student::process(void)
		{
		    if(per_12>=90)
		{
			cout<<"\nYour Scholarship is: 70000"<<endl;
		}

		else if(per_12>=90 && per_12<100)
		{
		cout<<"\nyour scholarship based on 12th class marks:40000"<<endl;
		}
		else if(per_12>=90&& per_12<80)
		{
			cout<<"\nYour scholarship based on 12th class marks: 30000"<<endl;
		}
		else if(per_12>=80 && per_12<70)
		{
			cout<<"\nYour scholarship  based on 12th class marks: 20000"<<endl;
		}


if(jee_marks>360)
		{
			cout<<"Invaild number";
		}
	else if( jee_marks<=360 && jee_marks>325)
	{
		cout<<" On the basis of JEE main Scholarship  =98000\n";
	}
	else if(jee_marks>=275 && jee_marks<324)
	{
		cout<<"On the basis of JEE main Scholarship =90000\n";
	}
	else if(jee_marks>=225 &&jee_marks<274)
	{
		cout<<"On the bases of JEE main Scholarship  =75000\n";
	}
	else if(jee_marks>=175 && jee_marks<224)
	{
		cout<<"On the basis of JEE main Scholarship  =60000\n";
	}


	if(lpu_marks>=360 && lpu_marks<=400)
	{
		cout<<"\n Your Scholarship based on LPUNEST mark: 70000";

	}
	else if(lpu_marks<360 && lpu_marks>300)
	{
		cout<<"\n Your Scholarship based on LPUNEST mark: 50000";
	}
	else if(lpu_marks<300 && lpu_marks>250)
	{
	cout<<"\n Your Scholarship based on LPUNEST marks: 40000";
	}

}
void student::out()
{
	cout<<"\n\nyour name is: "<<stud_name<<"\n";
	cout<<"Your Father name is: "<<father_name<<"\n";
	cout<<"Your Registration No. is: "<<address<<endl;
	cout<<"Your 10th class percentage is: "<<per_10<<endl;
	cout<<"your 12th class percentage is: "<<per_12<<endl;
	cout<<"Your JEE main marks is: "<<jee_marks<<endl;
	cout<<"Your LPUNEST marks is:"<<lpu_marks<<"\n";
	cout<<"\n====================================================================\n";
}

int main()
{
	int i,n;
	cout<<"Enter the number of student\n";
	cin>>n;
	student s1[n];
	ofstream fout;
	fout.open("project2");
	cout<<"Enter"<<n<<"student detail\n";

	for(i=1;i<=n;i++)
	{
		s1[i].in();
		fout.write((char*)&s1[i],sizeof(s1[i]));
	}

	fout.close();
	ifstream fin;
	fin.open("project2");
	fin.read((char*)&s1,sizeof(s1));
	while(!fin.eof())
	{
		fin.read((char*)&s1,sizeof(s1));
		s1[0].out();
		s1[0].process();
	}
	getch();
}
