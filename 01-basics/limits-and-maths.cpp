#include<iostream>
#include<limits>
#include<cmath>

int main(){

    std::cout << "the range for short is from " << std::numeric_limits<short>::min() << " to " << std::numeric_limits<short>::max() << std::endl;       
    // -32768 to 32767

    std::cout << "the range for unsigned short is from " << std::numeric_limits<unsigned short>::min() << " to " << std::numeric_limits<unsigned short>::max() << std::endl;        
    // 0 to 65535       

    std::cout << "the range for int is from " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << std::endl;         
    // -2147483648 to 2147483647     
    
    std::cout << "the range for unsigned int is from " << std::numeric_limits<unsigned int>::min() << " to " << std::numeric_limits<unsigned int>::max() << std::endl;      
    // 0 to 4294967295     

    std::cout << "the range for long is from " << std::numeric_limits<long>::min() << " to " << std::numeric_limits<long>::max() << std::endl;      
    // -2147483648 to 2147483647

    std::cout << "the range for float is from " << std::numeric_limits<float>::min() << " to " << std::numeric_limits<float>::max() << std::endl;       
    // 1.17549e-038 to 3.40282e+038

    std::cout << "the range (with lowest) for float is from " << std::numeric_limits<float>::lowest() << " to " << std::numeric_limits<float>::max() << std::endl;      
    // -3.40282e+038 to 3.40282e+038

    std::cout << "the range (with lowest) for double is from " << std::numeric_limits<double>::lowest() << " to " << std::numeric_limits<double>::max() << std::endl;       
    // -1.79769e+308 to 1.79769e+308

    std::cout << "the range (with lowest) for long double is from " << std::numeric_limits<long double>::lowest() << " to " << std::numeric_limits<long double>::max() << std::endl;        
    // -1.18973e+4932 to 1.18973e+4932

    // ++++++++++++++++++++++++++++++++++++++ //

// MATH FUNCTIONS

    // to round the value to the upper bound we use ceil
    std::cout << std::endl;

    double num1 {-4324.438};
    std::cout << "the value after the use of ceil function is: " << std::ceil(num1) << std::endl;       // -4324

    // to round the value to the lower bound we use floor
    double num2 {-432.438};
    std::cout << "the value after the use of floor function is: " << std::floor(num2) << std::endl;       // -433

    std::cout << std::endl;
    // to use the modulas function of maths, we use the abs function 
    double num3 {-500};
    std::cout << "the value after the use of abs function is: " << std::abs(num3) << std::endl;

    // use of the exponential function (exp : f(x) = e ^ x, where e = 2.71828)
    double num4 = std::exp(10);
    std::cout << "the value after the use of exponential function is: "<< num4 << std::endl;

    std::cout << std::endl;
    // use of the pow function
    std::cout << "the value of 3 ^ 4 is: "<< std::pow(3,4) << std::endl;
    std::cout << "the value of 9 ^ 3 is: " << std::pow(9, 3) << std::endl; 
    
    // use of log function
    // log function is the reverse of the power function
    std::cout << "log: to get 54.59, we would elevate e to the power of: " << std::ceil(std::log(54.59))<< std::endl;       // we get 4 since we are using the ceil function
    std::cout << "log: to get 1000, we would elevate 10 to the power of: " << std::ceil(std::log10(1000))<< std::endl;       // we get 4 since we are using the ceil function
    std::cout << std::endl;

    // use of the round function to round of the value
    std::cout << "3.654 rounded to: " << std::round(3.654) << std::endl;        // 4
    std::cout << "2.5 rounded to: " << std::round(2.5) << std::endl;            // 3
    std::cout << "2.4 rounded to: " << std::round(2.4) << std::endl;            // 2

    std::cout << std::endl;

    // use of the sqrt function to calculate the square root of any number
    std::cout << "the square root of 81 is: " << std::sqrt(81) << std::endl; 

    // trigonometric functions
    // we use sin, cos, tan, asin, acos, atan 
    return 0;
}