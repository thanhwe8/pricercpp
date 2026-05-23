#include "RateModel.hpp"
#include<cmath>
#include<algorithm>

RateModel::RateModel(double initialRate, double meanRate, double meanReversion, double volatility): rate_(initialRate), meanRate_(meanRate), meanReversion_(meanReversion), volatility_(volatility){}

double RateModel::nextRate(double dt, std::mt19937& rng) {
    std::normal_distribution<double> normal(0.0, 1.0);

    double dW = std::sqrt(dt)*normal(rng);

    rate_ += meanReversion_*(meanRate_ - rate_)*dt + volatility_*dW;

    return std::max(rate_, 0.0);
}

