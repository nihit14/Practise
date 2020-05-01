#include <Rcpp.h>

using namespace Rcpp;

// smallWeightHamiltonianPath
Rcpp::IntegerVector smallWeightHamiltonianPath(Rcpp::NumericMatrix dmat);
RcppExport SEXP epicseg_smallWeightHamiltonianPath(SEXP dmatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type dmat(dmatSEXP);
    rcpp_result_gen = Rcpp::wrap(smallWeightHamiltonianPath(dmat));
    return rcpp_result_gen;
END_RCPP
}
// setDim_unsafe
void setDim_unsafe(Rcpp::RObject obj, Rcpp::IntegerVector dims);
RcppExport SEXP epicseg_setDim_unsafe(SEXP objSEXP, SEXP dimsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type obj(objSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type dims(dimsSEXP);
    setDim_unsafe(obj, dims);
    return R_NilValue;
END_RCPP
}
// setDimnames_unsafe
void setDimnames_unsafe(Rcpp::RObject obj, Rcpp::List dimnames);
RcppExport SEXP epicseg_setDimnames_unsafe(SEXP objSEXP, SEXP dimnamesSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type obj(objSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type dimnames(dimnamesSEXP);
    setDimnames_unsafe(obj, dimnames);
    return R_NilValue;
END_RCPP
}
// bindCols
Rcpp::IntegerMatrix bindCols(Rcpp::List vlist, int nthreads);
RcppExport SEXP epicseg_bindCols(SEXP vlistSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type vlist(vlistSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(bindCols(vlist, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// bindCList
Rcpp::IntegerMatrix bindCList(Rcpp::List clist, int nthreads);
RcppExport SEXP epicseg_bindCList(SEXP clistSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type clist(clistSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(bindCList(clist, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// writeCountsTXT
void writeCountsTXT(Rcpp::IntegerMatrix counts, std::vector<std::string> marks, std::string path);
RcppExport SEXP epicseg_writeCountsTXT(SEXP countsSEXP, SEXP marksSEXP, SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type counts(countsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type marks(marksSEXP);
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    writeCountsTXT(counts, marks, path);
    return R_NilValue;
END_RCPP
}
// avgCountsPerClust
Rcpp::NumericMatrix avgCountsPerClust(Rcpp::IntegerMatrix counts, Rcpp::IntegerVector clusts);
RcppExport SEXP epicseg_avgCountsPerClust(SEXP countsSEXP, SEXP clustsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type counts(countsSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type clusts(clustsSEXP);
    rcpp_result_gen = Rcpp::wrap(avgCountsPerClust(counts, clusts));
    return rcpp_result_gen;
END_RCPP
}
// tabf
Rcpp::IntegerVector tabf(Rcpp::IntegerVector v, bool naRm);
RcppExport SEXP epicseg_tabf(SEXP vSEXP, SEXP naRmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< bool >::type naRm(naRmSEXP);
    rcpp_result_gen = Rcpp::wrap(tabf(v, naRm));
    return rcpp_result_gen;
END_RCPP
}
// tabf2
Rcpp::IntegerMatrix tabf2(Rcpp::IntegerVector v1, Rcpp::IntegerVector v2, bool naRm);
RcppExport SEXP epicseg_tabf2(SEXP v1SEXP, SEXP v2SEXP, SEXP naRmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type v1(v1SEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type v2(v2SEXP);
    Rcpp::traits::input_parameter< bool >::type naRm(naRmSEXP);
    rcpp_result_gen = Rcpp::wrap(tabf2(v1, v2, naRm));
    return rcpp_result_gen;
END_RCPP
}
// colSummary
Rcpp::IntegerVector colSummary(Rcpp::IntegerMatrix mat, std::string type, int nthreads);
RcppExport SEXP epicseg_colSummary(SEXP matSEXP, SEXP typeSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< std::string >::type type(typeSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(colSummary(mat, type, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// getRef
Rcpp::IntegerVector getRef(Rcpp::IntegerMatrix mat, std::string type, int nthreads);
RcppExport SEXP epicseg_getRef(SEXP matSEXP, SEXP typeSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< std::string >::type type(typeSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(getRef(mat, type, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// quantileNorm
Rcpp::IntegerMatrix quantileNorm(Rcpp::IntegerMatrix mat, Rcpp::IntegerVector ref, int nthreads, int seed);
RcppExport SEXP epicseg_quantileNorm(SEXP matSEXP, SEXP refSEXP, SEXP nthreadsSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type ref(refSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(quantileNorm(mat, ref, nthreads, seed));
    return rcpp_result_gen;
END_RCPP
}
// clist2mlist
Rcpp::List clist2mlist(Rcpp::List clist, int nthreads);
RcppExport SEXP epicseg_clist2mlist(SEXP clistSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type clist(clistSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(clist2mlist(clist, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// mlist2clist
Rcpp::List mlist2clist(Rcpp::List mlist, int nthreads);
RcppExport SEXP epicseg_mlist2clist(SEXP mlistSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type mlist(mlistSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(mlist2clist(mlist, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// testSortCounts
Rcpp::IntegerVector testSortCounts(Rcpp::IntegerVector v);
RcppExport SEXP epicseg_testSortCounts(SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(testSortCounts(v));
    return rcpp_result_gen;
END_RCPP
}
// testMeanAndMedian
int testMeanAndMedian(Rcpp::IntegerVector v, std::string type);
RcppExport SEXP epicseg_testMeanAndMedian(SEXP vSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< std::string >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(testMeanAndMedian(v, type));
    return rcpp_result_gen;
END_RCPP
}
// statesToSegments_helper
Rcpp::List statesToSegments_helper(Rcpp::RObject regions, Rcpp::IntegerVector states);
RcppExport SEXP epicseg_statesToSegments_helper(SEXP regionsSEXP, SEXP statesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type regions(regionsSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type states(statesSEXP);
    rcpp_result_gen = Rcpp::wrap(statesToSegments_helper(regions, states));
    return rcpp_result_gen;
END_RCPP
}
// segmentsToBed
void segmentsToBed(Rcpp::RObject segments, std::vector<std::string> labels, std::vector<std::string> colors, std::string path);
RcppExport SEXP epicseg_segmentsToBed(SEXP segmentsSEXP, SEXP labelsSEXP, SEXP colorsSEXP, SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type segments(segmentsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type labels(labelsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type colors(colorsSEXP);
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    segmentsToBed(segments, labels, colors, path);
    return R_NilValue;
}
END_RCPP
