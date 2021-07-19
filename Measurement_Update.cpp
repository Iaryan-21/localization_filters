#include <iosstream>
#include <math.h>
#include <tuple>

using namespace std;
tuple<double,double>  measurement_update(double mean1, double var1, double mean2, double var2)
{
  new_mean = (var2 * mean1 + var1 * mean2)/(var1 + var2);
  new_var  = (1/(1/var1 + 1/var2));
}
int main()
{
  tie(new_mean, new_var) = measurement_update(mean1,var1, mean2 var2);
  printf("[%f, %f]", new_mean, new_var );
  return 0;
}

// the var1 , var2 , mean1 and mean2 values are needed to be inserted in line13 insetad of the variables
// mean1 = mean of the prior belief
// var1 = variance of the prior belief
// mean1 = mean of the measurement
// mean2 = variance of the measurement
