#include "Admin.h"
#include "Collaborator.h"
#include "Project.h"
#include "Task.h"
#include <iostream>
using namespace std;

int main() {
    Admin admin("GaelIbanez", "1234567890", "gael@gmail.com");
    Collaborator collab("Pedro", "0987654321", "pedrito@email.com");

    Project project("Signus Challengue", "2025-06-30");
    project.addMember(admin);
    project.addMember(collab);

    Task task("Create a Presentation", "Write a pitch", "Pedro", 2);
    project.addTask(task);

    // Modificar nombre del proyecto usando setter
    project.setName("Signus Challenge(Updated)");

    // Cambiar el estado de la tarea usando Collaborator
    collab.changeTaskState((Task&)project.getTasks()[0], "Started");

    // Mostrar resumen
    cout << "Project: " << project.getName() << ", Due: " << project.getDueDate() << endl;
    cout << "Members: ";
    for (const User* u : project.getMembers())
        cout << u->getName() << " | ";
    cout << endl;
    cout << "Tasks:\n";
    for (const Task& t : project.getTasks()) {
        cout << "- " << t.getName() << " (" << t.getState() << "), Assigned to: " << t.getAssignedTo() << endl;
    }
    return 0;
}
