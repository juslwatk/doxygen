Doxygen Testing Project

This project demonstrates the use of Doxygen to automatically generate professional documentation from annotated C++ source code.

 Project Description
This project contains a simple Employee management system with:
- An Employee class (first name, last name, salary)
- Fully documented files, classes, and methods using Doxygen tags
- A Doxygen configuration file (doxyConfig)
- Automatically generated HTML and LaTeX documentation

 How to Generate Documentation

1. Open a terminal or PowerShell in the project folder.
2. Run Doxygen with the provided configuration file:
  
   doxygen doxyConfig
  
3. Open the generated file:
  
   html/index.html
  
   to view the complete documentation in your web browser.

 Key Features
- All private and public members are extracted and documented.
- STL support enabled for correct parsing.
- Recursive documentation for any subfolders.
- Relationships and class diagrams are visible.

 Requirements
- [Doxygen](https://www.doxygen.nl/) installed on your system.

 Folder Structure
- Employee.h / Employee.cpp: C++ source files.
- doxyConfig: Customized Doxygen configuration file.
- html/: Generated HTML documentation.
- latex/: Generated LaTeX files (optional).
- README.md: This file.

 Author
Justice Watkins


