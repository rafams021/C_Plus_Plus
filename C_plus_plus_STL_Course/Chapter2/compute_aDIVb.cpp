// Function that computes a/b
double compute(int a, int b){
    
    //complete the code
    double ans =  double(a)/b ;
    cout<<noshowpoint<<setprecision(6);
    if(a%b == 0)  cout<<showpoint<<setprecision(2);
    return ans;
}