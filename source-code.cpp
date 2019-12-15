#include<bits/stdc++.h>

using namespace std;

struct subject
{
	int Credit;
	
	char Code[10];
	
	char Title[30];
	
	struct subject *next;
};


typedef struct subject node;

	node *first=NULL, *last=NULL;

void display_course();


void input_courses()
{
		node *input;
	
	input=(node*)malloc(sizeof(node));
	
		cout<<"\n\t\tEnter Course Code   : ";
			cin>>input->Code;
	
				cout<<"\n\t\tEnter Course Credit : ";
					cin>>input->Credit;
	
						cout<<"\n\t\tEnter Course Titile : ";
							cin>>input->Title;
	
	
	if(first==NULL)
		{
			first=input;
				last=input;
		}
	
		else 
		
			{
				last->next=input;
					last=input;	
			}
	last->next=NULL;


	cout<<"\n\nDo you want to add another subject ?(Y/N) : ";

				char choice;
		
		cin>>choice;

			if(choice=='y' || choice=='Y')
		{
			cout<<"\n\n\n";
				input_courses();
		}
		
				else if(choice=='n' || choice=='N')
			{
				cout<<"\n\n\n";
			
					cout<<"\Do you wantto see all subject ?(Y/N) : ";
			
						cin>>choice;
			
							if(choice=='y' || choice=='Y')
						{
							display_course();
						}
			
					else if(choice=='n' || choice=='N')
				{
				
				}
		}
		
			else
			
				cout<<"Invalid or Wrong keyword"<<endl;	

	
}

void display_course()
{
	cout<<"\nYour All Courses Are\n\n";

    node *myList;
    myList = first;
	
	cout<<"Course Code\t\t\tCourse Title\t\t\tCourse Credit\n\n";

    while(myList!=NULL)
    {
        cout<<myList->Code<<"\t\t\t\t"<<myList->Title<<"\t\t\t\t"<<myList->Credit<<"\n";

        myList = myList->next;
    }
}

void LogIn();
void mainMenu();
void view_frame()
{
	
	cout<<"\n\n\t\t\t\t\t WELCOME TO ACADEMIC PORTAL SYSTEM\n\n";
	cout<<"\n\n\t\t\t\t\t  Created by AK NIBIR(191-15-2464)\n\n";
	cout<<"\n\n\n\t\t\t\t\t\tLog-in to your PORTAL\n\n";
}

int main()
{
	
	view_frame();
	LogIn();
	
	int choice;
	
	cin>>choice;
	
	
	
	
}

void LogIn()
{
	char UserId[]="2464",Password[]="12345";
	
	char T1[10],T2[10];

	cout<<"\n\t\t\t\tEnter User ID : ";
	
	cin>>T1;
	
	cout<<"\n\t\t\t\tEnter Password : ";
	
	cin>>T2;
	
	if((strcmp(T1,UserId)==0) && (strcmp(T2,Password)==0))
	{
		system("CLS");
		
		cout<<"\t\t\t\t\t\tSUCCESSFULLY Logged in\n\n\n";
		
		mainMenu();
	}
	
	else
	
	{
		system("CLS");
		cout<<"\t\t\t\tInvalid User ID or Password\n\n";
		LogIn();
		
	}
}

void mainMenu()
{
	cout<<"\t\t1.Add Your Courses\n";
	cout<<"\t\t2.View Your Added Courses\n";
	cout<<"\t\t3.Delate Your Unwanted course\n";
	cout<<"\t\t4.Add Your Assaignment Tasks\n";
	cout<<"\t\t5.View Your Assaignment\n";
	cout<<"\t\t6.Assaignment Menu\n";
	cout<<"\t\t7.Exam Menu\n";
	cout<<"\t\t8.Exit\n";
}


