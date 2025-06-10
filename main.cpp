#include "Admin.h"
#include "Collaborator.h"
#include "Project.h"
#include "Task.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<Admin> admins;
    vector<Collaborator> collaborators;
    vector<Project> projects;

    int op = -1;

    while (op != 0) {
        cout << "1. Add admin\n";
        cout << "2. Add collaborator\n";
        cout << "3. Create project\n";
        cout << "4. Add admin or collaborator to the project\n";
        cout << "5. Add task to project\n";
        cout << "6. Show all\n";
        cout << "0. Exit\n";
        cin >> op;

        if (op == 1) {
            string n, p, e;
            cout << "Admin name: "; cin >> n;
            cout << "Phone: "; cin >> p;
            cout << "Email: "; cin >> e;
            admins.push_back(Admin(n, p, e));
            cout << "Admin added\n";
        }
        else if (op == 2) {
            string n, p, e;
            cout << "Collaborator name: "; cin >> n;
            cout << "Phone: "; cin >> p;
            cout << "Email: "; cin >> e;
            collaborators.push_back(Collaborator(n, p, e));
            cout << "Collaborator added\n";
        }
        else if (op == 3) {
            string n, d;
            cout << "Project name: "; cin >> n;
            cout << "Due date: "; cin >> d;
            projects.push_back(Project(n, d));
        }
        else if (op == 4) {
            int projectPos;
            cout << "Project number (0-" << projects.size()-1 << "): ";
            cin >> projectPos;
            int memberType;
            cout << "Add 1. Admin or 2. Collaborator: "; cin >> memberType;
            if (memberType == 1) {
                for (int i = 0; i < admins.size(); i++)
                    cout << i << ". " << admins[i].getName() << endl;
                int adminNum;
                cout << "Which admin number: ";
                cin >> adminNum;
                projects[projectPos].addMember(&admins[adminNum]);
            }
            else {
                for (int i = 0; i < collaborators.size(); i++)
                    cout << i << ". " << collaborators[i].getName() << endl;
                int collaboratorNum;
                cout << "Which collaborator number: "; cin >> collaboratorNum;
                projects[projectPos].addMember(&collaborators[collaboratorNum]);
            }
        }
        else if (op == 5) {
            int projectChoice, adminChoice;
            cout << "Project number (0-" << projects.size()-1 << "): ";
            cin >> projectChoice;
            cout << "Admin number (0-" << admins.size()-1 << "): ";
            cin >> adminChoice;
            string tn, td, ta;
            int th;
            cout << "Task name: "; cin >> tn;
            cout << "Description: "; cin >> td;
            cout << "Assigned to: "; cin >> ta;
            cout << "Estimated hours: "; cin >> th;
            Task t = admins[adminChoice].createTask(tn, td, ta, th);
            projects[projectChoice] += t;
            cout << "Task added to project\n";
        }
        else if (op == 6) {
            for (int i = 0; i < projects.size(); i++) {
                cout << "Project " << i << ": " << projects[i].getName() << ", Due: " << projects[i].getDueDate() << endl;
                cout << "Members: ";
                for (int j = 0; j < projects[i].getMembers().size(); j++)
                    cout << projects[i].getMembers()[j]->getName() << " | ";
                cout << endl << "Tasks:\n";
                for (int k = 0; k < projects[i].getTasks().size(); k++)
                    cout << " " << k << ". " << projects[i].getTasks()[k].getName()
                         << " [" << projects[i].getTasks()[k].getState() << "] Assigned to: "
                         << projects[i].getTasks()[k].getAssignedTo() << endl;
            }
        }
    }
    return 0;
}




