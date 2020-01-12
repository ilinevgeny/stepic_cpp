//
// Created by geirby on 11.01.2020.
//

#ifndef STEPIC_1_SEASON_PERSON_H
#define STEPIC_1_SEASON_PERSON_H
#include <string>

class Person
{

public:
    explicit Person(std::string name) : _name(name) {};
    virtual std::string getName() const;
    ~Person();

private:
    std::string _name;
};


#endif //STEPIC_1_SEASON_PERSON_H
