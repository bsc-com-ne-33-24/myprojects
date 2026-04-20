#pragma once
#include <string>
using namespace std;

class Person {
public:
    Person();
    Person(string name, float weight, int age);
    ~Person();

    float operator+(const Person& otherPerson);

    bool operator==(const Person& other);
    bool operator!=(const Person& other);
    bool operator<(const Person& other);
    bool operator>(const Person& other);

    operator int();
    operator string();

private:
    float mWeight;
    string mFirstName;
    int mAge;
};