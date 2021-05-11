#include "student.hpp"
#include <bits/stdc++.h>
using namespace std;

Student::Student(){
  sname = " ";
  id = 0;
  dob.setDOB(0, 0, 0);
  address.setAddress(" "," ", 0);
}
Student::Student(string stname,int idnum, DOB date, Address addr){
  sname = stname;
  id = idnum;
  dob.setDOB(date.getMonth(), date.getDay(), date.getYear());
  address.setAddress(addr.getStreet(), addr.getState(), addr.getZip());
}
int Student::getID() const{
  return id;
}
string Student::getSname() const{
  return sname;
}
DOB Student::getDOB() const{
  return address;
}
Address Student::getAddress() const{
  return address;
}
void Student::setID(int num){
  id = idnum;
}
void Student::setSname(string name){
  sname = stname;
}
void Student::setDOB(DOB date){
  dob.setDOB(date.getMonth(), date.getDay(), date.getYear());
}
void Student::setAddress(Address addr){
  address.setAddress(addr.getStreet(), addr.getState(), addr.getZip());
}
void Student::printstudent(){
  cout << "Student Name: " << sname << "\n";
  cout << "Student ID: " << id << "\n";
  cout << "DOB: ";
  dob.printDate();
  cout << "Address: ";
  address.printAddress();
}