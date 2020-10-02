#include <iostream>
using namespace std;

// Lab 1
// add your function definitions here
// see Blackboard for details

// define ticketCost function
double ticketCost (double ticketPrice = 10, int numTickets =2 ){
  return ticketPrice * numTickets;

}
// define first overloaded schoolCost function
double schoolCost( double price){
  return price * 2;
}
// define second overloaded schoolCost function 
double schoolCost ( double price, double housingFee){
  return (price + housingFee) * 4;
}


int main() {
  // leave main function as it is 

  // test ticketCost function with default values
  cout << ticketCost() << "\n";
  cout << ticketCost(7.50) << "\n";
  cout << ticketCost(12.50, 4) << "\n";
    
  // test first overloaded schoolCost function
  cout << schoolCost(500.00, 125.00)<< "\n";

  // test second overloaded schoolCost function
  cout << schoolCost(375.00)<< "\n";
}