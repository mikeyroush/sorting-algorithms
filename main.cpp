/************************
Programming Assignment 2 CSCE 221-501
Harris, Nicholas; Canales, Edward; Roush, Michael
nh17227@tamu.edu; edwardcanales@tamu.edu; mikey_roush@tamu.edu
*************************/


#include <sstream>
#include <iostream>
#include <fstream>

#include "sort.h"


std::vector<Flight> readFlights(std::string fileName);
std::ostream& operator<<(std::ostream& os, const std::vector<Flight> vect);

int main()
{	
	/*
	std::vector<Flight> a10= readFlights("rand10.csv");
	std::cout<<"Reading Done"<<std::endl;
	std::vector<Flight> ssa10t = insertion_sort(a10, ByDestination);
	//std::cout<<ssa10t; //You need to suppress this for 1000+
	std::cout<<"Sort Finished"<<std::endl;
	std::cout<<std::endl<<getComparisons()<<std::endl;
	*/

	/*
    first read flights in files using readFlights()
    descen10.csv	ascen10.csv     rand10.csv
    descen100.csv	ascen100.csv	rand100.csv
    descen1000.csv	ascen1000.csv	rand1000.csv
    descen10000.csv ascen10000.csv	rand10000.csv
  */

	std::vector<Flight> r10= readFlights("rand10.csv");


  /*
    then use each of the sorting functions on each of the generated vectors
  */
	//Vectors named by (sort type)(sorted)(original data)(# of data)(by Time or Dest)
	//Just change the numbers for the different files guys
	
	//By Departure Time
	//Random
	std::vector<Flight> ssr10t = selection_sort(r10, ByDepartureTime);
	std::vector<Flight> isr10t = insertion_sort(r10, ByDepartureTime);
	std::vector<Flight> bsr10t = bubble_sort(r10, ByDepartureTime);
	
	//By Destination
	//Random
	std::vector<Flight> ssr10d = selection_sort(r10, ByDestination);
	std::vector<Flight> isr10d = insertion_sort(r10, ByDestination);
	std::vector<Flight> bsr10d = bubble_sort(r10, ByDestination);
	
	/*
    then output each of the resultant sorted vectors
    format them so that they look like the table of the front of the 
    instructions

    Flight Number	Destination Departure   Time	        Gate Number
    AA223			LAS VEGAS	21:15			A3
    BA023			DALLAS		21:00			A3
    AA220			LONDON		20:30			B4
    VI303			MEXICO		19:00			A7
    BA087			LONDON		17:45			A7
    AA342			PARIS		16:00			A7
    VI309			PRAGUE		13:20			F2
    QU607			TORONTO		08:30			F2
    AA224			SYDNEY		08:20			A7
    AF342			WASHINGTON	07:45			A3
  */
	
	std::ofstream outFile;
	outFile.open("OutputFile.txt");

	outFile<<"Selection sort by departure time:"<<std::endl;
	outFile<<ssr10t;
	outFile<<"_______________________________________"<<
		std::endl<<"End of output"<<std::endl<<std::endl;

	outFile<<"Insertion sort by departure time:"<<std::endl;
	outFile<<isr10t;
	outFile<<"_______________________________________"<<
		std::endl<<"End of output"<<std::endl<<std::endl;

	outFile<<"Bubble sort by departure time:"<<std::endl;
	outFile<<bsr10t;
	outFile<<"_______________________________________"<<
		std::endl<<"End of output"<<std::endl<<std::endl;

	outFile<<"Selection sort by Destination:"<<std::endl;
	outFile<<ssr10d;
	outFile<<"_______________________________________"<<
		std::endl<<"End of output"<<std::endl<<std::endl;

	outFile<<"Insertion sort by Destination:"<<std::endl;
	outFile<<isr10d;
	outFile<<"_______________________________________"<<
		std::endl<<"End of output"<<std::endl<<std::endl;

	outFile<<"Bubble sort by Destination:"<<std::endl;
	outFile<<bsr10d;
	outFile<<"_______________________________________"<<
		std::endl<<"End of output"<<std::endl<<std::endl;
	

	//std::cout<<std::endl<<getComparisons()<<std::endl;

	//system("pause");
  /*
    then fill out the rest of the questions on the instructions 
    - the number of comparisons

    - to test your functions experimentally use difftime explained here 
    http://www.cplusplus.com/reference/ctime/time/
  */

  return 0;
}

//read in the flights from the input file at fileName and store them in a vector
std::vector<Flight> readFlights(std::string fileName)
{
	std::vector<Flight> Flights; //Vector to be filled in while

	std::ifstream inFile;
	inFile.open(fileName);

	std::string trash;
	std::getline(inFile, trash); //Collects the header of the CSV file

	while (!inFile.eof()) {
		std::string rowStr;
		std::getline(inFile, rowStr);
		//Following allows use of strtok function (needs char*)
		if (rowStr.length()==0) {break;}
		std::stringstream buffer(rowStr);
		
		std::string FN, Gate, Dest, Time;
		//Extraction
		std::getline(buffer, FN, ',');
		std::getline(buffer, Dest, ',');
		std::getline(buffer, Time, ',');
		std::getline(buffer, Gate, ',');
		Flight tempFlight(FN, Dest, Time, Gate);

		Flights.push_back(tempFlight);
	}
	return Flights;
}

std::ostream& operator<<(std::ostream& os, const std::vector<Flight> vect) {
	os<<"Flight Number--Destination-Departure Time--Gate Number"<<std::endl;
	for (int i=0; i<vect.size(); i++) {
		os<<vect.at(i).flightNum<<"          " //10 spaces to line up with destination
			<<vect.at(i).destination;
		//Align the departure time inset slightly
		for (int j=0; j<(14-vect.at(i).destination.size()); j++) {os<<" ";}
		if (vect.at(i).departureTime.size()<5) {os<<"0";}
		os<<vect.at(i).departureTime<<"           " //16spaces
			<<vect.at(i).gateNum<<std::endl;
	}
	return os;
}
