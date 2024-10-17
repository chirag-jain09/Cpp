// output formatting
 #include<ios>
 #include<iomanip>
 #include<iostream>

/*  
1. std::flush -> causes immediate sending of data to the device connected to the stream
2. std::setw() -> helps to format data in the form of a table. The parameter to be passed is the width as in the number of characters
   also we can initialise the width using a variable and then use the variable name instead. But we have to first justify the data (std::right or std::left)
3. std::setfill() -> to fill the spaces with the set character
4. std::boolalpha or std::noboolalpha-> controls the bool output i.e. true/false or 1/0
5. std::showpos or std::noshowpos -> shows or hide the + sign for positive numbers
6. std::dec or std::oct or std::hex -> shows the data in different number systems . ** Note that this cannot represent float or double in different number systems
7. std::showbase or std::noshowbase -> shows the base of the integral types
8. std::uppercase or std::lowercase
9. std::fixed -> force to show the data in its original datatype
10. std::precision() -> the number of digits printed out for a floating point (default is 6)
*/

int main(){
    // use of std::flush
    std::cout<<"This is a flush message..."<< std::endl << std::flush;

    // use of setw()
    std::cout<< std::endl;

    std::cout << "Formatted table : " << std::endl;

    int col_width(14);
    
    std::cout << std::setw(col_width) <<  "Lastname"  << std::setw(col_width) << "Firstname" << std::setw(5) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel"  << std::setw(col_width) << "Gray" << std::setw(5) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width)  << "Woods" << std::setw(5) <<  "33" << std::endl;
    std::cout << std::setw(col_width) <<  "Jordan" << std::setw(col_width)  << "Parker" << std::setw(5) << "45" << std::endl;
    std::cout << std::setw(col_width) <<  "Joe" << std::setw(col_width) << "Ball" << std::setw(5) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(5) <<"27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(5) << "29" << std::endl;
    
    // default is right justified
    // left justified

    std::cout << std:: endl;
    std::cout << "Left justified table : " << std::endl;

    col_width = 20;

    std::cout<< std::left;
    std::cout << std::setw(col_width) <<  "Lastname"  << std::setw(col_width) << "Firstname" << std::setw(5) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel"  << std::setw(col_width) << "Gray" << std::setw(5) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width)  << "Woods" << std::setw(5) <<  "33" << std::endl;
    
    // use of setfill()
    std::cout<<std::endl;

    col_width = 20;
    std::cout<<std::left;
    std::cout<<std::setfill('-');   // the fill character
    std::cout << std::setw(col_width) <<  "Lastname"  << std::setw(col_width) << "Firstname" << std::setw(5) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel"  << std::setw(col_width) << "Gray" << std::setw(5) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width)  << "Woods" << std::setw(5) <<  "33" << std::endl;
    
    // use of std::boolalpha 
    std::cout<< std::endl;

    bool condition {true};
    bool other_condition {false};

    std::cout<<std::endl;
    std::cout << std::boolalpha;
    std::cout<< "condition : " << condition << std::endl;                  // true
    std::cout << "other condition is : "<< other_condition << std::endl;   // false

    std::cout<<std::endl;
    std::cout << std::noboolalpha;
    std::cout<< "condition : " << condition << std::endl;                   // 1
    std::cout << "other condition is : "<< other_condition << std::endl;    // 0
    
    // use of std::dec or std::oct or std::hex

    std::cout << std::endl;
    int num1 = {2343};
    int num2 = {-2311};

    std::cout<< "num1 in decimal number system : "<< std::dec<< num1 << std::endl;
    std::cout<< "num1 in octal number system : "<< std::oct<< num1 << std::endl;
    std::cout<< "num1 in hexadecimal number system : "<< std::hex<< num1 << std::endl;

    std::cout<< std::endl;
    std::cout<< "num2 in decimal number system : "<< std::dec<< num2 << std::endl;
    std::cout<< "num2 in octal number system : "<< std::oct<< num2 << std::endl;
    std::cout<< "num2 in hexadecimal number system : "<< std::hex<< num2 << std::endl;
    
    // use of setprecision()

    std::cout << std::endl;

    double a;
    a = 283.38943892938958223234328783322134;
    std::cout<<"a (default precision (6)) : " << a << std::endl;
    std::cout << std::setprecision(10);
    std::cout<<"a (precision (10)) : " << a << std::endl;
    std::cout << std::setprecision(20);
    std::cout << "a (precision (20)) : " << a << std::endl;

    // if the precision is bigger than the type it is going to print garbage value
    
    return 0;
}