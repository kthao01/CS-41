//
// Created by khuen on 8/21/2023.
//

#ifndef INC_8_14_BOXER_H
#define INC_8_14_BOXER_H
#include "Person.h"


class Boxer : public Person {
private:
    string weightClass;
    int wins;
    int losses;
public:

    Boxer(string name, int age, string email, string weight);
    Boxer();

    const string &getWeightClass() const;

    int getWins() const;

    int getLosses() const;

    void setWeightClass(const string &weightClass);

    void setWins(int wins);

    void setLosses(int losses);

    void display();

};


#endif //INC_8_14_BOXER_H
