# toDO-list-POO-CPP
This project will help you organize your daily tasks and school projects


# Task Manager – OOP Project in C++
The program will have functions such as the date assigned and the date completed. There will be an administrator who will create the tasks, and collaborators will be the ones who will modify the status of said tasks. In this case, it will be useful to properly track each one individually.

This is important because it will help prevent forgetting activities or tasks within each project.

In this project, the top-level class will be the user class, which will inherit from collaborator and administrator. There will also be two constructor classes: projects and tasks. A project contains a task, and both users and collaborators will be able to access the content of each project, where they can change the status of each task.

The user class will have characteristics such as name, phone number, and email address.

The administrator class will have the special feature of being able to assign and create tasks.

The collaborator class will be able to change the task status, allowing them to determine whether work has started, is halfway done, or is finished.

The project class will have a special name and due date, and can group a maximum of 5 tasks per project.

Tasks must have a name, description, assigned person, and estimated completion time.

##Key Features:
- **Class inheritance** (`User`, `Administrator`, `Collaborator`)
- Use of constructors and custom method
- Class relationships through composition and aggregation
- Functions include: task creation, marking tasks as completed, displaying tasks, and user assignment

##Educational Purpose:
This project demonstrates practical OOP usage in C++, ideal for academic assignments or as a base for more advanced systems. It helps learners understand class hierarchies and good object design practices.


