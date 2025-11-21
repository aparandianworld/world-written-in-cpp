#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>

class Student {
private:
    int id;
    std::string name;

public:
    Student(int id_i, std::string name_i);
    int getId() const;
    std::string getName() const;
    void setId(int id_i);
    void setName(std::string name_i);
};

#endif
