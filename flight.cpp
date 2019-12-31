/*
  name
  section
  assignment
  file
*/

#include "flight.h"

Flight::Flight()
{
	//Note, these values have the same number of char
	// as expected, exception destination
	flightNum = "00000";
	destination = "Null";
	departureTime = "Never";
	gateNum = "NA";
}

Flight::Flight(std::string fn, std::string dest, std::string dt, std::string gn) :
	flightNum(fn), destination(dest), departureTime(dt), gateNum(gn) {}

Flight::~Flight()
{

}

bool compareToDestination(Flight f1, Flight f2)
{
	if (f1.destination.compare(f2.destination)>=0) 
		return true;
	return false;
}

bool compareToDepartureTime(Flight f1, Flight f2)
{
	if (f1.departureTime.compare(f2.departureTime)>=0) 
		return true;
	return false;
}

Flight& Flight::operator=(const Flight& source) {
	this->departureTime = source.departureTime;
	this->destination = source.destination;
	this->flightNum = source.flightNum;
	this->gateNum = source.gateNum;

	return *this;
}
