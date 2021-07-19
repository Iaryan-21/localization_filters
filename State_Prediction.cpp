#include <iosstream>
#include <math.h>
#include <tuple>

using namespace std;
tuple<double,double>  measurement_update(double mean1, double var1, double mean2, double var2)
{
  new_mean = mean1 + mean2;
  new_var = var1 + var2;
}
int main()
{
  tie(new_mean, new_var) = measurement_update(mean1,var1, mean2 var2);
  printf("[%f, %f]", new_mean, new_var );
  return 0;
}
