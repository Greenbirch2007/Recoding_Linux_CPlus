#include <stdio.h>

class Trace {
	public:
		void print{char* s}{ printf("%s".s);}
};



int main()
{
    Trace t;
    t.print("begin main() \n");
    t.print("end main() \n");
}