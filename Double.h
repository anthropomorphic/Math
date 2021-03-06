#ifndef Math_Double_h
#define Math_Double_h

/**************************/
/** A wrapper for double **/
/**************************/

#include <cmath>

class Double {
    double _value;
public:
    double operator=(double val) {
        return _value = val;
    }
    double value()const { return _value; }
    Double(double val = 0) : _value(val) {}
};
bool operator==(const Double& lhv, const Double& rhv) {
    return lhv.value() == rhv.value();
}
bool operator<=(const Double& lhv, const Double& rhv) {
    return lhv.value() <= rhv.value();
}
bool operator>=(const Double& lhv, const Double& rhv) {
    return lhv.value() >= rhv.value();
}
bool operator!=(const Double& lhv, const Double& rhv) {
    return !(lhv == rhv);
}
bool operator>(const Double& lhv, const Double& rhv) {
    return !(lhv <= rhv);
}
bool operator<(const Double& lhv, const Double& rhv) {
    return !(lhv >= rhv);
}
Double operator+(const Double& lhv, const Double& rhv) {
    return lhv.value() + rhv.value();
}
Double operator-(const Double& lhv, const Double& rhv) {
    return lhv.value() - rhv.value();
}
Double operator*(const Double& lhv, const Double& rhv) {
    return lhv.value() * rhv.value();
}
Double operator/(const Double& lhv, const Double& rhv) {
    return lhv.value() / rhv.value();
}
Double operator%(const Double& lhv, const Double& rhv) {
    return static_cast<double>(static_cast<long>(lhv.value()) % static_cast<long>(rhv.value()));
}
Double pow(const Double& lhv, const Double& rhv) {
    return pow(lhv.value(), rhv.value());
}

#endif
