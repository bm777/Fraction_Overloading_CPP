#ifndef ZFRACTION_H_INCLUDED
#define ZFRACTION_H_INCLUDED
#include <iostream>
//#include <ostream>

class ZFraction
{
    int _num;
    int _den;
    public:
        ZFraction();
        ZFraction(int num, int den);
        ZFraction(int num);
        int num() const;
        int den() const;
        void simplify(); //calulate the pgcd
        void show() const;
        ZFraction operator+(ZFraction const& f);
        ZFraction operator*(ZFraction const& f);
        bool operator<(ZFraction const& f) const;
        bool operator==(ZFraction const& f) const;


        std::ostream& look(std::ostream& flux) const;

};
//std::ostream& ZFraction::look(std::ostream& flux) const
std::ostream& operator<<(std::ostream& flux, const ZFraction& f);

#endif // ZFRACTION_H_INCLUDED
