#include <iostream>
#include <vector>
#include "Dealership.h"
using namespace std;


int main() {

  // create a CarDealer using default constructor
  Dealership dealer1;
  
  // change the dealership name 
  dealer1.setDealershipName("Brooklyn Auto");

  // output the short name
  cout << dealer1.getShortName() << "\n";

  // create a CarDealer using the custom constructor that sets dealership name and brand name
  Dealership dealer2{"Bronx Motors", "Honda"};

  // output the short name 
  cout << dealer2.getShortName() << "\n";

  // change dealership name 
  dealer2.setDealershipName("Cross Bronx Motors");

  // output the short name 
  cout << dealer2.getShortName() << "\n";

  
}