/*
  name
  section
  assignment
  file
*/

#pragma once
#include <string>

struct Flight 
{
  std::string flightNum;
  std::string destination;
  std::string departureTime;
  std::string gateNum;

  Flight();
  Flight(std::string fn, std::string dest, std::string dt, std::string gn);
  ~Flight();
  //...
  Flight& operator=(const Flight& source);
};

//compare this Flight object against another Flight object
//returns true if this object is >= other
// (returns true if f1 is >= f2)
bool compareToDestination(Flight f1, Flight f2);
bool compareToDepartureTime(Flight f1, Flight f2);
