MCN Car Gallery Simulator

A simple command-line car gallery simulator written in C++.
Users can view a list of cars, buy cars if their budget allows, and track the remaining budget.

Features

Display a list of available cars with brand, model, year, price, and availability.

Buy cars if the budget is sufficient.

Track and display the user's remaining budget.

Prevent buying already sold cars.

Handles invalid input gracefully.

Cars Available

The program comes preloaded with these cars:

ID	Brand	Model	Year	Price	Status
1	BMW	M5	2023	1,500,000	SELL
2	Audi	RS7	2022	1,400,000	SELL
3	Mercedes	C63	2021	1,300,000	SELL
4	Porsche	911	2020	3,000,000	SELL
5	Tesla	Model S	2024	1,600,000	SELL
6	BMW	X6M	2022	1,700,000	SELL
7	Audi	RSQ8	2023	1,800,000	SELL
8	Lamborghini	Huracan	2019	8,500,000	SELL
9	TOFAS	DOGAN SLX	2000	1,000	SELL
Getting Started
Requirements

C++ compiler supporting C++11 or later (e.g., g++, clang++, Visual Studio).

Running the Program

Clone the repository:

git clone https://github.com/codcreater1/MCN-Car-Gallery.git


Navigate to the project directory:

cd MCN-Car-Gallery


Compile the program:

g++ -o car_gallery main.cpp


Run the program:

./car_gallery

How to Use

Enter your starting budget.

Choose an option from the menu:

1 to list all cars

2 to buy a car

3 to exit

If buying a car, enter the car ID.

The program will check your budget and the car availability, update the budget if the purchase succeeds, and display the updated status.

Example Usage
Whats your budget
2000000
---MCN CAR GALLAERY---
Your current budget is: 2000000
1. LIST THE CARS :
2. BUY THE CAR :
3. EXIT...
choice
1
here are our cars:
1|BMW M5 2023 1500000EURO | SELL
2|Audi RS7 2022 1400000EURO | SELL
...
choice
2
ID OF CAR
1
You bought the car: BMW M5
Your current budget is: 500000
