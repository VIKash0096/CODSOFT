#include <iostream>
#include <vector>
#include <string>
using namespace std;

void addTask(vector<string> &todo) {
    string task;
    cout << "Enter the task you want to add: ";
    cin>>task;
    todo.push_back(task);
    cout << "Task added successfully.\n";
}

void viewTasks(const vector<string> &todo) {
    if (todo.empty()) {
        cout << "No tasks in the list.\n";
        return;
    }
    cout << "Todo List:\n";
    for (size_t i = 0; i < todo.size(); ++i) {
        cout << i + 1 << ". " << todo[i] << endl;
    }
}

void removeTask(vector<string> &todo) {
    if (todo.empty()) {
        cout << "No tasks in the list to remove.\n";
        return;
    }
    int num;
    cout << "Enter the number of the task you want to remove: ";
    cin >> num;
    if (num < 1 || num > todo.size()) {
        cout << "Invalid task number.\n";
        return;
    }
    todo.erase(todo.begin() + num - 1);
    cout << "Task removed successfully.\n";
}

int main() {
    vector<string> todo;
    int choice;

    do {
        cout << "\nTodo List Menu:\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Remove Task\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addTask(todo);
                break;
            case 2:
                viewTasks(todo);
                break;
            case 3:
                removeTask(todo);
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);
    return 0;
}
