#include "Grade.hpp"

Grade::Grade(int student_id_i, std::string course_id_i, GradeType grade_i) {
    student_id = student_id_i;
    course_id = course_id_i;
    grade = grade_i;
}

int Grade::getStudentId() const {
    return student_id;
}

std::string Grade::getCourseId() const {
    return course_id;
}

GradeType Grade::getGrade() const {
    return grade;
}

void Grade::setStudentId(int student_id_i) {
    student_id = student_id_i;
}

void Grade::setCourseId(std::string course_id_i) {
    course_id = course_id_i;
}

void Grade::setGrade(GradeType grade_i) {
    grade = grade_i;
}