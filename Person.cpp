#include "Person.h"
#include <string>
using namespace std;

// Constructors
Person::Person() {
    mWeight = 0;
    mFirstName = "";
    mAge = 0;
}

Person::Person(string name, float weight, int age) {
    mFirstName = name;   // ❗ YOU ALSO MISSED THIS LINE
    mWeight = weight;
    mAge = age;
}

// Destructor
Person::~Person() {
}

// Overload + operator
float Person::operator+(const Person& otherPerson) {
    return mWeight + otherPerson.mWeight;
}

// Overload ==
bool Person::operator==(const Person& other) {
    return mFirstName == other.mFirstName;
}

// Overload !=
bool Person::operator!=(const Person& other) {
    return mFirstName != other.mFirstName;
}

// Overload <
bool Person::operator<(const Person& other) {
    return mAge < other.mAge;
}

// Overload >
bool Person::operator>(const Person& other) {
    return mAge > other.mAge;
}

// Conversion to int
Person::operator int() {
    return mAge;
}

// Conversion to string
Person::operator string() {
    return mFirstName;
}