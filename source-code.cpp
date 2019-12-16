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

void examMenu();
void assaignmentMenu();
void courseMenu();
void exit();
void mainMenu();

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
			
					cout<<"\tDo you want to see all subject ?(Y/N) : ";
			
						cin>>choice;
			
							if(choice=='y' || choice=='Y')
						{
							display_course();
							courseMenu();
						}
			
					else if(choice=='n' || choice=='N')
				{
					mainMenu();
				}
		}
		
			else
			
					{
						cout<<"\nInvalid or Wrong keyword\n"<<endl;
						input_courses();
					}	

	
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
	cout<<"\t\t1.Course Menu\n";
	cout<<"\t\t2.Assaignment Menu\n";
	cout<<"\t\t3.Exam Menu\n";
	cout<<"\t\t4.Exit\n";
	
	int option;
		cin>>option;
			if(option==1) courseMenu();
}

void exit()
{
	return;
}

void deleteCourse();

void courseMenu()
{
	cout<<"\t\t1.Add Your Courses\n";
	cout<<"\t\t2.View Your Added Courses\n";
	cout<<"\t\t3.Delete Your Unwanted courses\n";
	cout<<"\t\t4.Go To Main Menu\n";
	
	int option;
		cin>>option;
			if(option==1) input_courses();
				else if(option==2) display_course();
					else if(option==3) deleteCourse();
						else if(option==4) mainMenu();
							else 
	cout<<"\t\tInvalid Keyword\n\n";
						
}

void deleteCourse()
{
	char code[30];
	
	cout<<"\nEnter Course Code : ";
	cin>>code;
	
    node *myNode = first, *previous=NULL;
    int flag = 0;

    while(myNode!=NULL)
    {
        if(myNode->Code==code)
        {
            if(previous==NULL)
                first = myNode->next;
            else
                previous->next = myNode->next;

            cout<<"delated";

            flag = 1;
            free(myNode);
            break;
        }

        previous = myNode;
        myNode = myNode->next;
	}
}


void addAssaignment();
void viewAssaignment();
void deleteAssaignment();
void lastAssaignment();

void assaignmentMenu()
{
	cout<<"\t\t1.Add Your Assaignments\n";
	cout<<"\t\t2.View Your Assaignments\n";
	cout<<"\t\t3.Delete Your Unwanted Assaignments\n";
	cout<<"\t\t4.View Last Given Assaignment\n";
	cout<<"\t\t5.Go To Main Menu\n";
	
		int option;
		cin>>option;
			if(option==1) addAssaignment();
				else if(option==2) viewAssaignment();
					else if(option==3) deleteAssaignment();
						else if(option==4) lastAssaignment();
							else if(option==5) mainMenu();
								else 
		cout<<"\t\tInvalid Keyword\n\n";
}

void examMenu()
{
	
}

