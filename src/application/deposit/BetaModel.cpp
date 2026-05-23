#include "BetaModel.hpp"

double BetaModel::getBeta(double rate) const {
    if (rate < 0.02) {
        return 0.7;
    }
    return 0.8;
}
