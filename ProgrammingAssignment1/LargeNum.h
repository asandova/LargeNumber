#ifndef LARGENUM_H
#define LARGENUM_H

#include <vector>
#include <string>
#include <iostream>

using namespace std;

class LargeNum{
    private:
    string LN_Integer;
	string LN_Fraction;

    public:
        //constructors
        LargeNum();
        LargeNum(int Inum);
        LargeNum(string strNum);
        LargeNum(float fnum);

        static LargeNum pow(const LargeNum& num, int n);

        //print operator
        friend ostream& operator<<(ostream& out, LargeNum& num);

        //Arithmatic operators
        friend LargeNum operator+(const LargeNum& num1, const LargeNum& num2);
        friend LargeNum operator-(const LargeNum& num1, const LargeNum& num2);
        friend LargeNum operator*(const LargeNum& num1, const LargeNum& num2);
        friend LargeNum operator/(const LargeNum& num1, const LargeNum& num2);
        
        //boolean Operators
        friend bool operator==(const LargeNum& num1, const LargeNum& num2);
        friend bool operator<=(const LargeNum& num1, const LargeNum& num2);
        friend bool operator>=(const LargeNum& num1, const LargeNum& num2);
        friend bool operator!=(const LargeNum& num1, const LargeNum& num2);
        friend bool operator<(const LargeNum& num1, const LargeNum& num2);
        friend bool operator>(const LargeNum& num1, const LargeNum& num2);

        //conversion methods
        LargeNum toLarge(int n);
        LargeNum toLarge(float n);
        int toInt();
        float toFloat();

        void removeZeros();
        void removeTailingZeros();
        void removeLeadingZeros();
		string getInteger();
		string getFraction();
private:
		static bool validStr(string s);
};

#endif //LARGENUM_H