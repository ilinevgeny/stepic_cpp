//
// Created by geirby on 12.01.2020.
//

#include "student.h"

std::string Student::getName() const
{
    return "Student " + Person::getName();
}