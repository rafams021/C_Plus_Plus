// Function that prints output a/b and decimal precision of a/b upto 3 places after the decimal point
void precise(float a, float b)
{
    cout<<a/b<<" ";
    cout<<fixed<<setprecision(3)<<a/b;
}