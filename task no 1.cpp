#include <iostream>
template<class A>
A add(A a, A b)
{
	return a + b;
}
template<class R>
R mul(R c, R d)
{
	return c * d;
}
	int main()
{
		std::cout << add<int>(20, 23) <<std::endl;
	std::cout << add<float>(3.8, 8.0)<<std::endl;
	std::cout << add<double>(3.47, 9.43)<<std::endl;
	std::cout << mul<int>(2, 3)<<std::endl;
    std::cout << mul<float>(2.4, 3.8)<< std::endl;
	std::cout << mul<double>(22.3, 30.9)<< std::endl;
}

