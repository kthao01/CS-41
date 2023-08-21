#include <iostream>
#include <string>
#include "pyramid.h"
#include "Person.h"
#include "Boxer.h"

void createPerson(int i);

using namespace std;

int main() {
    // push from different desktop!!!!!!!!!!!!!!!!!!!!!!
//    Pyramid* a = new Pyramid;
//    a->setName("New Fresno");
//    a->setHeight(100);
//    a->setBaseLength(100);
//    a->setBaseWidth(70);
//    a->addDead("Paul Walker");
//    a->addDead("Betty White");
//
//    cout <<"Cubic meterage per dead person: "<< a->spacePerDead() << endl;   PYRAMID

//    Person noob;
//
//    cout << noob.getAge() << endl;
//
//    noob.setName("Matt Damon");
//    noob.setAge(52);
//    noob.setEmail("seeAboutAGirl@Yahoo.com");
//
//    noob.display();

// did the push work?


Person noob("Matt Dame", 52, "wow@gmail.com");
Person a("Ben Affleck");
Person b("Jeniffer Lopez", 50, "notwow@gmail.com");
Person c("Ben Kenobi", 76, "theForce@gmail.com");
Boxer d("Mike Tyson", 55, "punchout@gmail.com", "Heavyweight");
Boxer e;

d.display();

//for (int i = 0; i < 1000; i++){
//    createPerson(i);


    return 0;
}

void createPerson(int i) {
    Person* noob = new Person(to_string(i));

}


