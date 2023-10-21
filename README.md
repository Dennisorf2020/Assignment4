# Assignment4
# Employee and Manager Payroll Program

## Overview

This C++ program simulates a payroll system for employees and managers at a company. It consists of two classes: `Employee` and `Manager`. The `Manager` class is derived from the `Employee` class, with the addition of a bonus that managers receive.

## Program Structure

The program is divided into three files:

1. **Employee.h**: This header file defines the `Employee` class. The `Employee` class has a constructor that initializes an employee's name, hourly wage, and hours worked. It also has a `calcPay` method to calculate an employee's pay based on the wage and hours worked.

2. **Employee.cpp**: This source file contains the implementations of the `Employee` class methods, including the constructor and `calcPay` method.

3. **Main.cpp**: This source file includes the `Manager` class, which is derived from the `Employee` class. It adds a bonus to the pay calculation. The program prompts the user to input information for a group of managers, calculates the highest-paid manager and the average pay, and then displays the results.

## Usage

1. Run the program.
2. Enter the number of managers for which you want to calculate pay.
3. Input the name, hourly wage, hours worked, and bonus for each manager.
4. The program calculates and displays the highest-paid manager and the average pay for all managers.

