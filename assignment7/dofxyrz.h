#ifndef DOFXYRZ_H
#define DOFXYRZ_H

#include "cartvec2d.h"

class DOFxyRz
{
    friend std::ostream& operator<<(std::ostream &os, const DOFxyRz &rhs);
    friend DOFxyRz operator+=(const CartVec2D &lhs, const CartVec2D &rhs);
    friend DOFxyRz operator-=(const CartVec2D &lhs, const CartVec2D &rhs);
    friend DOFxyRz operator+ (const DOFxyRz &lhs, const CartVec2D &rhs);
    friend DOFxyRz operator- (const DOFxyRz &lhs, const CartVec2D &rhs);
    friend DOFxyRz operator+ (const DOFxyRz &lhs, double &rhs);
    friend DOFxyRz operator- (const DOFxyRz &lhs, double &rhs);
public:
    CartVec2D vect;
    DOFxyRz(double x, double y, double Rz): Rz_(Rz) {vect.setCartVec2D(x, y);}
    DOFxyRz(): DOFxyRz(0.0, 0.0, 0.0) {}
    /// Using C++11 ctor delegation for the default ctor.
    CartVec2D heading()const;
    void setRz(double &val);
    double getRz() const;
private:
    double Rz_;
};

#endif // DOFXYRZ_H
