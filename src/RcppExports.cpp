// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// EMcppARMSMH
SEXP EMcppARMSMH(Rcpp::NumericVector y_rcpp, Rcpp::NumericMatrix y_lagged_rcpp, Rcpp::NumericMatrix z_dependent_rcpp, Rcpp::NumericMatrix z_independent_rcpp, Rcpp::NumericMatrix beta0_rcpp, Rcpp::NumericVector mu0_rcpp, Rcpp::NumericVector sigma0_rcpp, Rcpp::NumericMatrix gamma_dependent0_rcpp, Rcpp::NumericMatrix gamma_independent0_rcpp, Rcpp::NumericMatrix transition_probs0_rcpp, Rcpp::NumericVector initial_dist0_rcpp, int maxit, double epsilon);
RcppExport SEXP rMSWITCH_EMcppARMSMH(SEXP y_rcppSEXP, SEXP y_lagged_rcppSEXP, SEXP z_dependent_rcppSEXP, SEXP z_independent_rcppSEXP, SEXP beta0_rcppSEXP, SEXP mu0_rcppSEXP, SEXP sigma0_rcppSEXP, SEXP gamma_dependent0_rcppSEXP, SEXP gamma_independent0_rcppSEXP, SEXP transition_probs0_rcppSEXP, SEXP initial_dist0_rcppSEXP, SEXP maxitSEXP, SEXP epsilonSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type y_rcpp(y_rcppSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type y_lagged_rcpp(y_lagged_rcppSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type z_dependent_rcpp(z_dependent_rcppSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type z_independent_rcpp(z_independent_rcppSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type beta0_rcpp(beta0_rcppSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type mu0_rcpp(mu0_rcppSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type sigma0_rcpp(sigma0_rcppSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type gamma_dependent0_rcpp(gamma_dependent0_rcppSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type gamma_independent0_rcpp(gamma_independent0_rcppSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type transition_probs0_rcpp(transition_probs0_rcppSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type initial_dist0_rcpp(initial_dist0_rcppSEXP);
    Rcpp::traits::input_parameter< int >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    __result = Rcpp::wrap(EMcppARMSMH(y_rcpp, y_lagged_rcpp, z_dependent_rcpp, z_independent_rcpp, beta0_rcpp, mu0_rcpp, sigma0_rcpp, gamma_dependent0_rcpp, gamma_independent0_rcpp, transition_probs0_rcpp, initial_dist0_rcpp, maxit, epsilon));
    return __result;
END_RCPP
}
// LikelihoodMSAR
SEXP LikelihoodMSAR(Rcpp::NumericVector y_rcpp, Rcpp::NumericMatrix y_lagged_rcpp, Rcpp::NumericMatrix z_dependent_rcpp, Rcpp::NumericMatrix z_independent_rcpp, Rcpp::NumericMatrix transition_probs_rcpp, Rcpp::NumericVector initial_dist_rcpp, Rcpp::NumericMatrix beta_rcpp, Rcpp::NumericVector mu_rcpp, Rcpp::NumericVector sigma_rcpp, Rcpp::NumericMatrix gamma_dependent_rcpp, Rcpp::NumericVector gamma_independent_rcpp);
RcppExport SEXP rMSWITCH_LikelihoodMSAR(SEXP y_rcppSEXP, SEXP y_lagged_rcppSEXP, SEXP z_dependent_rcppSEXP, SEXP z_independent_rcppSEXP, SEXP transition_probs_rcppSEXP, SEXP initial_dist_rcppSEXP, SEXP beta_rcppSEXP, SEXP mu_rcppSEXP, SEXP sigma_rcppSEXP, SEXP gamma_dependent_rcppSEXP, SEXP gamma_independent_rcppSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type y_rcpp(y_rcppSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type y_lagged_rcpp(y_lagged_rcppSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type z_dependent_rcpp(z_dependent_rcppSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type z_independent_rcpp(z_independent_rcppSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type transition_probs_rcpp(transition_probs_rcppSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type initial_dist_rcpp(initial_dist_rcppSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type beta_rcpp(beta_rcppSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type mu_rcpp(mu_rcppSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type sigma_rcpp(sigma_rcppSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type gamma_dependent_rcpp(gamma_dependent_rcppSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type gamma_independent_rcpp(gamma_independent_rcppSEXP);
    __result = Rcpp::wrap(LikelihoodMSAR(y_rcpp, y_lagged_rcpp, z_dependent_rcpp, z_independent_rcpp, transition_probs_rcpp, initial_dist_rcpp, beta_rcpp, mu_rcpp, sigma_rcpp, gamma_dependent_rcpp, gamma_independent_rcpp));
    return __result;
END_RCPP
}
// PosteriorProbsMSAR
SEXP PosteriorProbsMSAR(Rcpp::NumericVector y_rcpp, Rcpp::NumericMatrix y_lagged_rcpp, Rcpp::NumericMatrix z_dependent_rcpp, Rcpp::NumericMatrix z_independent_rcpp, Rcpp::NumericMatrix transition_probs_rcpp, Rcpp::NumericVector initial_dist_rcpp, Rcpp::NumericMatrix beta_rcpp, Rcpp::NumericVector mu_rcpp, Rcpp::NumericVector sigma_rcpp, Rcpp::NumericMatrix gamma_dependent_rcpp, Rcpp::NumericVector gamma_independent_rcpp);
RcppExport SEXP rMSWITCH_PosteriorProbsMSAR(SEXP y_rcppSEXP, SEXP y_lagged_rcppSEXP, SEXP z_dependent_rcppSEXP, SEXP z_independent_rcppSEXP, SEXP transition_probs_rcppSEXP, SEXP initial_dist_rcppSEXP, SEXP beta_rcppSEXP, SEXP mu_rcppSEXP, SEXP sigma_rcppSEXP, SEXP gamma_dependent_rcppSEXP, SEXP gamma_independent_rcppSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type y_rcpp(y_rcppSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type y_lagged_rcpp(y_lagged_rcppSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type z_dependent_rcpp(z_dependent_rcppSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type z_independent_rcpp(z_independent_rcppSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type transition_probs_rcpp(transition_probs_rcppSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type initial_dist_rcpp(initial_dist_rcppSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type beta_rcpp(beta_rcppSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type mu_rcpp(mu_rcppSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type sigma_rcpp(sigma_rcppSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type gamma_dependent_rcpp(gamma_dependent_rcppSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type gamma_independent_rcpp(gamma_independent_rcppSEXP);
    __result = Rcpp::wrap(PosteriorProbsMSAR(y_rcpp, y_lagged_rcpp, z_dependent_rcpp, z_independent_rcpp, transition_probs_rcpp, initial_dist_rcpp, beta_rcpp, mu_rcpp, sigma_rcpp, gamma_dependent_rcpp, gamma_independent_rcpp));
    return __result;
END_RCPP
}
