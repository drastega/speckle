// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// middle_frame
NumericMatrix middle_frame(String filename, NumericMatrix subtrahend, std::size_t threshold);
RcppExport SEXP _specklestar_middle_frame(SEXP filenameSEXP, SEXP subtrahendSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type subtrahend(subtrahendSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type threshold(thresholdSEXP);
    rcpp_result_gen = Rcpp::wrap(middle_frame(filename, subtrahend, threshold));
    return rcpp_result_gen;
END_RCPP
}
// ps_diff
NumericVector ps_diff(String filename, std::size_t threshold);
RcppExport SEXP _specklestar_ps_diff(SEXP filenameSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type threshold(thresholdSEXP);
    rcpp_result_gen = Rcpp::wrap(ps_diff(filename, threshold));
    return rcpp_result_gen;
END_RCPP
}
// ps
NumericVector ps(String filename, NumericMatrix dark, NumericMatrix flat, std::size_t threshold);
RcppExport SEXP _specklestar_ps(SEXP filenameSEXP, SEXP darkSEXP, SEXP flatSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type dark(darkSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type flat(flatSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type threshold(thresholdSEXP);
    rcpp_result_gen = Rcpp::wrap(ps(filename, dark, flat, threshold));
    return rcpp_result_gen;
END_RCPP
}
// speckle_acf
NumericVector speckle_acf(NumericMatrix ps);
RcppExport SEXP _specklestar_speckle_acf(SEXP psSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type ps(psSEXP);
    rcpp_result_gen = Rcpp::wrap(speckle_acf(ps));
    return rcpp_result_gen;
END_RCPP
}
// speckle_generator
NumericVector speckle_generator(double seeing, double speckle_sigma, double m1, double m2, double rho_x, double rho_y, double wind);
RcppExport SEXP _specklestar_speckle_generator(SEXP seeingSEXP, SEXP speckle_sigmaSEXP, SEXP m1SEXP, SEXP m2SEXP, SEXP rho_xSEXP, SEXP rho_ySEXP, SEXP windSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type seeing(seeingSEXP);
    Rcpp::traits::input_parameter< double >::type speckle_sigma(speckle_sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type m1(m1SEXP);
    Rcpp::traits::input_parameter< double >::type m2(m2SEXP);
    Rcpp::traits::input_parameter< double >::type rho_x(rho_xSEXP);
    Rcpp::traits::input_parameter< double >::type rho_y(rho_ySEXP);
    Rcpp::traits::input_parameter< double >::type wind(windSEXP);
    rcpp_result_gen = Rcpp::wrap(speckle_generator(seeing, speckle_sigma, m1, m2, rho_x, rho_y, wind));
    return rcpp_result_gen;
END_RCPP
}
// speckle_stat
List speckle_stat(String filename, std::size_t threshold);
RcppExport SEXP _specklestar_speckle_stat(SEXP filenameSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type threshold(thresholdSEXP);
    rcpp_result_gen = Rcpp::wrap(speckle_stat(filename, threshold));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_specklestar_middle_frame", (DL_FUNC) &_specklestar_middle_frame, 3},
    {"_specklestar_ps_diff", (DL_FUNC) &_specklestar_ps_diff, 2},
    {"_specklestar_ps", (DL_FUNC) &_specklestar_ps, 4},
    {"_specklestar_speckle_acf", (DL_FUNC) &_specklestar_speckle_acf, 1},
    {"_specklestar_speckle_generator", (DL_FUNC) &_specklestar_speckle_generator, 7},
    {"_specklestar_speckle_stat", (DL_FUNC) &_specklestar_speckle_stat, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_specklestar(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
