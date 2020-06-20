#include "dofxyrz.h"
#include <math.h>

std::ostream& operator<< (std::ostream &os, const DOFxyRz &rhs)
{
    os << "[" << rhs.vect << "," << rhs.Rz_ << "]" << "\n";
    return os;
}

double DOFxyRz::getRz() const {
    return Rz_;
}

void DOFxyRz::setRz(double &val) {
    Rz_ = val;
}

DOFxyRz operator+= (const CartVec2D &lhs, const CartVec2D &rhs)
{
    DOFxyRz result;
    result.vect = lhs;
    result.vect += rhs;
    return result;
}

DOFxyRz operator-= (const CartVec2D &lhs, const CartVec2D &rhs)
{
    DOFxyRz result;
    result.vect = lhs;
    result.vect -= rhs;
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

DOFxyRz operator+ (const DOFxyRz &lhs, double &rhs)
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

DOFxyRz operator- (const DOFxyRz &lhs, double &rhs)
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
