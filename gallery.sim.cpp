#include <iostream>
#include <vector>
#include <string>

using namespace std;


struct Car {
    int id;
    string brand;
    string model;
    int year;
    int price;
    bool isSold;
};


vector<Car> cars = {
        {1, "BMW", "M5", 2023, 1500000, false},
        {2, "Audi", "RS7", 2022, 1400000, false},
        {3, "Mercedes", "C63", 2021, 1300000, false},
        {4, "Porsche", "911", 2020, 3000000, false},
        {5, "Tesla", "Model S", 2024, 1600000, false},
        {6, "BMW", "X6M", 2022, 1700000, false},
        {7, "Audi", "RSQ8", 2023, 1800000, false},
        {8, "Lamborghini", "Huracan", 2019, 8500000, false},
        {9,"TOFAS ","DOGAN SLX",2000,1000,false}
};


void showBudget(int budget) {
    cout << "Your current budget is: " << budget << endl;
}


void buyCar(vector<Car>& cars, int id, int& budget) {
    bool found = false;
    for (auto& car : cars) {
        if (car.id == id) {
            found = true;

            if (car.isSold) {
                cout << "Already sold out:" << endl;
                return;
            }

            if (budget >= car.price) {
                car.isSold = true;
                budget -= car.price;
                cout << "You bought the car: " << car.brand << " " << car.model << endl;
                showBudget(budget);
                return;
            }
            else {
                cout << "You don't have enough budget :(" << endl;
                cout << "Car price is: " << car.price << endl;
                showBudget(budget);
                return;
            }
        }
    }

    if (!found) {
        cout << "Car couldn't find:" << endl;
    }
}


void listCars(const vector<Car>& cars) {
    for (const auto& car : cars) {
        cout << car.id << "|"
            << car.brand << " "
            << car.model << " "
            << car.year << " "
            << car.price << "EURO |"
            << (car.isSold ? "SOLD" : " SELL ")
            << endl;
    }
}


int main() {
    int budget;
    cout << "Whats your budget" << endl;
    cin >> budget;

    if (cin.fail()) {
        cout << "Invalid input!" << endl;
        return 0;
    }

    while (true) {
        int choice;

        cout << "---MCN CAR GALLAERY---" << endl;
        showBudget(budget);
        cout << "1. LIST THE CARS :" << endl;
        cout << "2. BUY THE CAR : " << endl;
        cout << "3.EXIT..." << endl;
        cout << "choice" << endl;
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid choice!" << endl;
            continue;
        }

        if (choice == 3) {
            cout << "We will add new cars and please check one more tıme later:)" << endl;
            break;
        }

        if (choice == 1) {
            cout << "here are our cars:" << endl;
            listCars(cars);
        }
        else if (choice == 2) {
            int id;
            cout << "ID OF CAR" << endl;
            cin >> id;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid ID!" << endl;
                continue;
            }

            buyCar(cars, id, budget);
        }
    }
}
