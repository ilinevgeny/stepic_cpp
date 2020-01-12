#include <iostream>
//#include "lessons/person.h"
#include "lessons/student.h"

int main()
{
    std::cout << "Hello, World!" << std::endl;
    Student st("Person", "Vasya");
    std::cout << st.getName() << std::endl;
    Person * p = &st;
    std::cout << p->getName() << std::endl;
//    Person *s = new Student("Vasya");
//    std::cout << s->getName();
    return 0;
}
