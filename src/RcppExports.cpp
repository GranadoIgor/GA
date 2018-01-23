// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// rank_asR
IntegerVector rank_asR(NumericVector x, bool decreasing);
RcppExport SEXP _GA_rank_asR(SEXP xSEXP, SEXP decreasingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type decreasing(decreasingSEXP);
    rcpp_result_gen = Rcpp::wrap(rank_asR(x, decreasing));
    return rcpp_result_gen;
END_RCPP
}
// which_asR
IntegerVector which_asR(LogicalVector x);
RcppExport SEXP _GA_which_asR(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(which_asR(x));
    return rcpp_result_gen;
END_RCPP
}
// c_int
IntegerVector c_int(IntegerVector x, IntegerVector y);
RcppExport SEXP _GA_c_int(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(c_int(x, y));
    return rcpp_result_gen;
END_RCPP
}
// c_double
NumericVector c_double(NumericVector x, NumericVector y);
RcppExport SEXP _GA_c_double(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(c_double(x, y));
    return rcpp_result_gen;
END_RCPP
}
// setdiff_asR
IntegerVector setdiff_asR(IntegerVector x, IntegerVector y);
RcppExport SEXP _GA_setdiff_asR(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(setdiff_asR(x, y));
    return rcpp_result_gen;
END_RCPP
}
// intersect_asR
IntegerVector intersect_asR(IntegerVector x, IntegerVector y);
RcppExport SEXP _GA_intersect_asR(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(intersect_asR(x, y));
    return rcpp_result_gen;
END_RCPP
}
// ga_lrSelection_Rcpp
List ga_lrSelection_Rcpp(RObject object, double r, double q);
RcppExport SEXP _GA_ga_lrSelection_Rcpp(SEXP objectSEXP, SEXP rSEXP, SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    rcpp_result_gen = Rcpp::wrap(ga_lrSelection_Rcpp(object, r, q));
    return rcpp_result_gen;
END_RCPP
}
// ga_nlrSelection_Rcpp
List ga_nlrSelection_Rcpp(RObject object, double q);
RcppExport SEXP _GA_ga_nlrSelection_Rcpp(SEXP objectSEXP, SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    rcpp_result_gen = Rcpp::wrap(ga_nlrSelection_Rcpp(object, q));
    return rcpp_result_gen;
END_RCPP
}
// ga_rwSelection_Rcpp
List ga_rwSelection_Rcpp(RObject object);
RcppExport SEXP _GA_ga_rwSelection_Rcpp(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    rcpp_result_gen = Rcpp::wrap(ga_rwSelection_Rcpp(object));
    return rcpp_result_gen;
END_RCPP
}
// ga_tourSelection_Rcpp
List ga_tourSelection_Rcpp(RObject object, double k);
RcppExport SEXP _GA_ga_tourSelection_Rcpp(SEXP objectSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(ga_tourSelection_Rcpp(object, k));
    return rcpp_result_gen;
END_RCPP
}
// ga_spCrossover_Rcpp
List ga_spCrossover_Rcpp(RObject object, IntegerVector parents);
RcppExport SEXP _GA_ga_spCrossover_Rcpp(SEXP objectSEXP, SEXP parentsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type parents(parentsSEXP);
    rcpp_result_gen = Rcpp::wrap(ga_spCrossover_Rcpp(object, parents));
    return rcpp_result_gen;
END_RCPP
}
// gabin_Population_Rcpp
NumericMatrix gabin_Population_Rcpp(RObject object);
RcppExport SEXP _GA_gabin_Population_Rcpp(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    rcpp_result_gen = Rcpp::wrap(gabin_Population_Rcpp(object));
    return rcpp_result_gen;
END_RCPP
}
// gabin_uCrossover_Rcpp
List gabin_uCrossover_Rcpp(RObject object, IntegerVector parents);
RcppExport SEXP _GA_gabin_uCrossover_Rcpp(SEXP objectSEXP, SEXP parentsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type parents(parentsSEXP);
    rcpp_result_gen = Rcpp::wrap(gabin_uCrossover_Rcpp(object, parents));
    return rcpp_result_gen;
END_RCPP
}
// gabin_raMutation_Rcpp
NumericVector gabin_raMutation_Rcpp(RObject object, int parent);
RcppExport SEXP _GA_gabin_raMutation_Rcpp(SEXP objectSEXP, SEXP parentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    Rcpp::traits::input_parameter< int >::type parent(parentSEXP);
    rcpp_result_gen = Rcpp::wrap(gabin_raMutation_Rcpp(object, parent));
    return rcpp_result_gen;
END_RCPP
}
// gareal_Population_Rcpp
NumericMatrix gareal_Population_Rcpp(RObject object);
RcppExport SEXP _GA_gareal_Population_Rcpp(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    rcpp_result_gen = Rcpp::wrap(gareal_Population_Rcpp(object));
    return rcpp_result_gen;
END_RCPP
}
// gareal_lsSelection_Rcpp
List gareal_lsSelection_Rcpp(RObject object);
RcppExport SEXP _GA_gareal_lsSelection_Rcpp(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    rcpp_result_gen = Rcpp::wrap(gareal_lsSelection_Rcpp(object));
    return rcpp_result_gen;
END_RCPP
}
// gareal_sigmaSelection_Rcpp
List gareal_sigmaSelection_Rcpp(RObject object);
RcppExport SEXP _GA_gareal_sigmaSelection_Rcpp(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    rcpp_result_gen = Rcpp::wrap(gareal_sigmaSelection_Rcpp(object));
    return rcpp_result_gen;
END_RCPP
}
// gareal_waCrossover_Rcpp
List gareal_waCrossover_Rcpp(RObject object, IntegerVector parents);
RcppExport SEXP _GA_gareal_waCrossover_Rcpp(SEXP objectSEXP, SEXP parentsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type parents(parentsSEXP);
    rcpp_result_gen = Rcpp::wrap(gareal_waCrossover_Rcpp(object, parents));
    return rcpp_result_gen;
END_RCPP
}
// gareal_laCrossover_Rcpp
List gareal_laCrossover_Rcpp(RObject object, IntegerVector parents);
RcppExport SEXP _GA_gareal_laCrossover_Rcpp(SEXP objectSEXP, SEXP parentsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type parents(parentsSEXP);
    rcpp_result_gen = Rcpp::wrap(gareal_laCrossover_Rcpp(object, parents));
    return rcpp_result_gen;
END_RCPP
}
// gareal_blxCrossover_Rcpp
List gareal_blxCrossover_Rcpp(RObject object, IntegerVector parents);
RcppExport SEXP _GA_gareal_blxCrossover_Rcpp(SEXP objectSEXP, SEXP parentsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type parents(parentsSEXP);
    rcpp_result_gen = Rcpp::wrap(gareal_blxCrossover_Rcpp(object, parents));
    return rcpp_result_gen;
END_RCPP
}
// gareal_laplaceCrossover_Rcpp
List gareal_laplaceCrossover_Rcpp(RObject object, IntegerVector parents, double a, double b);
RcppExport SEXP _GA_gareal_laplaceCrossover_Rcpp(SEXP objectSEXP, SEXP parentsSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type parents(parentsSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(gareal_laplaceCrossover_Rcpp(object, parents, a, b));
    return rcpp_result_gen;
END_RCPP
}
// gareal_raMutation_Rcpp
NumericVector gareal_raMutation_Rcpp(RObject object, int parent);
RcppExport SEXP _GA_gareal_raMutation_Rcpp(SEXP objectSEXP, SEXP parentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    Rcpp::traits::input_parameter< int >::type parent(parentSEXP);
    rcpp_result_gen = Rcpp::wrap(gareal_raMutation_Rcpp(object, parent));
    return rcpp_result_gen;
END_RCPP
}
// gareal_nraMutation_Rcpp
NumericVector gareal_nraMutation_Rcpp(RObject object, int parent);
RcppExport SEXP _GA_gareal_nraMutation_Rcpp(SEXP objectSEXP, SEXP parentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    Rcpp::traits::input_parameter< int >::type parent(parentSEXP);
    rcpp_result_gen = Rcpp::wrap(gareal_nraMutation_Rcpp(object, parent));
    return rcpp_result_gen;
END_RCPP
}
// gareal_rsMutation_Rcpp
NumericVector gareal_rsMutation_Rcpp(RObject object, int parent);
RcppExport SEXP _GA_gareal_rsMutation_Rcpp(SEXP objectSEXP, SEXP parentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    Rcpp::traits::input_parameter< int >::type parent(parentSEXP);
    rcpp_result_gen = Rcpp::wrap(gareal_rsMutation_Rcpp(object, parent));
    return rcpp_result_gen;
END_RCPP
}
// gareal_powMutation_Rcpp
NumericVector gareal_powMutation_Rcpp(RObject object, int parent, double pow);
RcppExport SEXP _GA_gareal_powMutation_Rcpp(SEXP objectSEXP, SEXP parentSEXP, SEXP powSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    Rcpp::traits::input_parameter< int >::type parent(parentSEXP);
    Rcpp::traits::input_parameter< double >::type pow(powSEXP);
    rcpp_result_gen = Rcpp::wrap(gareal_powMutation_Rcpp(object, parent, pow));
    return rcpp_result_gen;
END_RCPP
}
// gaperm_Population_Rcpp
IntegerMatrix gaperm_Population_Rcpp(RObject object);
RcppExport SEXP _GA_gaperm_Population_Rcpp(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    rcpp_result_gen = Rcpp::wrap(gaperm_Population_Rcpp(object));
    return rcpp_result_gen;
END_RCPP
}
// gaperm_cxCrossover_Rcpp
List gaperm_cxCrossover_Rcpp(RObject object, IntegerVector parents);
RcppExport SEXP _GA_gaperm_cxCrossover_Rcpp(SEXP objectSEXP, SEXP parentsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type parents(parentsSEXP);
    rcpp_result_gen = Rcpp::wrap(gaperm_cxCrossover_Rcpp(object, parents));
    return rcpp_result_gen;
END_RCPP
}
// gaperm_pmxCrossover_Rcpp
List gaperm_pmxCrossover_Rcpp(RObject object, IntegerVector parents);
RcppExport SEXP _GA_gaperm_pmxCrossover_Rcpp(SEXP objectSEXP, SEXP parentsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type parents(parentsSEXP);
    rcpp_result_gen = Rcpp::wrap(gaperm_pmxCrossover_Rcpp(object, parents));
    return rcpp_result_gen;
END_RCPP
}
// gaperm_oxCrossover_Rcpp
List gaperm_oxCrossover_Rcpp(RObject object, IntegerVector parents);
RcppExport SEXP _GA_gaperm_oxCrossover_Rcpp(SEXP objectSEXP, SEXP parentsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type parents(parentsSEXP);
    rcpp_result_gen = Rcpp::wrap(gaperm_oxCrossover_Rcpp(object, parents));
    return rcpp_result_gen;
END_RCPP
}
// gaperm_pbxCrossover_Rcpp
List gaperm_pbxCrossover_Rcpp(RObject object, IntegerVector parents);
RcppExport SEXP _GA_gaperm_pbxCrossover_Rcpp(SEXP objectSEXP, SEXP parentsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type parents(parentsSEXP);
    rcpp_result_gen = Rcpp::wrap(gaperm_pbxCrossover_Rcpp(object, parents));
    return rcpp_result_gen;
END_RCPP
}
// gaperm_simMutation_Rcpp
IntegerVector gaperm_simMutation_Rcpp(RObject object, int parent);
RcppExport SEXP _GA_gaperm_simMutation_Rcpp(SEXP objectSEXP, SEXP parentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    Rcpp::traits::input_parameter< int >::type parent(parentSEXP);
    rcpp_result_gen = Rcpp::wrap(gaperm_simMutation_Rcpp(object, parent));
    return rcpp_result_gen;
END_RCPP
}
// gaperm_ismMutation_Rcpp
IntegerVector gaperm_ismMutation_Rcpp(RObject object, int parent);
RcppExport SEXP _GA_gaperm_ismMutation_Rcpp(SEXP objectSEXP, SEXP parentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    Rcpp::traits::input_parameter< int >::type parent(parentSEXP);
    rcpp_result_gen = Rcpp::wrap(gaperm_ismMutation_Rcpp(object, parent));
    return rcpp_result_gen;
END_RCPP
}
// gaperm_swMutation_Rcpp
IntegerVector gaperm_swMutation_Rcpp(RObject object, int parent);
RcppExport SEXP _GA_gaperm_swMutation_Rcpp(SEXP objectSEXP, SEXP parentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    Rcpp::traits::input_parameter< int >::type parent(parentSEXP);
    rcpp_result_gen = Rcpp::wrap(gaperm_swMutation_Rcpp(object, parent));
    return rcpp_result_gen;
END_RCPP
}
// gaperm_dmMutation_Rcpp
IntegerVector gaperm_dmMutation_Rcpp(RObject object, int parent);
RcppExport SEXP _GA_gaperm_dmMutation_Rcpp(SEXP objectSEXP, SEXP parentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    Rcpp::traits::input_parameter< int >::type parent(parentSEXP);
    rcpp_result_gen = Rcpp::wrap(gaperm_dmMutation_Rcpp(object, parent));
    return rcpp_result_gen;
END_RCPP
}
// gaperm_scrMutation_Rcpp
IntegerVector gaperm_scrMutation_Rcpp(RObject object, int parent);
RcppExport SEXP _GA_gaperm_scrMutation_Rcpp(SEXP objectSEXP, SEXP parentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    Rcpp::traits::input_parameter< int >::type parent(parentSEXP);
    rcpp_result_gen = Rcpp::wrap(gaperm_scrMutation_Rcpp(object, parent));
    return rcpp_result_gen;
END_RCPP
}
// ga_pmutation_Rcpp
double ga_pmutation_Rcpp(RObject object, double p0, double p, double T);
RcppExport SEXP _GA_ga_pmutation_Rcpp(SEXP objectSEXP, SEXP p0SEXP, SEXP pSEXP, SEXP TSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    Rcpp::traits::input_parameter< double >::type p0(p0SEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type T(TSEXP);
    rcpp_result_gen = Rcpp::wrap(ga_pmutation_Rcpp(object, p0, p, T));
    return rcpp_result_gen;
END_RCPP
}
// optimProbsel_Rcpp
NumericVector optimProbsel_Rcpp(NumericVector x, double q);
RcppExport SEXP _GA_optimProbsel_Rcpp(SEXP xSEXP, SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    rcpp_result_gen = Rcpp::wrap(optimProbsel_Rcpp(x, q));
    return rcpp_result_gen;
END_RCPP
}
