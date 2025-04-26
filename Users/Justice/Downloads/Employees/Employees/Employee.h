/**
 * @file Employee.h
 * @brief Declaration of the Employee class for managing employee records.
 */

 #ifndef EMPLOYEE_H
 #define EMPLOYEE_H
 
 #include <string>
 
 /**
  * @class Employee
  * @brief Represents an employee with a first name, last name, and salary.
  */
 class Employee {
 private:
     std::string firstName; ///< The employee's first name.
     std::string lastName;  ///< The employee's last name.
     double salary;         ///< The employee's salary.
 
 public:
     /**
      * @brief Default constructor for Employee.
      * Initializes firstName and lastName to empty strings, salary to 0.0.
      */
     Employee();
 
     /**
      * @brief Constructs an Employee with given name and salary.
      * @param firstName The first name of the employee.
      * @param lastName The last name of the employee.
      * @param salary The initial salary of the employee.
      */
     Employee(const std::string& firstName, const std::string& lastName, double salary);
 
     /**
      * @brief Sets the employee's first name.
      * @param firstName New first name.
      */
     void setFirstName(const std::string& firstName);
 
     /**
      * @brief Sets the employee's last name.
      * @param lastName New last name.
      */
     void setLastName(const std::string& lastName);
 
     /**
      * @brief Sets the employee's salary.
      * @param salary New salary value.
      */
     void setSalary(double salary);
 
     /**
      * @brief Gets the employee's first name.
      * @return The employee's first name.
      */
     std::string getFirstName() const;
 
     /**
      * @brief Gets the employee's last name.
      * @return The employee's last name.
      */
     std::string getLastName() const;
 
     /**
      * @brief Gets the employee's salary.
      * @return The employee's salary.
      */
     double getSalary() const;
 };
 
 #endif // EMPLOYEE_H
 