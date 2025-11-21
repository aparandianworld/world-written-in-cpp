#ifndef COURSE_HPP
#define COURSE_HPP

#include <string>

class Course {
private:
    int id;
    std::string name;
    int credits;

public:
    Course(int id_i, std::string name_i, int credits_i);
    int getId() const;
    std::string getName() const;
    int getCredits() const;
    void setId(int id_i);
    void setName(std::string name_i);
    void setCredits(int credits_i);
};

#endif
