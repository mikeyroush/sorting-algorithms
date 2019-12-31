/*
name
section
assignment
file
*/

#include "sort.h"
#include <iostream>


//use this to keep track of comparisons
int num_cmps;

std::vector<Flight> selection_sort(std::vector<Flight> flights,
				   SortOption sortOpt)
{
	num_cmps = 0;
	switch (sortOpt) {
	case ByDestination:
		for (int i=0; i<flights.size()-1; i++) {
			int min = i;
			for (int j = i; j<flights.size(); j++) {
				if (num_cmps++, compareToDestination(flights.at(min), flights.at(j))) 
					min = j;
			}
			//Swap elements
			if (min !=i) {
				Flight temp = flights.at(i);
				flights.at(i) = flights.at(min);
				flights.at(min) = temp;
			}
		}
		break;

	case ByDepartureTime:
		for (int i=0; i<flights.size()-1; i++) {
			int min = i;
			for (int j = i; j<flights.size(); j++) {
				if (num_cmps++, compareToDepartureTime(flights.at(min), flights.at(j))) 
					min = j;
			}
			//Swap elements
			if (min != i) {
				Flight temp = flights.at(i);
				flights.at(i) = flights.at(min);
				flights.at(min) = temp;
			}
			//std::cout<<"Swap "<< i <<std::endl;
		}
		break;
	}

	return flights;
}

std::vector<Flight> insertion_sort(std::vector<Flight> flights,
				   SortOption sortOpt)
{
	num_cmps = 0;
	int flightSize = flights.size();
	Flight tmp;
		
		switch (sortOpt) {
		case ByDestination:
		
			for (int i = 0; i < flightSize; i++) {
				int j = i;
				tmp = flights.at(i);
				while (num_cmps++, j > 0 && compareToDestination(flights.at(j-1), tmp)) {
					flights.at(j) = flights.at(j-1);
										
					j--;
				}
				flights.at(j) = tmp;
			}
			break;
		
		case ByDepartureTime:
		
			for (int i = 0; i < flightSize; i++) {
				int j = i;
				tmp = flights.at(i);
				while (num_cmps++, j > 0 && compareToDepartureTime(flights.at(j-1), tmp)) {
					flights.at(j) = flights.at(j-1);

					j--;
				}
				flights.at(j) = tmp;
			}
			break;
		}
  return flights;
}

std::vector<Flight> bubble_sort(std::vector<Flight> flights,
				SortOption sortOpt)
{
    num_cmps = 0;
    switch (sortOpt) {
        case ByDestination:
            for (int i = 1;  i < flights.size(); ++i){
                bool cont = false;
                for (int j = 0;  j < flights.size() - i; ++j){
                    if (num_cmps++, compareToDestination(flights.at(j), flights.at(j+1))){
                        std::swap(flights.at(j), flights.at(j+1)); // swap elements if element at j > element at j+1
                        cont = true;
                    }
                }
				if (!cont) return flights; // stop sorting
            }
            break;
        case ByDepartureTime:
            for (int i = 1; i < flights.size(); ++i){
                bool cont = false;
                for (int j = 0; j < flights.size() - i; ++j){
                    if (num_cmps++, compareToDepartureTime(flights.at(j), flights.at(j+1))){
                        std::swap(flights.at(j), flights.at(j+1)); // swap elements if element at j > element at j+1
                        cont = true;
                    }
                }
				if (!cont) return flights; // stop sorting
            }
            break;
    }
    
    return flights;
}

int getComparisons() {return num_cmps;}
