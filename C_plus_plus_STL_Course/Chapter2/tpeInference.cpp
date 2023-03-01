// Function that Given one variable a, it can be of any datatype like int, long, 
// double, etc. You have been given a fun() function with variable 'a' as parameter. 
// You have to print its type id name.
void fun(auto a){
    cout << typeid(a).name();
}