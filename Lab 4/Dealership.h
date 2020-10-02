/* 
Lab 4
Complete constructor and function definitions under public access specifier and one function definition under private access specifier
Please see Blackboard - Programming Labs section for details 
*/
#include <string>



class Dealership {

  public:
    // 1) define custom constructor 
     Dealership (std::string dName, std::string brand)
    {
       dealershipName = dName;
       brandName = brand;
       setShortName();
    }
    // 2) define default constructor 
     Dealership(){}
    // 3) define function getShortName
    std::string getShortName()
    {
      return shortDealerName;
    }
    // 4) define function setDealershipName
    void setDealershipName(std::string dname)
    {
      dealershipName = dname;
      setShortName();
    }
  

  private:
    // 5) define function setShortName

      void setShortName ()
      {
        shortDealerName= dealershipName.substr(0,3)+brandName;
      }

    // data members (attributes) of a Dealership 
    // initialized to empty strings

    // dealership name
    std::string dealershipName{};  
    // brand name
    std::string brandName{};  
    // short name 
    std::string shortDealerName{};

};
