#ifndef BLOOD_GROUP_H_INCLUDED
#define BLOOD_GROUP_H_INCLUDED

#include<string>
#include<iostream>
using namespace std;
class Blood_group
{
protected:
    string Blood_group;
public:
    string get_Blood_group();
    void set_Blood_group( string);
};
void Blood_group::set_Blood_group(string n)
{
    Blood_group=n;
}
string Blood_group::get_Blood_group()
{
    return Blood_group;
}

#endif // BLOOD_GROUP_H_INCLUDED

Contact.h

#ifndef CONTACT_H_INCLUDED
#define CONTACT_H_INCLUDED
#include<string>
#include<iostream>
using namespace std;
class Contact
{
protected:
    string phone_no;
    string email;
public:
    void set_phone_no(string);
    void set_email(string);
    string get_phone_no();
    string get_email();
};
void Contact::set_phone_no(string p)
{
    phone_no=p;
}
void Contact::set_email(string e)
{
    email=e;
}
string Contact::get_phone_no()
{
    return phone_no;
}
string Contact::get_email()
{
    return email;
}
#endif // CONTACT_H_INCLUDED

Database.h

#ifndef DATA_BASE_H_INCLUDED
#define DATA_BASE_H_INCLUDED
#include<string>
#include "Donar.h"
#include<vector>
#include<windows.h>
#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
class Data_base
{
protected:
    Donor don[1000];

public:

    Data_base() {}
    void Data(string s)
    {
        static int i=0;
        if(s=="Add New")
        {
            string n;
            long int r;
            int t;
            cout<<"\n\t\t\t Enter Name:"<<endl;
            cout<<" \t\t\t ";
            getchar();
            getline(cin>>n,n);
            don[i].set_name(n);
            cout<<"\n\t\t\t Enter Roll ID:"<<endl;
            cout<<" \t\t\t ";
            cin>>r;
            don[i].set_roll(r);
            cout<<"\n\t\t\t Enter Department:"<<endl;
            cout<<" \t\t\t ";
            cin>>n;
            don[i].set_department(n);
            cout<<"\n\t\t\t Enter Blood Group:"<<endl;
            cout<<" \t\t\t ";
            cin>>n;
            don[i].set_Blood_group(n);
            cout<<"\n\t\t\t No.of Blood Donate:"<<endl;
            cout<<" \t\t\t ";
            cin>>t;
            don[i].set_no_of_blood_donate(t);

            cout<<"\n\t\t\t Last Date of Blood Donation:"<<endl;
            cout<<" \t\t\t ";
            cin>>n;
            don[i].set_last_date_of_blood_donation(n);

            cout<<"\n\t\t\t Enter Phone No.:"<<endl;
            cout<<" \t\t\t ";
            cin>>n;
            don[i].set_phone_no(n);
            cout<<"\n\t\t\t Enter E-mail:"<<endl;
            cout<<" \t\t\t ";
            cin>>n;
            don[i].set_email(n);
            //system("cls");
            cout<<"\n\t Your data has been successfully added to the our database."<<endl;
            system("PAUSE");
            system("CLS");
            i++;
        }
        if(s=="View")
        {
            int j;
            system("cls");
            for( j=0; j<i; j++)
            { //fncall1353
                cout<<"\n\t\t\t\tDonar No: "<<j+1<<endl;
                cout<<"\t\t\tName: "<<don[j].get_name()<<endl;
                cout<<"\t\t\tRoll: "<<don[j].get_roll()<<endl;
                cout<<"\t\t\tDepartment.: "<<don[j].get_department()<<endl;
                cout<<"\t\t\tBlood Group: "<<don[j].get_Blood_group()<<endl;
                cout<<"\t\t\tNo. of Blood Donation: "<<don[j].get_no_of_blood_donate()<<endl;
                cout<<"\t\t\tLast Date of Blood Donation: "<<don[j].get_last_date_of_blood_donation()<<endl;
                cout<<"\t\t\t:-:Contact Info:-:"<<endl;
                cout<<"\t\t\tPhone No.: "<<don[j].get_phone_no()<<endl;
                cout<<"\t\t\tE-mail: "<<don[j].get_email()<<endl;
                cout<<"\n\n";
                system("PAUSE");
                system("CLS");
            }
            if(j<1)
            //brought to you by code-projects.org
                cout<<"\aPlease Insert some data first.\n\n";
        }
        if(s=="Search")
        {
            string s;
            system("cls");
            cout<<"\n\t\t\t\tEnter Name/Blood Group/Department : "<<endl;
            cout<<"\t\t\t\t";
            cin>>s;
            for(int j=0; j<i; j++)
            {
                if(s==don[j].get_Blood_group()||s==don[j].get_name()||s==don[j].get_department())
                {
                     cout<<"\n\t\t\t\tDonar No: "<<j+1<<endl;
                cout<<"\t\t\tName: "<<don[j].get_name()<<endl;
                cout<<"\t\t\tRoll: "<<don[j].get_roll()<<endl;
                cout<<"\t\t\tDepartment.: "<<don[j].get_department()<<endl;
                cout<<"\t\t\tBlood Group: "<<don[j].get_Blood_group()<<endl;
                cout<<"\t\t\tNo. of Blood Donation: "<<don[j].get_no_of_blood_donate()<<endl;
                cout<<"\t\t\tLast Date of Blood Donation: "<<don[j].get_last_date_of_blood_donation()<<endl;
                cout<<"\t\t\t:-:Contact Info:-:"<<endl;
                cout<<"\t\t\tPhone No.: "<<don[j].get_phone_no()<<endl;
                cout<<"\t\t\tE-mail: "<<don[j].get_email()<<endl;
                cout<<"\n\n";
                system("PAUSE");
                system("CLS");
                }
            }

        }
    }
};

#endif // DATA_BASE_H_INCLUDED

Donor.h

#ifndef Donor_H_INCLUDED
#define Donor_H_INCLUDED
#include<string>
#include<iostream>
#include "Roll.h"
#include "Name.h"
#include "Department.h"
#include "Blood_Group.h"
#include "Contact.h"
using namespace std;
class Donor:public Roll,public Name,public Department,public Blood_group,public Contact
{
protected:
    int no_of_blood_donate;
    string last_date_of_blood_donation;
public:
    void set_no_of_blood_donate(int);
    int get_no_of_blood_donate();
    void set_last_date_of_blood_donation(string);
    string get_last_date_of_blood_donation();
};
void Donor::set_no_of_blood_donate(int n)
{
    no_of_blood_donate=n;
}
void Donor::set_last_date_of_blood_donation(string d)
{
    last_date_of_blood_donation=d;
}
int Donor::get_no_of_blood_donate()
{
    return no_of_blood_donate;
}
string Donor::get_last_date_of_blood_donation()
{
    return last_date_of_blood_donation;
}
#endif // Donor_H_INCLUDED

Department.h

#ifndef DEPARTMENT_H_INCLUDED
#define DEPARTMENT_H_INCLUDED
#include<string>
#include<iostream>
using namespace std;
class Department
{
protected:
    string department;
public:
    string get_department();
    void set_department( string);
};
void Department::set_department(string d)
{
    department=d;
}
string Department::get_department()
{
    return department;
}

#endif // DEPARTMENT_H_INCLUDED

Name.h

#ifndef NAME_H_INCLUDED
#define NAME_H_INCLUDED
#include<string>
#include<iostream>
using namespace std;
class Name
{
protected:
    string name;
public:
    string get_name();
    void set_name( string);
};
void Name::set_name(string n)
{
    name=n;
}
string Name::get_name()
{
    return name;
}

#endif // NAME_H_INCLUDED

Roll.h

#ifndef ROLL_H_INCLUDED
#define ROLL_H_INCLUDED

#include<string>
#include<iostream>
using namespace std;
class Roll
{
protected:
    long int roll;
public:
    long int get_roll();
    void set_roll(long int);
};
void Roll::set_roll(long int r)
{
    roll=r;
}
long int Roll::get_roll()
{
    return roll;
}


#endif // ROLL_H_INCLUDED

Main.cpp

#include <iostream>
#include<windows.h>
#include "Data_base.h"
#include<cstring>
using namespace std;
int main()
{
    Data_base db;
    while(1)
    {
        int n;
        cout<<"\n\t\t===========================================";
        cout<<"\n\t\t|   Simple Blood Bank Management System   |"<<endl;
        cout<<"\t\t===========================================";
        cout<<"\n\t \t \t ::Enter Your Choice::"<<endl;
        cout<<"\n\t\t\tTo Add New Data \t(1)\n\t\t\tTo View List Of Donar   (2)\n\t\t\tTo Search Donar \t(3)\n\t\t\tTo Exit \t\t(4)"<<endl;
        cout<<"\t\t\t: ";
        cin>>n;
        switch (n)
        {

        case 1:
        {
            system("cls");
            db.Data("Add New");
        }
        break;

        case 2:
        {
            system("cls");
            db.Data("View");
        }
        break;
        case 3:
        {
            system("cls");
            db.Data("Search");
        }
        break;
        case 4:
        {
           cout<<"\n\nBrought To You By code-projects.org";
            return 0;
        }
        break;

        default:
        {
            system("cls");
            cout<<"\a\aPlease Enter your choice Correctly:\a\a"<<endl;
        }
        break;
        }

    }
    return 0;
}