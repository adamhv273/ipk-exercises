#include <iostream>
#include <cmath>

int main (){
    
    double a;
    std::cout << "a = " << std::flush; 
    std::cin >> a;

    double b;
    std::cout << "b = " << std::flush; 
    std::cin >> b;

    double c;
    std::cout << "c = " << std::flush; 
    std::cin >> c;

    

    if (a == 0 && b == 0)
    {
        std::cout << "lösung zu schwer" << std::endl;
        return -1;
    }

    double unterwurzel = b*b - 4*a*c;

    if (unterwurzel < 0)
    {
        std::cout << "lösung zu komplex" << std::endl;
        return -1;
    }  
        else if(unterwurzel == 0)
        {
        double sol = (-b)/(2.0*a);
		std::cout << "Solution is " << sol << std::endl;
		return 1;
        }

        else {
		double sol1, sol2;
		sol1 = (-b + std::sqrt(unterwurzel))/(2.0*a);
		sol2 = (-b - std::sqrt(unterwurzel))/(2.0*a);
		std::cout << "lösung ist " << sol1 << " und " << sol2 << std::endl;
		return 0;
	}
	
	return 0;
    
}