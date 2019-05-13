//
// Created by Amey on 11-05-2019.
//

#ifndef SAMPLEPROJECT_STUDENT_H
#define SAMPLEPROJECT_STUDENT_H
#include <sstream>
using namespace std;

class Student{
private:
    int age,standard;
    string first_name,last_name;

public:
    void set_age(int age){
        this->age = age;
    }

    void set_standard(int standard){
        this->standard = standard;
    }

    void set_first_name(string first_name){
        this->first_name = first_name;
    }

    void set_last_name(string last_name){
        this->last_name = last_name;
    }

    int get_age(){
        return age;
    }

    int get_standard(){
        return standard;
    }

    string get_first_name(){
        return first_name;
    }

    string get_last_name(){
        return last_name;
    }

    string to_string(){
        string result =
                std::to_string(age) + "," + first_name + "," + last_name + "," + std::to_string(standard);
        return result;
    }
};

void customClass();


#endif //SAMPLEPROJECT_STUDENT_H
