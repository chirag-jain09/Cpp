#include<iostream>
#include<limits>
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

    return 0;
}