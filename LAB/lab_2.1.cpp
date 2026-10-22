/*CENG 241 LAB_2.1*/
#include <iostream>
using namespace std;

const double GLOBAL_MARKET_RISK_THRESHOLD = 0.05; /*constant*/

class Portfolio {
    /*private*/
    int capacity;
    double *assetPrices;


    public:
    void initialize(int x){ /*dinamik array*/
        capacity = x;
        assetPrices = new double[x]; 

        for (int i = 0; i < x; i++) {
            cout << "Enter Asset Price: ";
            cin >> assetPrices[i];
        }

    }
    void cleanup(){ /*end of program - [INFO] Released portfolio dynamic memory.*/
        delete[] assetPrices;
        cout << "[INFO] Released portfolio dynamic memory." << endl;
    }
    double calculateTotalValue(){ /*toplamı döndür*/
        double total = 0;
        for (int i = 0; i < capacity; i++) {
            total += assetPrices[i];
        }
        return total;
    }
    bool exceedsRiskLimit(double y){
        return y > :: GLOBAL_MARKET_RISK_THRESHOLD;

    }
    void displayPortfolio() { /*çıktıya benzetmeye çalıştım ama*/
        cout << "Assets Tracked: " << capacity << "/" << capacity << endl;
        cout << "Prices: ";
        for (int i = 0; i < capacity; i++) {
            cout << "$" << assetPrices[i] << " ";
        }
        cout << endl;
        cout << "Total Portfolio Value: $" << calculateTotalValue() << endl;
    }
};
int main() {
    int capacity;
    double drawdown;
    Portfolio p;
    
    cout << "Enter how many assets you would like to enter: ";
    cin >> capacity;
    p.initialize(capacity);

    cout << "Enter the drawdown you have observed so far: ";
    cin >> drawdown;
    /*[WARNING] Portfolio drawdown exceeds global risk limit (5%)!*/
    if (p.exceedsRiskLimit(drawdown)) { /*“Portfolio ris is within acceptable parameters.”.*/
        cout << "[WARNING] Portfolio drawdown exceeds global risk limit ("
             << ::GLOBAL_MARKET_RISK_THRESHOLD *100 << "%)!" << endl;
    }
    else {
        cout << "Portfolio ris is within acceptable parameters." << endl;
    }

    p.displayPortfolio();
    p.cleanup();

    return 0;
}


