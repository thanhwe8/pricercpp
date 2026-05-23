#ifndef RATE_MODEL_HPP
#define RATE_MODEL_HPP

#include<random>

class RateModel {
public:
    RateModel(double initialRate,double meanRate, double meanReversion, double volatility);

    double nextRate(double dt, std::mt19937& rng);

private:
    double rate_;
    double meanRate_;
    double meanReversion_;
    double volatility_;
};

#endif