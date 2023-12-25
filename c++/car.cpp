#include <iostream>
#include <string>

class Car {
  private: std::string company;
  std::string model;
  int year;

  public:
    // Constructor
    Car(const std::string & comp,
      const std::string & mdl, int yr): company(comp),
  model(mdl),
  year(yr) {}

  // Getter functions
  std::string getCompany() {
    return company;
  }

  std::string getModel() {
    return model;
  }

  int getYear() {
    return year;
  }

  // Setter functions
  void setCompany(const std::string & comp) {
    company = comp;
  }

  void setModel(const std::string & mdl) {
    model = mdl;
  }

  void setYear(int yr) {
    year = yr;
  }
};

int main() {
  // Create a car object
  Car car("AUDI", "A6", 2023);

  // Get and display the car details
  std::cout << "Company: " << car.getCompany() << std::endl;
  std::cout << "Model: " << car.getModel() << std::endl;
  std::cout << "Year: " << car.getYear() << std::endl;

  // Set new values for the car
  car.setCompany("BMW");
  car.setModel("M4");
  car.setYear(2022);

  
  std::cout << "\nUpdated Company: " << car.getCompany() << std::endl;
  std::cout << "Updated Model: " << car.getModel() << std::endl;
  std::cout << "Updated Year: " << car.getYear() << std::endl;

  return 0;
}

