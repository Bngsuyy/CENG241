#include <iostream>
using namespace std;

class GreenhouseMonitor {
    private:
    double maxTempThreshold; 


    public:


    void setThreshold(double x) {     /*setThreshold(double): void*/
        maxTempThreshold = x;
    }




    bool checkThreshold(const double* temp, int n){     /*+ checkThreshold(const double*, int): bool*/
        for (int i = 0; i < n; i++) {
            if (temp[i] > maxTempThreshold) {
                cout << "[WARNING] At least one sensor exceeds limit "
                     << maxTempThreshold << "!" << endl;
                return true;
            }
        }
        return false /*bool içinde for dışı*/ ;
    }
};

 int main() {
    GreenhouseMonitor g;
    double max;
    int n;

    cout << "Enter the maximum acceptable temperature value: ";
    cin >> max;
    g.setThreshold(max);


    cout << "Enter number of temperatures: ";
    cin >> n;

    double* temperatures = new double[n];

    
    for (int i = 0; i < n; i++) {
        cout << "Enter temperature value: " << i + 1 << ": ";
        cin >> temperatures[i];
    }

    if (g.checkThreshold(temperatures, n)) {
        cout << "[ALERT] Greenhouse climate regulation required!" << endl;
    } else {
        cout << "[OK] All greenhouse temperatures are within optimal range." << endl;
    }

    delete[] temperatures;
    return 0;
 };