// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// tableRcpp
IntegerVector tableRcpp(SEXP x);
RcppExport SEXP _CKutils_tableRcpp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(tableRcpp(x));
    return rcpp_result_gen;
END_RCPP
}
// counts
IntegerVector counts(SEXP x);
RcppExport SEXP _CKutils_counts(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(counts(x));
    return rcpp_result_gen;
END_RCPP
}
// fquantile
NumericVector fquantile(NumericVector x, NumericVector probs, bool na_rm);
RcppExport SEXP _CKutils_fquantile(SEXP xSEXP, SEXP probsSEXP, SEXP na_rmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type probs(probsSEXP);
    Rcpp::traits::input_parameter< bool >::type na_rm(na_rmSEXP);
    rcpp_result_gen = Rcpp::wrap(fquantile(x, probs, na_rm));
    return rcpp_result_gen;
END_RCPP
}
// count_if
int count_if(LogicalVector x, bool na_rm);
RcppExport SEXP _CKutils_count_if(SEXP xSEXP, SEXP na_rmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type na_rm(na_rmSEXP);
    rcpp_result_gen = Rcpp::wrap(count_if(x, na_rm));
    return rcpp_result_gen;
END_RCPP
}
// prop_if
double prop_if(LogicalVector x, bool na_rm);
RcppExport SEXP _CKutils_prop_if(SEXP xSEXP, SEXP na_rmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type na_rm(na_rmSEXP);
    rcpp_result_gen = Rcpp::wrap(prop_if(x, na_rm));
    return rcpp_result_gen;
END_RCPP
}
// clamp
NumericVector clamp(NumericVector& x, double a, double b, const bool& inplace);
RcppExport SEXP _CKutils_clamp(SEXP xSEXP, SEXP aSEXP, SEXP bSEXP, SEXP inplaceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    Rcpp::traits::input_parameter< const bool& >::type inplace(inplaceSEXP);
    rcpp_result_gen = Rcpp::wrap(clamp(x, a, b, inplace));
    return rcpp_result_gen;
END_RCPP
}
// clamp_int
IntegerVector clamp_int(IntegerVector& x, int a, int b, const bool& inplace);
RcppExport SEXP _CKutils_clamp_int(SEXP xSEXP, SEXP aSEXP, SEXP bSEXP, SEXP inplaceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type b(bSEXP);
    Rcpp::traits::input_parameter< const bool& >::type inplace(inplaceSEXP);
    rcpp_result_gen = Rcpp::wrap(clamp_int(x, a, b, inplace));
    return rcpp_result_gen;
END_RCPP
}
// fequal
LogicalVector fequal(const NumericVector& x, const double& tol);
RcppExport SEXP _CKutils_fequal(SEXP xSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const double& >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(fequal(x, tol));
    return rcpp_result_gen;
END_RCPP
}
// fnormalise
NumericVector fnormalise(const NumericVector& x);
RcppExport SEXP _CKutils_fnormalise(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(fnormalise(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_CKutils_tableRcpp", (DL_FUNC) &_CKutils_tableRcpp, 1},
    {"_CKutils_counts", (DL_FUNC) &_CKutils_counts, 1},
    {"_CKutils_fquantile", (DL_FUNC) &_CKutils_fquantile, 3},
    {"_CKutils_count_if", (DL_FUNC) &_CKutils_count_if, 2},
    {"_CKutils_prop_if", (DL_FUNC) &_CKutils_prop_if, 2},
    {"_CKutils_clamp", (DL_FUNC) &_CKutils_clamp, 4},
    {"_CKutils_clamp_int", (DL_FUNC) &_CKutils_clamp_int, 4},
    {"_CKutils_fequal", (DL_FUNC) &_CKutils_fequal, 2},
    {"_CKutils_fnormalise", (DL_FUNC) &_CKutils_fnormalise, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_CKutils(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
