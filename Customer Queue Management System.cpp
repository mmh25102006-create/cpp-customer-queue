#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
    queue<string> customers;
    int choice;

    do
    {
        cout << "\n===== Customer Queue Management =====\n";
        cout << "1. Add Customer\n";
        cout << "2. Serve Next Customer\n";
        cout << "3. Show Next Customer\n";
        cout << "4. Display All Customers\n";
        cout << "5. Show Number of Customers\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore();

        switch (choice)
        {
        case 1:
        {
            string name;

            cout << "Enter customer name: ";
            getline(cin, name);

            if (name.empty())
            {
                cout << "Name cannot be empty.\n";
                break;
            }

            customers.push(name);

            cout << "Customer added successfully.\n";
            break;
        }

        case 2:
        {
            if (customers.empty())
            {
                cout << "No customers in the queue.\n";
            }
            else
            {
                cout << "Serving customer: "
                    << customers.front() << "\n";

                customers.pop();

                cout << "Customer served successfully.\n";
            }

            break;
        }

        case 3:
        {
            if (customers.empty())
            {
                cout << "No customers waiting.\n";
            }
            else
            {
                cout << "Next customer: "
                    << customers.front() << "\n";
            }

            break;
        }

        case 4:
        {
            if (customers.empty())
            {
                cout << "Queue is empty.\n";
            }
            else
            {
                queue<string> temp = customers;

                cout << "\n===== Waiting Customers =====\n";

                while (!temp.empty())
                {
                    cout << temp.front() << "\n";
                    temp.pop();
                }
            }

            break;
        }

        case 5:
        {
            cout << "Number of waiting customers: "
                << customers.size() << "\n";

            break;
        }

        case 6:
            cout << "Goodbye!\n";
            break;

        default:
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 6);

    return 0;
}