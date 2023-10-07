#include <iostream>


using namespace std;

class Triangle {
private:
	double m_base;
	double m_height;
public:
	Triangle(double base,double height): m_base(base), m_height(height) {}
	~Triangle() { cout << "Destructor: base: " << m_base << " height: " << m_height << endl; }
	double getBase() const {return m_base;}
	double getHeight() const{ return m_height; }
	double area() const{ return m_height * m_base * 1 / 2; }
};
int main()
{
	Triangle t1{ 10.5, 4.5 };
	const Triangle t2{ 7.0, 3.0 };

	std::cout << "Triangle t1{ 10.5, 4.5 }" << std::endl;
	std::cout << "  base: " << t1.getBase() << std::endl;
	std::cout << "  height: " << t1.getHeight() << std::endl;
	std::cout << "  area: " << t1.area() << std::endl << std::endl;

	std::cout << "const Triangle t2{ 7.0, 3.0 }" << std::endl;
	std::cout << "  base: " << t2.getBase() << std::endl;
	std::cout << "  height: " << t2.getHeight() << std::endl;
	std::cout << "  area: " << t2.area() << std::endl << std::endl;

	return 0;
}