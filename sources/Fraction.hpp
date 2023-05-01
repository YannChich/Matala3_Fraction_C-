#pragma once
#include <iostream>
using namespace std;

namespace ariel {
class Fraction
{
private:
// Data for a franction of Integer
    int numerator;
    int denominator;
    
public:
// Constructor
    //Default
    explicit Fraction();
    //Parameterized
    explicit Fraction(int n,int d);
    //Copy
    explicit Fraction(Fraction& other);

// Getter and Setter
    int Get_Num(){ return this->numerator;}
    int Get_Den(){ return this->denominator;}
    void Set_Num(int n){ this->numerator = n;}
    void Set_Den(int n){ this->denominator = n;}

//Overloading of Operators
    // operator : [+] f1+f2 / f1+number / number+f1
    const Fraction operator+(const Fraction f2) const;
    const Fraction operator+(const int number) const;
    friend const Fraction operator+(const double num,const Fraction f2);

    // operator : [-] f1-f2 / f1-number / number-f1
    const Fraction operator-(const Fraction f2) const;
    const Fraction operator-(const int number) const;
    friend const Fraction operator-(const double num,const Fraction f2);

    // operator : [*] f1*f2 / f1*number / number*f1
    const Fraction operator*(const Fraction f2) const;
    const Fraction operator*(const int number) const;
    friend const Fraction operator*(const double num,const Fraction f2);

    // operator : [/] f1/f2 ; f1/number ; number/f1
    const Fraction operator/(const Fraction f2) const;
    const Fraction operator/(const int number) const;
    friend const Fraction operator/(const double num,const Fraction f2);

    // operator : [==]  f1==f2
    friend bool operator==(const Fraction& f1, const Fraction& f2);

    // operator : [>] f1 > f2 / f1 > number / number > f1
    const bool operator>(const Fraction f2) const;
    const bool operator>(const int number) const;
    friend const bool operator>(const double num,const Fraction f2);

    // operator : [>=] f1 >= f2 / f1 >= number / number >= f1
    const bool operator>=(const Fraction f2) const;
    const bool operator>=(const int number) const;
    friend const bool operator>=(const double num,const Fraction f2);

    // operator : [<] f1 < f2 / f1 < number / number < f1
    const bool operator<(Fraction f2) const;
    const bool operator<(int number) const;
    friend const bool operator<(const double num,const Fraction f2);    

    // operator : [<=] f1 <= f2 / f1 <= number / number <= f1
    const bool operator<=(const Fraction f2) const;
    const bool operator<=(const int number) const;
    friend const bool operator<=(const double num,const Fraction f2);

    // operator : ++ 
        // prefix
    Fraction& operator++();
        //postfix
    const Fraction operator++(int flag);

    // operator : --
        // prefix
    Fraction& operator--();
        //postfix
    const Fraction operator--(int flag);

    // IO operator : friend methods
        // <<
    friend ostream& operator<<(ostream& output,const Fraction& f);
        // >>
    friend ostream& operator>>(istream& input, Fraction& f);


};
}