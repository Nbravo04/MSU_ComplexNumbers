#include <iostream>
using std::cout; using std::cin; using std::endl; using std::fixed;
#include <iomanip>
using std::setprecision;

int main() {

  //Setting Inital Values
  float d1 = 0;
  float d2 = 0;
  float d3 = 0;
  float d4 = 0;

  //User Input
  cin >> d1 >> d2 >> d3 >> d4; // Asks for 4 inputs. First and third input are real values while the second and forth are imaginary.

  //Calculations for Sum, Difference, Product, and Quotient are done below.
  cout << fixed << setprecision(2);
  float sum_r = d1+d3; //Splitting up the real value and imaginary. Then calculating the sum of both respectively.
  float sum_i = d2+d4;
  float diff_r = d1-d3; //Splitting up the real value and imaginary. Then calculating the sum of both respectively.
  float diff_i = d2-d4;
  float pro_r =(d1*d3)-(d2*d4);//Splitting the calculation up to calcualte the float valeus for real and imaginary seperately.
  float pro_i =(d2*d3)+(d1*d4);
  float quo_r = ((d1*d3)+(d2*d4))/((d3*d3)+(d4*d4));//Splitting the calculation up to calcualte the float valeus for real and imaginary seperately.
  float quo_i = ((d2*d3)-(d1*d4))/((d3*d3)+(d4*d4));

  //Print Statement
  cout << sum_r <<" + "<< sum_i <<"i"<< endl;
  cout << diff_r<<" + "<< diff_i<<"i"<< endl;
  cout << pro_r <<" + "<< pro_i <<"i"<< endl;
  cout << quo_r <<" + "<< quo_i <<"i"<< endl;

}
