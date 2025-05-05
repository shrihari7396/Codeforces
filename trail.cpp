// Implementation of a direct access file -Insertion and deletion of a record 
// from a direct access file 

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

#define SIZE 100
#define FILENAME "assign12.txt"


struct Record{
    int id;            
    char name[20];
    int age;
    bool del;

    Record(){
        id=-1;
        strcpy(name, "");
        age=0;
        del=false;
    }
};


void insert_record() {
    Record r;
    cout<<"Enter ID (0 - "<<SIZE-1<<"): ";
    cin>>r.id;
    cout<<"Enter Name: ";
    cin>>r.name;
    cout<<"Enter Age: ";
    cin>>r.age;
    r.del=false;

    fstream file(FILENAME, ios::in|ios::out);
    if (!file){
        file.open(FILENAME, ios::out);
        Record temp;
        for (int i=0; i<SIZE; ++i)
            file.write((char*)&temp, sizeof(temp));
        file.close();
        file.open(FILENAME, ios::in|ios::out);
    }

    file.seekp(r.id*sizeof(Record));
    file.write((char*)&r, sizeof(r));
    file.close();
    cout << "Record inserted into the file successfully!"<<endl;
}

void delete_record(){
    int id;
    cout<<"Enter ID to delete: ";
    cin>>id;

    fstream file(FILENAME, ios::in|ios::out);
    if (!file){
        cerr<<"Error Opening the File!!"<<endl;
        return;
    }

    file.seekg(id * sizeof(Record));
    Record r;
    file.read((char*)&r, sizeof(r));

    if (r.id==-1 || r.del){
        cout<<"No record found at this ID."<<endl;
    } else{
        r.del = true;
        file.seekp(id * sizeof(Record));
        file.write((char*)&r, sizeof(r));
        cout<<"Record Deleted Successfully!!"<<endl;
    }
    file.close();
}

void displayAll(){
    ifstream file(FILENAME, ios::in);
    if (!file){
        cerr<<"Error opening the file!!"<<endl;
        return;
    }

    Record r;
    for (int i = 0; i<SIZE; ++i) {
        file.read((char*)&r, sizeof(r));
        if (r.id!=-1 && !r.del) {
            cout<<"ID: " <<r.id<<", Name: "<<r.name<<", Age: " <<r.age <<endl;
        }
    }

    file.close();
}

void search_record() {
    int id;
    cout<<"Enter ID to search: ";
    cin>>id;

    ifstream file(FILENAME, ios::in);
    if (!file) {
        cerr<<"Error Opening the File for Searching!!";
        return;
    }

    file.seekg(id*sizeof(Record));
    Record r;
    file.read((char*)&r, sizeof(r));

    if (r.id!=-1 && !r.del) {
        cout << "Record Found -> ";
        cout<<"ID: " <<r.id<<", Name: "<<r.name<<", Age: " <<r.age <<endl;
    } else {
        cout<<"No active record found at ID "<<id<<"!!"<<endl;
    }

    file.close();
}


int main() {
    int ch;
    do {
        cout<<"\n--- Direct Access File Menu ---\n";
        cout<<"1. Insert Record\n";
        cout<<"2. Delete Record\n";
        cout<<"3. Display All Records\n";
        cout<<"4. Search Record\n";
        cout<<"5. Exit\n";
        cout<<"Enter Choice: ";
        cin>>ch;

        switch (ch) {
            case 1: 
                insert_record(); 
                break;
            case 2: 
                delete_record(); 
                break;
            case 3: 
                displayAll(); 
                break;
            case 4:
                search_record();
                break;
            case 5: 
                cout<<"Exiting....."<<endl; 
                break;
            default: 
            cout<<"Invalid choice! Please Try Again!"<<endl;
        }
    } while (ch!=5);

    return 0;
}
