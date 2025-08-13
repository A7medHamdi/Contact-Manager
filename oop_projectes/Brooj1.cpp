#include <iostream>
#include "Contact.h"
#include "user.h"
using namespace std;
int main()
{
    Contact contactBook;

    int choice;
    do
    {
        cout << "Contact Manager"<<"\n";
        cout << "1. Add User\n";
        cout << "2. Edit User\n";
        cout << "3. Delete User\n";
        cout << "4. Search User\n";
        cout << "5. Show All Users\n";
        cout << "6. Count Users\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            string id, fname, lname, gender, city, date;
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter First Name: ";
            cin >> fname;
            cout << "Enter Last Name: ";
            cin >> lname;
            cout << "Enter Gender: ";
            cin >> gender;
            cout << "Enter City: ";
            cin >> city;
            cout << "Enter Added Date: ";
            cin >> date;

            User u(id, fname, lname, gender, city, date);
            contactBook.adduser(u);
            cout << "User added.\n";
        }
        else if (choice == 2)
        {
            string id;
            cout << "Enter ID to edit: ";
            cin >> id;
            contactBook.EditUser(id);
        }
        else if (choice == 3)
        {
            string id;
            cout << "Enter ID to delete: ";
            cin >> id;
            contactBook.DeleteUser(id);
        }
        else if (choice == 4)
        {
            string key;
            cout << "Enter ID or Name to search: ";
            cin >> key;
            User *found = contactBook.SearchUser(key);
            if (found)
            {
                found->show();
            }
            else
            {
                cout << "User not found.\n";
            }
        }
        else if (choice == 5)
        {
            contactBook.ShowAll();
        }
        else if (choice == 6)
        {
            cout << "Total Users: " << contactBook.CountUser() << "\n";
        }

    } while (choice != 0);

    cout << "Entor Ablakash\n";
    return 0;
}