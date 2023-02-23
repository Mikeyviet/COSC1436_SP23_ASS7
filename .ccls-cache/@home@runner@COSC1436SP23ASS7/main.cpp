///////////////////////////////////////////////////////////////////////////////
//  Name:        Michael Nguyen
//  Course Name: Programming Fundamentals I
//  Course No:   COSC-1436-57002
//  Assignment:  #7 Task1 - Data Structures 
//	IDE:		 Microsoft Visual Studio 2022 
//
//  Description: This program will create three functions that will print the 
//		values inside the data structures: timeOfDay, appDate, and event.
///////////////////////////////////////////////////////////////////////////////
#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

///////////////////////////////////////////////////////////////////////////////
//							Structure definitions
///////////////////////////////////////////////////////////////////////////////
//Structure to hold the time of day
struct timeOfDay {
	short hour;		//hours
	short minute;	//minutes
	short second;	//seconds
};

//Structure to hold the date
struct appDate {
	short dayOfMonth;	//day(1-31)
	short month;		//month(1-12)
	int year;			//year(yyyy)
};

//Structure to hold the event details
struct Event {
	string eventName;		//name of event
	timeOfDay eventTime;	//time - timeOfDay datatype
	appDate eventDate;		//date - appDate datatype
	bool isUrgent;			//flag to mark urgent events
};

//function prototype
// void printTheTime(const timeOfDay&);
// void printTheDate(const appDate&);
void printTheEvent(const Event&);

///////////////////////////////////////////////////////////////////////////////
//							Main Program 
///////////////////////////////////////////////////////////////////////////////

int main()
{
	Event myEvent;

	myEvent.eventTime = { 12, 45, 10 };
	myEvent.eventDate = { 07, 05, 2021 };
	myEvent.eventName = "Went to Rehab";
	myEvent.isUrgent = "True";

	// printTheTime(myEvent.eventTime);
	// printTheDate(myEvent.eventDate);
	printTheEvent(myEvent);


	system("pause");
	return 0;
}

void printTheTime(const timeOfDay& myTime)	//prints the time
{
	cout << "Time: " << myTime.hour << ":" << myTime.minute << ":" << myTime.second << endl;
}

void printTheDate(const appDate& myDate)	//prints the date
{
	cout << "Date: " << myDate.dayOfMonth << "/" << myDate.month << "/" << myDate.year << endl;
}

void printTheEvent(const Event& myEvent)	//prints details of the event
{
	cout << "\n\nThe information for the event structure is as follows: " << endl;
	cout << "-----------------------------------------------------------" << endl;
	cout << "Event: " << myEvent.eventName << endl;
	cout << "Date: " << myEvent.eventDate.dayOfMonth << "/" << myEvent.eventDate.month << "/" << myEvent.eventDate.year << endl;
	cout << "Time: " << myEvent.eventTime.hour << ":" << myEvent.eventTime.minute << ":" << myEvent.eventTime.second << endl;
	// printTheDate(myEvent.eventDate);
	// printTheTime(myEvent.eventTime);
	if (myEvent.isUrgent == true)
		cout << "Urgent: Yes" << endl;
	else
		cout << "Urgent: No" << endl;
		cout << endl << endl;

}