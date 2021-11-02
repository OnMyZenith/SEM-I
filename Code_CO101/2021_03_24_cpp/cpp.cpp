#include <iostream>
using namespace std;
class complex
{
    float rp;
    float ip;
    public:
    void initialize(float a, float b)
    {
        rp=a;
        ip=b;
    }
    void display()
    {
        cout<<"("<<rp<<")+i("<<ip<<")"<<endl;
    }
    complex add(complex C2)
    {
    	complex C;
    	C.rp=rp+C2.rp;
    	C.ip=ip+C2.ip;
    	return(C);
	}
	complex operator+(complex C2)//operator overloading
	{
		complex C;
		C.rp=rp+C2.rp;
		C.ip=ip+C2.ip;
		return(C);
	}
};
main()
{
    complex C1,C2,C3;
    C1.initialize(5.5,6.9);
    C2.initialize(2.7,8.98);
	//C3=C1.add(C2);
	C3=C1+C2;
	C1.display();
	C2.display();
	C3.display();
}
