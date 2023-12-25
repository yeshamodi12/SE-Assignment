#include <iostream>

#include <string>

class Employee {
  private: std::string name;
  int employeeId;
  double salary;

  public:
    // Constructor
    Employee(const std::string & empName, int empId, double empSalary): name(empName),
  employeeId(empId),
  salary(empSalary) {}

  // Member function to calculate salary based on performance
  void calculateSalary(double performanceRating) {
    if (performanceRating >= 0.0 && performanceRating <= 1.4) {
      salary *= performanceRating;
    } else {
      std::cout << "Invalid performance rating. Salary remains unchanged." << std::endl;
    }
  }

  // Member function to set salary
  void setSalary(double empSalary) {
    salary = empSalary;
  }

  // Member function to get employee name
  std::string getName() const {
    return name;
  }

  // Member function to get employee ID
  int getEmployeeId() const {
    return employeeId;
  }

  // Member function to get employee salary
  double getSalary() const {
    return salary;
  }
};

int main() {
  // Create an employee object
  std::string empName;
  int empId;
  double empSalary;

  std::cout << "Input employee name: ";
  std::cin >> empName;

  std::cout << "Input employee ID: ";
  std::cin >> empId;

  std::cout << "Input employee salary: ";
  std::cin >> empSalary;

  Employee employee(empName, empId, empSalary);

  // Calculate and display initial salary
  std::cout << "Initial salary: " << employee.getSalary() << std::endl;

  // Perform salary calculation based on performance
  double performanceRating;
  std::cout << "Input performance rating (0.0-1.2): ";
  std::cin >> performanceRating;

  employee.calculateSalary(performanceRating);

  // Display updated salary
  std::cout << "Updated salary: " << employee.getSalary() << std::endl;

  return 0;
}

