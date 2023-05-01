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
    explicit Fraction(int num,int den);
    //Copy
    explicit Fraction(Fraction& other);

// Getter and Setter
    int Get_Num() const{ return this->numerator;}
    int Get_Den() const{ return this->denominator;}
    void Set_Num(int n){ this->numerator = n;}
    void Set_Den(int n){ this->denominator = n;}

//Overloading of Operators
    // operator : [+] f1+f2 / f1+number / number+f1
    const Fraction operator+(const Fraction fon2) const;
    const Fraction operator+(const int number) const;
    friend const Fraction operator+(const double num,const Fraction fon);

    // operator : [-] f1-f2 / f1-number / number-f1
    const Fraction operator-(const Fraction fon2) const;
    const Fraction operator-(const int number) const;
    friend const Fraction operator-(const double num,const Fraction fon);

    // operator : [*] f1*f2 / f1*number / number*f1
    const Fraction operator*(const Fraction fon2) const;
    const Fraction operator*(const int number) const;
    friend const Fraction operator*(const double num,const Fraction fon);

    // operator : [/] f1/f2 ; f1/number ; number/f1
    const Fraction operator/(const Fraction fon2) const;
    const Fraction operator/(const int number) const;
    friend const Fraction operator/(const double num,const Fraction fon);

    // operator : [==]  f1==f2
    friend bool operator==(const Fraction& fon1, const Fraction& fon2);

    // operator : [>] f1 > f2 / f1 > number / number > f1
    const bool operator>(const Fraction fon2) const;
    const bool operator>(const int number) const;
    friend const bool operator>(const double num,const Fraction fon1);

    // operator : [>=] f1 >= f2 / f1 >= number / number >= f1
    const bool operator>=(const Fraction fon2) const;
    const bool operator>=(const int number) const;
    friend const bool operator>=(const double num,const Fraction fon1);

    // operator : [<] f1 < f2 / f1 < number / number < f1
    const bool operator<(Fraction fon2) const;
    const bool operator<(int number) const;
    friend const bool operator<(const double num,const Fraction fon1);    

    // operator : [<=] f1 <= f2 / f1 <= number / number <= f1
    const bool operator<=(const Fraction fon2) const;
    const bool operator<=(const int number) const;
    friend const bool operator<=(const double num,const Fraction fon1);

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
    friend ostream& operator<<(ostream& output,const Fraction& fonc);
        // >>
    friend ostream& operator>>(istream& input, Fraction& fonc);


};
}