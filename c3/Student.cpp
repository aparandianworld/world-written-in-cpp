#include "Student.hpp"

Student::Student(int id_i, std::string name_i) {
    id = id_i;
    name = name_i;
}

int Student::getId() const {
    return id;
}

std::string Student::getName() const {
    return name;
}

void Student::setId(int id_i) {
    id = id_i;
}

void Student::setName(std::string name_i) {
    name = name_i;
}