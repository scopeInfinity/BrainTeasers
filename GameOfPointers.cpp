#include<iostream>
#include<string>

struct Student {
    std::string name;
    int age;
};

int main() {
    // generate data
    Student all_students[] = {
        {"Alice", 14},
        {"Bob", 19},
        {"Cracker", 15}
    };

    // find the eldest
    Student *eldest = NULL;
    for(auto student: all_students) {
        if (eldest == NULL || eldest->age < student.age) {
            eldest = &student;
        }
    }

    // print the eldest student name
    //  - what's your guess?
    std::cout<<"[Ageing Potion] Apparently"<< eldest->name <<" is the eldest here." << std::endl;
    return 0;
}