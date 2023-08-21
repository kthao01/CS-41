//
// Created by Brian Baker on 8/16/23.
//

#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

int Person::nextId = 1000000;

Person::Person(string name, int age, string email){
    this->name = name;
    this->age = age;
    this->email = email;
    this->id = Person::nextId;
    Person::nextId++;
}

Person::Person(string name)
        : Person(name, 0, "") {}

Person::Person() : Person("", 0, ""){};

Person::~Person(){
    cout << name << " has been deallocated.\n";
}

string Person::getName(){
    return this->name;
}

void Person::setName(string name){
    if (name == "")
        this->name = "J. Doe";
    this->name = name;
}

int Person::getAge(){
    return this->age;
}

void Person::setAge(int age){
    if(age > 0)
        this->age = age;
}

string Person::getEmail(){
    return email;
}

void Person::setEmail(string e){
    email = e;
}

void Person::display(){
    cout << name << " (" << id << ")" << endl
         << "Age: " << age << "   Email: " << email << endl;
}

unsigned int Person::getId() const {
    return id;
}

void Person::setId(unsigned int id) {
    Person::id = id;
}
