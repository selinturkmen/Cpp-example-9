#include <iostream>
using namespace std;
#include "Complex.h"
Complex::Complex(double real, double imaginary)
{
setComplexNumber(real, imaginary);
}
Complex Complex::add(const Complex &right)
{

int a=realPart;
int b=imaginaryPart;
int c=right.realPart;
int d=right.imaginaryPart;
int realP=(a + c);
int imgP=(b+d);
Complex comp(realP,imgP);

return comp;

}
Complex Complex::subtract(const Complex &right)
{
int a=realPart;
int b=imaginaryPart;
int c=right.realPart;
int d=right.imaginaryPart;
int realP=(a - c);
int imgP=(b-d);
Complex comp(realP,imgP);
return comp;
}
void Complex::printComplex()
{
cout << '(' << realPart << "," << imaginaryPart << ')';
}
void Complex::setComplexNumber(double rp, double ip)
{
realPart = rp;
imaginaryPart = ip;
}
Complex::Complex()
{

}
