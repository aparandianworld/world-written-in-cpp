#include <iostream>
#include <string>

#include "Student.hpp"
#include "Course.hpp"
#include "Grade.hpp"

int main() {

    Student aparandian = Student(1, "aparandian");
    Course aparandian_xcs221 = Course(1, "xcs221", 4);
    Grade aparandian_xcs221_grade = Grade(1, "xcs221", GradeType::A);

    std::cout << "Student name: " << aparandian.getName() << std::endl;
    std::cout << "Course name: " << aparandian_xcs221.getName() << std::endl;
    std::cout << "Grade: " << static_cast<char>(aparandian_xcs221_grade.getGrade()) << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}