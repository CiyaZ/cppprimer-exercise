#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

struct Person
{
  std::string name;
  std::string address;

  std::string getName() const;
  std::string getAddress() const;
};

std::istream &read(std::istream &in, Person &p);
void print(std::ostream &out, const Person &p);

#endif