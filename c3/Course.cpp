#include "Course.hpp"

Course::Course(int id_i, std::string name_i, int credits_i) {
    id = id_i;
    name = name_i;
    credits = credits_i;
}

int Course::getId() const {
    return id;
}

std::string Course::getName() const {
    return name;
}

int Course::getCredits() const {
    return credits;
}

void Course::setId(int id_i) {
    id = id_i;
}

void Course::setName(std::string name_i) {
    name = name_i;
}

void Course::setCredits(int credits_i) {
    credits = credits_i;
}