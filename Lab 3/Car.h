/* 
Lab 3
Complete constructor and function definitions under public access specifier
Please see Blackboard - Programming Labs section for details 
*/

class Car {

  public:
    // 1) define custom constructor 
      Car(double cap)
      {
        fuelCapacity = cap;
      }
    // 2) define default constructor 
      Car(){}
    // 3) define AddFuel function 
      void addFuel (double newFuel)
      {
        if ( (newFuel + availableFuel) > fuelCapacity)
        availableFuel = fuelCapacity;
        else
        {
          availableFuel += newFuel;
        }
      }
    // 4) define getFuelCapacity function 
      double getFuelCapacity()const
      {
        return fuelCapacity;
      }
    // 5) define getAvailableFuel function 
      double getAvailableFuel()const
      {
        return availableFuel;
      }

  private:
    // data members (attributes) of a Car 
    // initialized to value in brackets { }

    // current number of gallons of gas in tank
    double availableFuel{2};  
    // how many gallons tank can hold
    double fuelCapacity{10};  

};
