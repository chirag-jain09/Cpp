#include<iostream>
using namespace std;

/*                                                             
int main(){
    char value = 65;
    cout<<"value = "<<value<<endl;
    cout<<"value(int): "<<static_cast<int>(value)<<endl;
    return 0;
}
*/

//static_cast is a type conversion operator that allows you to explicitly convert a value from one type to another. It is primarily
//used for safe and explicit type conversions, especially when the compiler cannot implicitly perform the conversion.

// use of auto

//The auto keyword in C++ is a type deduction mechanism that allows the compiler to automatically infer the data type of a variable // based on its initializer expression. 

int main(){         
auto var1 {12};
auto var2 {13.0};
auto var3 {12.43f};
auto var4 {123.42l};
auto var5 {'e'};

auto var6 {123u};
auto var7 {123ul};
auto var8 {123ll};

cout<< "value occupies "<<sizeof(var1)<<" bytes"<<endl;
cout<< "value occupies "<<sizeof(var2)<<" bytes"<<endl;
cout<< "value occupies "<<sizeof(var3)<<" bytes"<<endl;
cout<< "value occupies "<<sizeof(var4)<<" bytes"<<endl;
cout<< "value occupies "<<sizeof(var5)<<" bytes"<<endl;
cout<< "value occupies "<<sizeof(var6)<<" bytes"<<endl;
cout<< "value occupies "<<sizeof(var7)<<" bytes"<<endl;
cout<< "value occupies "<<sizeof(var8)<<" bytes"<<endl;
return 0;
}