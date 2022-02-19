#include <iostream>
#include <vector>
#include <string.h>
#include <fstream>
using namespace std;
struct student {
    string name;
    string id;
    float gpa;
};
typedef struct student Student;
int main() {
    int size;
    cin >> size;
    Student *students;
    students = new Student[size];
    for(int i = 0; i < size; i++) {
        cin.ignore();
        getline(cin, students[i].name);
        getline(cin, students[i].id);
        cin >> students[i].gpa;
    }
    ofstream file_out;
    file_out.open("testbai.bin", ios::binary);
    file_out.write((char*)&students, sizeof(students));
    file_out.close();
    ifstream file_in;
    file_in.open("testbai.bin", ios::binary);
    Student *temp = new Student[size];
    file_in.read((char*)&temp, sizeof(temp));
    for(int i = 0; i < size; i++) {
        cout << "name: " << temp[i].name << endl;
        cout << "id: " << temp[i].id << endl;
        cout << "gpa: " << temp[i].gpa << endl;
    }
    delete(students);
    delete(temp);
    file_in.close();
}