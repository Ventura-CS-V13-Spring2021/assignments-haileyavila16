#include "address.hpp"
#include <bits/stdc++.h>
using namespace std;

address::address(){
  street = " ";
  state = " ";
  zip = 0;
}address::address(string str, string st, int z){
  street = str;
  state = st;
  zip = z;
}
string address::getStreet() const{
  return street;
}
string address::getState() const{
  return state;
}
string address::getZip() const{
  return zip;
}
void address::setStreet(string str){
  street = str;
}
void address::setState(string st){
  state = st;
}
void address::setZip(int z){
  zip = z;
}
void address::setAddress(string str, string st, int z){
  street = str;
  state = st;
  zip = z;
}
void DOB::printDate() const{
  cout << "Street: " << street << "\n";
  cout << "State: " << state << "\n";
  cout << "Zip Code: " << zip << "\n";
}