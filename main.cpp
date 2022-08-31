/* 10 LET P = 3.1416

20 LET r = 2

30 LET x = 50

40 GOTO 140

50 LET r = 6

60 LET x = 80

70 GOTO 140

80 LET r = 11

90 LET x = 110

100 GOTO 140

110 END

140 LET c = r * 2 * P

150 PRINT "circumference of circle with radius "; r; " is "; c

160 GOTO x  */

#include <iostream>
using namespace std;

int main(){
    int p;
	int r;
	int x;
	int c;

	p = 3.14;
	r = 2;
	x = 50;

	c = r * 2 * p;
	cout << "circumference of circle with radius" << " is " << c << endl;
}

