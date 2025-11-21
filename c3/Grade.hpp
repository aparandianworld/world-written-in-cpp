#ifndef GRADE_HPP
#define GRADE_HPP

#include <string>

enum GradeType {
    A = 'A',
    B = 'B',
    C = 'C',
    D = 'D',
    F = 'F'
};

class Grade {
private:
    int student_id;
    std::string course_id;
    GradeType grade;

public:
    Grade(int student_id_i, std::string course_id_i, GradeType grade_i);
    int getStudentId() const;
    std::string getCourseId() const;
    GradeType getGrade() const;
    void setStudentId(int student_id_i);
    void setCourseId(std::string course_id_i);
    void setGrade(GradeType grade_i);
};

#endif
