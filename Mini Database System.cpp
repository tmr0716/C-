#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
struct Student {
    int id;
    char name[50];
    float marks;
};
void addStudent() {
    Student s;
    ofstream file("data.txt", ios::binary | ios::app);
    cout << "Enter ID: ";
    cin >> s.id;
    cout << "Enter Name: ";
    cin.ignore();
    cin.getline(s.name, 50);
    cout << "Enter Marks: ";
    cin >> s.marks;
    file.write((char*)&s, sizeof(s));
    file.close();
    cout << "✅ Record added!\n";
}
void viewStudents() {
    Student s;
    ifstream file("data.txt", ios::binary);
    if (!file) {
        cout << "No records found.\n";
        return;
    }
    cout << "\n--- Student Records ---\n";
    while (file.read((char*)&s, sizeof(s))) {
        cout << "ID: " << s.id
             << " | Name: " << s.name
             << " | Marks: " << s.marks << endl;
    }
    file.close();
}
void searchStudent() {
    Student s;
    int id;
    bool found = false;
    cout << "Enter ID to search: ";
    cin >> id;
    ifstream file("data.txt", ios::binary);
    while (file.read((char*)&s, sizeof(s))) {
        if (s.id == id) {
            cout << "Found: " << s.name << " | Marks: " << s.marks << endl;
            found = true;
            break;
        }
    }
    if (!found)
        cout << "❌ Record not found.\n";

    file.close();
}
void deleteStudent() {
    Student s;
    int id;
    bool found = false;
    cout << "Enter ID to delete: ";
    cin >> id;
    ifstream file("data.txt", ios::binary);
    ofstream temp("temp.txt", ios::binary);
    while (file.read((char*)&s, sizeof(s))) {
        if (s.id != id) {
            temp.write((char*)&s, sizeof(s));
        } else {
            found = true;
        }
    }
    file.close();
    temp.close();
    remove("data.txt");
    rename("temp.txt", "data.txt");
    if (found)
        cout << "❌ Record deleted.\n";
    else
        cout << "Record not found.\n";
}
void updateStudent() {
    Student s;
    int id;
    bool found = false;
    cout << "Enter ID to update: ";
    cin >> id;
    fstream file("data.txt", ios::binary | ios::in | ios::out);
    while (file.read((char*)&s, sizeof(s))) {
        if (s.id == id) {
            cout << "Enter new name: ";
            cin.ignore();
            cin.getline(s.name, 50);
            cout << "Enter new marks: ";
            cin >> s.marks;
            int pos = -1 * sizeof(s);
            file.seekp(pos, ios::cur);
            file.write((char*)&s, sizeof(s));
            cout << "✅ Record updated!\n";
            found = true;
            break;
        }
    }
    if (!found)
        cout << "❌ Record not found.\n";
    file.close();
}
void menu() {
    int choice;

    do {
        cout << "\n====== Mini Database System ======\n";
        cout << "1. Add Record\n";
        cout << "2. View Records\n";
        cout << "3. Search Record\n";
        cout << "4. Update Record\n";
        cout << "5. Delete Record\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2: 
                viewStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                updateStudent();
                break;
            case 5:
                deleteStudent();
                break;
            case 6:
                cout << "Goodbye 👋\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 6);
}
int main() {
    menu();
    return 0;
}