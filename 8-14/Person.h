//
// Created by khuen on 8/16/2023.
//

#ifndef INC_8_14_PERSON_H
#define INC_8_14_PERSON_H

#include <string>
#include <iostream>

using namespace std;


class Person {
private:
    string name;
    int age;
    string email;
    unsigned int id;
    static int nextId;


public:
    Person();
    Person(string name);
    Person(string name, int age, string email);
    ~Person();
    string getName();
    void setName(string);
    int getAge();
    void setAge(int age);
    string getEmail();
    void setEmail(string email);
    unsigned int getId() const;
    void setId(unsigned int id);
    void display();


};


#endif //INC_8_14_PERSON_H
