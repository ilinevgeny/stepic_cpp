//
// Created by geirby on 12.01.2020.
//

#ifndef STEPIC_1_SEASON_STUDENT_H
#define STEPIC_1_SEASON_STUDENT_H


#include "person.h"

class Student : public Person
{
public:
    explicit Student(std::string name1, std::string name = "New boy") : Person(name1), _name(name)
    {};
    std::string getName() const;

private:
    std::string _name;
};


#endif //STEPIC_1_SEASON_STUDENT_H
