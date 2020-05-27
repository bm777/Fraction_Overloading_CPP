#include "ZFraction.h"
#include <iostream>

ZFraction::ZFraction()
{
    _num = 0;
    _den = 1;
}
ZFraction::ZFraction(int num, int den)
{
    _num = num;
    _den = den;
}
ZFraction::ZFraction(int num)
{
    _num = num;
    _den = 1;
}
int ZFraction::num() const {return _num;}
int ZFraction::den() const {return _den;}
void ZFraction::simplify()
{
    int p = 0;
    for(int i = 1; i<=this->_num && i<=this->_den; i++)
    {
        if(this->_num%i == 0 && this->_den%i == 0)
            p = i;
    }
    this->_num = this->_num/p;
    this->_den = this->_den/p;
}
void ZFraction::show() const
{
    std::cout << this->_num << "/" << this->_den <<  std::endl;
}
ZFraction ZFraction::operator+(ZFraction const& f)
{
    ZFraction tmp;
    tmp._num = this->_num * f._den + this->_den * f._num;
    tmp._den = this->_den * f._den;
    tmp.simplify();
    return tmp;


}
ZFraction ZFraction::operator*(ZFraction const& f)
{

    ZFraction tmp;
    tmp._num = this->_num * f._num;
    tmp._den = this->_den * f._den;
    tmp.simplify();
    return tmp;
}
bool ZFraction::operator<(ZFraction const& f) const
{
    if((this->_num*f._den) < (f._num*this->_den))
        return true;
    else
        return false;
}
bool ZFraction::operator==(ZFraction const& f) const
{
    if((this->_num*f._den) == (f._num*this->_den))
        return true;
    else
        return false;
}
std::ostream& operator<<(std::ostream& flux, const ZFraction& f)
{
    //return f.look(flux);

    return flux << f.num() << '/' << f.den();
}
std::ostream& ZFraction::look(std::ostream& flux) const
{
    flux << _num << '/' << _den;
    return flux;
}
