#ifndef CARTVEC2D_H
#define CARTVEC2D_H
#include <iostream>

/// CartVec2d represents a 2D Cartesian vector.
class CartVec2D
{
    friend std::ostream& operator<<(std::ostream &os, const CartVec2D &rhs);
    friend CartVec2D operator+(const CartVec2D &lhs, const CartVec2D &rhs);
    friend CartVec2D operator-(const CartVec2D &lhs, const CartVec2D &rhs);
    friend CartVec2D operator- (const CartVec2D &rhs);
    friend CartVec2D operator* (double scalar, const CartVec2D &lhs);
    friend CartVec2D operator* (const CartVec2D &rhs, double scalar);
public:
    CartVec2D(double x, double y): x_(x), y_(y) {}
        /// Using C++11 ctor delegation for the default ctor.
        CartVec2D(): CartVec2D(0.0, 0.0){}
    /// Default copy ctor.
    CartVec2D(const CartVec2D &other) = default;
    /// Default assignment operator.
    CartVec2D& operator=(const CartVec2D &other) = default;
    /// Default dtor.
    ~CartVec2D() = default;
    // += and -= operators are class member functions.
    CartVec2D &operator+=(const CartVec2D &rhs);
    CartVec2D &operator-=(const CartVec2D &rhs);
    /// Magnitude of vector.
    double length() const;
    void setCartVec2D(double &x, double &y);
    double getCartVec2Dx() const;
    double getCartVec2Dy() const;
    private:
    double x_;
    double y_;
    };

#endif // CARTVEC2D_H
