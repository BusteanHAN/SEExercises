#include "dofxyrz.h"
#include <math.h>

std::ostream& operator<< (std::ostream &os, const DOFxyRz &rhs)
{
    os << "[" << rhs.vect << "," << rhs.getRz() << "]" << "\n";
    return os;
}

double DOFxyRz::getRz() const {
    return Rz_;
}

void DOFxyRz::setRz(double &val) {
    Rz_ = val;
}



DOFxyRz operator+= (DOFxyRz &lhs, const CartVec2D &rhs)
{
    lhs.vect += rhs;
    return lhs;
}

DOFxyRz operator-= (const DOFxyRz &lhs, const CartVec2D &rhs)
{
    DOFxyRz result;
    result = lhs;
    result.vect -= rhs;
    return result;
}

DOFxyRz operator+=(DOFxyRz &lhs, const double &rhs)
{
    lhs.Rz_ += rhs;
    return lhs;
}

DOFxyRz operator-=(const DOFxyRz &lhs, const double &rhs)
{
    DOFxyRz result;
    result = lhs;
    double newRz = result.getRz();
    newRz -= rhs;
    result.setRz(newRz);
    return result;
}

DOFxyRz operator+ (const DOFxyRz &lhs, const CartVec2D &rhs)
{
    DOFxyRz result;
    result = lhs;
    result.vect += rhs;
    return result;
}

DOFxyRz operator- (const DOFxyRz &lhs, const CartVec2D &rhs)
{
    DOFxyRz result;
    result = lhs;
    result.vect -= rhs;
    return result;
}

DOFxyRz operator+ (const DOFxyRz &lhs, const double &rhs)
{
    DOFxyRz result;
    result = lhs;
    double temp = result.Rz_;
    if(result.Rz_ > M_PI)
        result.Rz_ = M_PI;
    if(result.Rz_ < -M_PI)
        result.Rz_ = -M_PI;
    while(result.Rz_ <= M_PI) {
        if(result.Rz_ == temp+rhs) {
            return result;
            break;
        }
        result.Rz_+=0.00001;
    }
    return result;
}

DOFxyRz operator- (const DOFxyRz &lhs, const double &rhs)
{
    DOFxyRz result;
    result = lhs;
    double temp = result.Rz_;
    if(result.Rz_ > M_PI)
        result.Rz_ = M_PI;
    if(result.Rz_ < -M_PI)
        result.Rz_ = -M_PI;
    while(result.Rz_ >= -M_PI) {
        if(result.Rz_ == temp-rhs) {
            return result;
            break;
        }
        result.Rz_-=0.00001;
    }
    return result;
}

CartVec2D DOFxyRz::heading() const {
    double x_=sin(Rz_);
    double y_=cos(Rz_);
    CartVec2D result(x_, y_);
    if(result.length() !=1)
        exit(0);
    return result;
}
