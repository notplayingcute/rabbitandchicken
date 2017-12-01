#include <Rcpp.h>
using namespace Rcpp;
using namespace std;

// This is a simple example of exporting a C++ function to R. You can
// source this function into an R session using the Rcpp::sourceCpp 
// function (or via the Source button on the editor toolbar). Learn
// more about Rcpp at:
//
//   http://www.rcpp.org/
//   http://adv-r.had.co.nz/Rcpp.html
//   http://gallery.rcpp.org/
//

// [[Rcpp::export]]
RcppExport SEXP rac(SEXP X, SEXP Y)
{
  double x  = Rcpp::as<double>(X);
  double y  = Rcpp::as<double>(Y);
  double t = 2*x;
  double z = (y-t)/2;
  return (wrap(z));
}

