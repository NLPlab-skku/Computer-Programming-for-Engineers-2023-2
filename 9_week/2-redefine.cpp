#include <iostream>

using namespace std;

class Person 
{
  public:
    Person() : name("not set") {}
    Person(string name) : name(name) {}
    string getName() const {return name;}
    void setName(string name) {this->name=name;} 
    void printInfo() const;
  private:
    string name;
};

void Person::printInfo() const
{
  cout << "Name: " << name << endl;
}

class Student : public Person
{
  public:
    Student() : Person() {}
    Student(string name) : Person(name) {}
    void setSid(int sid) {this->sid = sid;}
    int getSid() const {return sid;}
    void printInfo();
  private:
    int sid;
};

void Student::printInfo()
{
  Person::printInfo();
  cout << "Student ID: " << sid << endl;
}

int main()
{
  Student Ko("ko");
  Ko.setSid(100);
  Ko.printInfo();
  return 0;
}
