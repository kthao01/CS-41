//
// Created by khuen on 8/14/2023.
//

#ifndef INC_8_14_PYRAMID_H
#define INC_8_14_PYRAMID_H

#include <string>
#include <vector>
using namespace std;

class Pyramid {
private:
    std::string name;
    std::vector<std::string> entombed;
    double baseLength;
    double baseWidth;
    double height;

public:
    std::string getName(){
        return name;
    }

    void setName(std::string name){
        this->name = name;  //this-> same as self.name... reffering to self
    }

    const std::vector<std::string> &getEntombed() const {
        return entombed;
    }

    double getBaseLength() const {
        return baseLength;
    }

    double getBaseWidth() const {
        return baseWidth;
    }

    double getHeight() const {
        return height;
    }

    void setBaseLength(double baseLength) {
        Pyramid::baseLength = baseLength;
    }

    void setBaseWidth(double baseWidth) {
        Pyramid::baseWidth = baseWidth;
    }

    void setHeight(double height) {
        Pyramid::height = height;
    }

    void setEntombed(const std::vector<std::string> &entombed) {
        Pyramid::entombed = entombed;
    }

    double surfaceArea(){
        return 0;
    }

    double volume(){
        return (baseLength * baseWidth * height) / 3.0;
    }

    void addDead(std::string deadPersonName){
        entombed.push_back(deadPersonName);
    }

    double spacePerDead(){
        return this->volume() / entombed.size();
    }

};


#endif //INC_8_14_PYRAMID_H
