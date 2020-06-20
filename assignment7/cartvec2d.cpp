#include "cartvec2d.h"

void CartVec2D::setCartVec2D(double &x, double &y) {
    x_ = x;
    y_ = y;
}

double CartVec2D::getCartVec2Dx() const {
    return x_;
}

double CartVec2D::getCartVec2Dy() const {
    return y_;
}

std::ostream& operator<< (std::ostream &os, const CartVec2D &rhs)
{
    os << "[" << rhs.x_ << "," << rhs.y_ << "[" << "\n";
    return os;
}

CartVec2D &CartVec2D::operator+= (const CartVec2D &rhs)
{
    x_ += rhs.x_;
    y_ += rhs.y_;
    return *this;
}

CartVec2D &CartVec2D::operator-= (const CartVec2D &rhs)
{
    x_ -= rhs.x_;
    y_ -= rhs.y_;
    return *this;
}

CartVec2D operator+ (const CartVec2D &lhs, const CartVec2D &rhs)
{
    CartVec2D result;
    result += lhs;
    result += rhs;
    return result;
}

CartVec2D operator- (const CartVec2D &lhs, const CartVec2D &rhs)
{
    CartVec2D result;
    result -= lhs;
    result -= rhs;
    return result;
}

CartVec2D operator- (const CartVec2D &rhs)
{
    CartVec2D result;
    result.operator -=(rhs);
    return result;
}

CartVec2D operator* (double scalar, const CartVec2D &lhs)
{
    CartVec2D result;
    result = lhs;
    result.x_ = result.x_*scalar;
    result.y_ = result.y_*scalar;
    return result;
}

CartVec2D operator* (const CartVec2D &rhs, double scalar)
{
    CartVec2D result;
    result = rhs;
    result.x_ = result.x_*scalar;
    result.y_ = result.y_*scalar;
    return result;
}
