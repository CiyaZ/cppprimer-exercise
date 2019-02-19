#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person
{

friend std::istream &read(std::istream &in, Person &p);
friend void print(std::ostream &out, const Person &p);

private:
  std::string name = "";
  std::string address = "";
public:
  std::string getName() const;
  std::string getAddress() const;
  
  Person() = default;
  Person(std::string name, std::string address): name(name), address(address) {};
};

std::istream &read(std::istream &in, Person &p);
void print(std::ostream &out, const Person &p);

#endif