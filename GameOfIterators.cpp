#include <iostream>
#include <string>
#include <vector>

struct Student {
  std::string name;

  // student is a transfer student
  bool transfer;
};

int main() {
  // generate data
  std::vector<Student> students({{.name = "Alice", .transfer = true},
                                 {.name = "Bob", .transfer = false},
                                 {.name = "Cracker", .transfer = false},
                                 {.name = "David", .transfer = true},
                                 {.name = "Emily", .transfer = false}});

  // remove non-transfer students in-place
  for (auto it = students.begin(); it != students.end(); it++) {
    if (!it->transfer) {
      students.erase(it);
    }
  }

  // print transfer students
  //  - what's your guess?
  std::cout << "Transfer students: " << std::endl;
  for (const Student &s : students) {
    std::cout << " - " << s.name << std::endl;
  }
  return 0;
}
