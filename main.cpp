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
        cout << "6. Show all \n";
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
            int idxProj;
            cout << "Project index (0-" << projects.size()-1 << "): ";
            cin >> idxProj;
            int miembro;
            cout << "Add 1. Admin or 2. Collaborator "; cin >> miembro;
            if (miembro == 1) {
                for (int i = 0; i < admins.size(); i++)
                    cout << i << ". " << admins[i].getName() << endl;
                int idxA;
                cout << "Admin index: "; 
                cin >> idxA;
                projects[idxProj].addMember(&admins[idxA]);
            }
            else {
                for (int i = 0; i < collaborators.size(); i++)
                    cout << i << ". " << collaborators[i].getName() << endl;
                int idxC;
                cout << "Collaborator index: "; cin >> idxC;
                projects[idxProj].addMember(&collaborators[idxC]);
            }
        }
        else if (op == 5) {
            int idxProj, idxA;
            cout << "Project index (0-" << projects.size()-1 << "): ";
            cin >> idxProj;
            cout << "Admin index (0-" << admins.size()-1 << "): ";
            cin >> idxA;
            string tn, td, ta;
            int th;
            cout << "Task name: "; cin >> tn;
            cout << "Description: "; cin >> td;
            cout << "Assigned to: "; cin >> ta;
            cout << "Estimated hours: "; cin >> th;
            Task t = admins[idxA].createTask(tn, td, ta, th);
            projects[idxProj] += t;
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

