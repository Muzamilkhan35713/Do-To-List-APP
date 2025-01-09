#include <iostream>
#include <string>
#include <vector>

using namespace std;
int index;
string newtask;
 
class todolist {
public:
    vector<string> task;

    void add(int size) {
        task.resize(size);
        for (int h=0;h < size;h++) {
            cout << "Enter task " << h + 1 << ": ";
            cin >> task[h];
            
        }
    };
    
    

    void view() {
        cout << "Tasks:" << endl;
        for (int i = 0; i < task.size(); i++) {
            cout << task[i] << endl;
        }
    };

    void deleteTask(int index) {
        if (index < 1 || index > task.size()) {
            cout << "Invalid task number." << endl;
            return;
        }
        cout << "Task deleted: " << task[index - 1] << endl;
        task.erase(task.begin() + index - 1);
    
    };
    void updatetask(int index,string newtask)    
        {
          if (index < 1|| index > task.size()) {
            cout << "Invalid task number." << endl;
            return;
        }
         cout<< "task update"<<newtask;
         task[index-1]=newtask;
        };
};

int main() {
    int choose;
    todolist obj;

    while (true) {
        cout << "1. Add task\n2. View\n3. Delete\n4. update task\n5. Exit\n";
        cin >> choose;

        switch (choose) {
        case 1:
         int n;
            
          int size;
            cout << "How many tasks do you want to add? ";
            cin >> size;
            obj.add(size);
            break;
        case 2:
            obj.view();
            break;
        case 3:
            
            cout << "Enter the task number to delete: ";
            cin >> index;
            obj.deleteTask(index);
            break;
        case 4 :
            
            cout << "which task you want to update" << endl;
            cin>> index;
            
            cout << "add your new task" << endl;
            cin>> newtask;
            obj.updatetask(index,newtask);
            break;   
        case 5:
            cout << "Program Exit" << endl;
            return 0;
        }
    }
}
