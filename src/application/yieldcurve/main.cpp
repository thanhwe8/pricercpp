//
// Created by thanhwe8 on 5/22/26.
//
#include<iostream>
#include<vector>

using namespace std;

class YieldCurve {
private:
    std::vector<double> times_;
    std::vector<double> zeroRates_;

public:
    YieldCurve() {
        std::cout << "Default constructor called" << std::endl;
    }

    YieldCurve(const std::vector<double>& times, const std::vector<double>& zeroRates):times_(times), zeroRates_(zeroRates) {
        std::cout << "Normal Constructor called" << std::endl;
    }

    YieldCurve(const YieldCurve& other):times_(other.times_), zeroRates_(other.zeroRates_) {
        std::cout << "Copy constructor called" << std::endl;
    }

    YieldCurve& operator=(const YieldCurve& other) {
        std::cout << "Assignment operator called" << std::endl;
        if (this != &other) {
            times_ = other.times_;
            zeroRates_ = other.zeroRates_;
        }
        return *this;
    }

    void printAddress(const std::string&name) const {
        std::cout << name << " address = " << this << std::endl;
    }
};


int main() {
    cout << "This is the main" << endl;
    std::vector<double> times{1.0, 2.0, 5.0};
    std::vector<double> rates{0.05, 0.047, 0.043};

    cout << "Create curve 1 " << std::endl;
    YieldCurve curve1(times, rates);

    // create with assignment operator
    YieldCurve curve2 = curve1;

    // create with copy constructor
    YieldCurve curve3(curve2);

    curve1.printAddress("curve1");
    curve2.printAddress("curve2");
    curve3.printAddress("curve3");

    return 0;

}




