#include "Rational.h"

Rational::Rational(int num = 1, int denom = 1) {
		init(num, denom);
}

void Rational::init(int num, int denom) {
	if (!denom) {
		std::cout << "Can't create a rational number with denominator 0.";
		return ;
	}

	_num = num;
	_denom = denom;
	/* todo:
	Rational::reduce(); */
}

void Rational::setNum(int num) { _num = num; }

void Rational::setDenom(int denom) {
	if (!denom) {
		cout << "Can't set the denominator as 0." << endl;
		return;
	}
	_denom = denom;
}

int Rational::getNum() const { return _num;}

int Rational::getDenom() const {return _denom;}

Rational Rational::operator+ (const Rational &r) const {
	Rational newRat(r._denom * _num + _denom * r._num, r._denom * _denom);
	Rational::reduce(newRat);
	return newRat;
}

Rational Rational::operator+ (const int r) const {
	Rational newRat(r * _denom + _num, _denom);
	Rational::reduce(newRat);
	return newRat;
}

Rational Rational::operator-(const Rational &r) const {
	Rational newRat(r._denom * _num - _denom * r._num, r._denom * _denom);
	Rational::reduce(newRat);
	return newRat;
}

Rational Rational::operator- (int r) const {
	Rational newRat(_num - r * _denom, _denom);
	Rational::reduce(newRat);
	return newRat;
}

Rational Rational::operator*(const Rational &r) const {
	Rational newRat(r._num * _num, r._denom * _denom);
	Rational::reduce(newRat);
	return newRat;
}

Rational Rational::operator*(int r) const {
	Rational newRat(r * _num, _denom);
	Rational::reduce(newRat);
	return newRat;
}

Rational Rational::operator/(const Rational &r) const {
	Rational newRat(_num / r._num, _denom / r._denom);
	Rational::reduce(newRat);
	return newRat;
}

Rational Rational::operator/(int r) const {
	Rational newRat(_num , _denom * r);
	Rational::reduce(newRat);
	return newRat;
}

Rational Rational::switchNum() const {
	Rational newRat(_denom, _num);
	Rational::reduce(newRat);
	return newRat;
}

void Rational::print() const {std::cout << _num << " / " << _denom<<endl;}

void Rational::reduce(Rational &r) {
	if (r.getDenom() % r.getNum() == 0) {
		// If the denominator can be reduced by the nominator
		r.setDenom(r.getDenom() / r.getNum());
		r.setNum(1);
	} else if (r.getNum() % r.getDenom() == 0) {
		// If the nominator can be reduced by the denominator
		r.setNum(r.getNum() / r.getDenom());
		r.setDenom(1);
		
	}
	// Else do nothing, can't reduce anymore.
}