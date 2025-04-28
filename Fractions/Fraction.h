#pragma once

namespace mathlib 
{
	template<typename T>
	class Fraction
	{
	public:
		Fraction() = default;
		// Constructors
		Fraction(T numerator = 0, T denominator = 1) {			
			numerator_ = numerator;
			denominator_ = denominator;
			Simplify();
		}
		// Accessors
		int getNumerator() const {
			return numerator_;
		}
		int getDenominator() const {
			return denominator_;
		}
		
		// Add: a/b + c/d = (a*d + b*c)/(b*d)
		// Sub: a/b - c/d = (a*d - b*c)/(b*d)
		// Mult: (a/b) * (c/d) = (a*c)/(b*d)
		// Divi: (a/b) / (c/d) = (a*d)/(b*c)

		Fraction operator + (const Fraction& other) {
			return Fraction(numerator_ * other.denominator_
				+ denominator_ * other.numerator_)
				/ (denominator_ * other.denominator_);
		}
		Fraction operator - (const Fraction& other) {
			return Fraction(numerator_ * other.denominator_
				- denominator_ * other.numerator_)
				/ (denominator_ * other.denominator_);
		}
		Fraction operator * (const Fraction& other) {
			return Fraction((numerator_ * other.numerator_)
				/ (denominator_ * other.denominator_));
		}
		Fraction operator / (const Fraction& other) {
			return Fraction((numerator_ * other.denominator_)
				/ (denominator_ * other.numerator_));
		}
		// Comparison operators
		bool operator==(const Fraction& other) const {
			return (numerator_ == other.numerator_) && (denominator_ == other.denominator_);
		}
		bool operator!=(const Fraction& other) const {
			return !(*this == other);
		}
		bool operator<(const Fraction& other) const {
			return (numerator_ * other.denominator_) < (other.numerator_ * denominator_);
		}
		bool operator<=(const Fraction& other) const {
			return (numerator_ * other.denominator_) <= (other.numerator_ * denominator_);
		}
		bool operator>(const Fraction& other) const {
			return (numerator_ * other.denominator_) > (other.numerator_ * denominator_);
		}
		bool operator>=(const Fraction& other) const {
			return (numerator_ * other.denominator_) >= (other.numerator_ * denominator_);
		}

		void Simplify() {
			if (denominator_ == 0) {
				throw std::invalid_argument("Denominator cannot be zero.");
			}
			T gcd = GCD(numerator_, denominator_);
			numerator_ /= gcd;
			denominator_ /= gcd;
		}

		friend std::ostream& operator << (std::ostream& output, const Fraction& fraction) {
			output << fraction.numerator_ << "/" << fraction.denominator_;
			return output;
		}

		friend std::istream& operator >> (std::istream& input, Fraction& fraction) {
			input >> fraction.numerator_;
			input.ignore(1); // Ignore the '/' character
			input >> fraction.denominator_;
			return input;
		}

		static T GCD(T a, T b) {
			while (b != 0) {
				T temp = b;
				b = a % b;
				a = temp;
			}
			return a;
		}
	private:
		T numerator_;
		T denominator_;
	};
}