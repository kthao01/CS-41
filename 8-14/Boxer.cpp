//
// Created by khuen on 8/21/2023.
//

#include "Boxer.h"

Boxer::Boxer(string name, int age, string email, string weight)
    : Person(name, age, email){
    this->weightClass = weight;
    this->wins = 0;
    this->losses = 0;

}

Boxer::Boxer() : Boxer("",0,"",""){}

const string &Boxer::getWeightClass() const {
    return weightClass;
}

int Boxer::getWins() const {
    return wins;
}

int Boxer::getLosses() const {
    return losses;
}

void Boxer::setWeightClass(const string &weightClass) {
    Boxer::weightClass = weightClass;
}

void Boxer::setWins(int wins) {
    Boxer::wins = wins;
}

void Boxer::setLosses(int losses) {
    Boxer::losses = losses;
}

void Boxer::display() {
    Person::display();
    cout << "WIns: " <<wins<< "  Losses: :" << losses << endl
    << "Weightclass: " << weightClass << endl << endl;
}
