// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// armaPooledS
arma::mat armaPooledS(const Rcpp::List& SList, const Rcpp::NumericVector ns, const int mle = 0);
RcppExport SEXP rags2ridges_armaPooledS(SEXP SListSEXP, SEXP nsSEXP, SEXP mleSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const Rcpp::List& >::type SList(SListSEXP );
        Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type ns(nsSEXP );
        Rcpp::traits::input_parameter< const int >::type mle(mleSEXP );
        arma::mat __result = armaPooledS(SList, ns, mle);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// armaRidgeS
arma::mat armaRidgeS(const arma::mat& S, const arma::mat& target, const double lambda);
RcppExport SEXP rags2ridges_armaRidgeS(SEXP SSEXP, SEXP targetSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const arma::mat& >::type S(SSEXP );
        Rcpp::traits::input_parameter< const arma::mat& >::type target(targetSEXP );
        Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP );
        arma::mat __result = armaRidgeS(S, target, lambda);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// armaFusedUpdate
arma::mat armaFusedUpdate(int g0, const Rcpp::List& PList, const Rcpp::List& SList, const Rcpp::List& TList, const arma::vec ns, const double lambda, arma::mat lambdaFmat);
RcppExport SEXP rags2ridges_armaFusedUpdate(SEXP g0SEXP, SEXP PListSEXP, SEXP SListSEXP, SEXP TListSEXP, SEXP nsSEXP, SEXP lambdaSEXP, SEXP lambdaFmatSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< int >::type g0(g0SEXP );
        Rcpp::traits::input_parameter< const Rcpp::List& >::type PList(PListSEXP );
        Rcpp::traits::input_parameter< const Rcpp::List& >::type SList(SListSEXP );
        Rcpp::traits::input_parameter< const Rcpp::List& >::type TList(TListSEXP );
        Rcpp::traits::input_parameter< const arma::vec >::type ns(nsSEXP );
        Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type lambdaFmat(lambdaFmatSEXP );
        arma::mat __result = armaFusedUpdate(g0, PList, SList, TList, ns, lambda, lambdaFmat);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rmvnormal
arma::mat rmvnormal(const int n, arma::rowvec mu, arma::mat sigma);
RcppExport SEXP rags2ridges_rmvnormal(SEXP nSEXP, SEXP muSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const int >::type n(nSEXP );
        Rcpp::traits::input_parameter< arma::rowvec >::type mu(muSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP );
        arma::mat __result = rmvnormal(n, mu, sigma);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// armaRWishart
arma::cube armaRWishart(const int n, const arma::mat& sigma, const double nu);
RcppExport SEXP rags2ridges_armaRWishart(SEXP nSEXP, SEXP sigmaSEXP, SEXP nuSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const int >::type n(nSEXP );
        Rcpp::traits::input_parameter< const arma::mat& >::type sigma(sigmaSEXP );
        Rcpp::traits::input_parameter< const double >::type nu(nuSEXP );
        arma::cube __result = armaRWishart(n, sigma, nu);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// armaRInvWishart
arma::cube armaRInvWishart(const int n, const arma::mat& psi, const double nu);
RcppExport SEXP rags2ridges_armaRInvWishart(SEXP nSEXP, SEXP psiSEXP, SEXP nuSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const int >::type n(nSEXP );
        Rcpp::traits::input_parameter< const arma::mat& >::type psi(psiSEXP );
        Rcpp::traits::input_parameter< const double >::type nu(nuSEXP );
        arma::cube __result = armaRInvWishart(n, psi, nu);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
