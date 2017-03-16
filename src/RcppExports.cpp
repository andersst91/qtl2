// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// calc_kinship
NumericMatrix calc_kinship(const NumericVector& prob_array);
RcppExport SEXP qtl2geno_calc_kinship(SEXP prob_arraySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type prob_array(prob_arraySEXP);
    rcpp_result_gen = Rcpp::wrap(calc_kinship(prob_array));
    return rcpp_result_gen;
END_RCPP
}
// crosstype_supported
bool crosstype_supported(const String& crosstype);
RcppExport SEXP qtl2geno_crosstype_supported(SEXP crosstypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP);
    rcpp_result_gen = Rcpp::wrap(crosstype_supported(crosstype));
    return rcpp_result_gen;
END_RCPP
}
// count_invalid_genotypes
IntegerVector count_invalid_genotypes(const String& crosstype, const IntegerMatrix& genotypes, const bool& is_X_chr, const LogicalVector& is_female, const IntegerMatrix& cross_info);
RcppExport SEXP qtl2geno_count_invalid_genotypes(SEXP crosstypeSEXP, SEXP genotypesSEXP, SEXP is_X_chrSEXP, SEXP is_femaleSEXP, SEXP cross_infoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type genotypes(genotypesSEXP);
    Rcpp::traits::input_parameter< const bool& >::type is_X_chr(is_X_chrSEXP);
    Rcpp::traits::input_parameter< const LogicalVector& >::type is_female(is_femaleSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type cross_info(cross_infoSEXP);
    rcpp_result_gen = Rcpp::wrap(count_invalid_genotypes(crosstype, genotypes, is_X_chr, is_female, cross_info));
    return rcpp_result_gen;
END_RCPP
}
// check_crossinfo
bool check_crossinfo(const String& crosstype, const IntegerMatrix& cross_info, const bool any_x_chr);
RcppExport SEXP qtl2geno_check_crossinfo(SEXP crosstypeSEXP, SEXP cross_infoSEXP, SEXP any_x_chrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type cross_info(cross_infoSEXP);
    Rcpp::traits::input_parameter< const bool >::type any_x_chr(any_x_chrSEXP);
    rcpp_result_gen = Rcpp::wrap(check_crossinfo(crosstype, cross_info, any_x_chr));
    return rcpp_result_gen;
END_RCPP
}
// check_is_female_vector
bool check_is_female_vector(const String& crosstype, const LogicalVector& is_female, const bool any_x_chr);
RcppExport SEXP qtl2geno_check_is_female_vector(SEXP crosstypeSEXP, SEXP is_femaleSEXP, SEXP any_x_chrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP);
    Rcpp::traits::input_parameter< const LogicalVector& >::type is_female(is_femaleSEXP);
    Rcpp::traits::input_parameter< const bool >::type any_x_chr(any_x_chrSEXP);
    rcpp_result_gen = Rcpp::wrap(check_is_female_vector(crosstype, is_female, any_x_chr));
    return rcpp_result_gen;
END_RCPP
}
// check_handle_x_chr
bool check_handle_x_chr(const String& crosstype, const bool any_x_chr);
RcppExport SEXP qtl2geno_check_handle_x_chr(SEXP crosstypeSEXP, SEXP any_x_chrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP);
    Rcpp::traits::input_parameter< const bool >::type any_x_chr(any_x_chrSEXP);
    rcpp_result_gen = Rcpp::wrap(check_handle_x_chr(crosstype, any_x_chr));
    return rcpp_result_gen;
END_RCPP
}
// mpp_encode_alleles
int mpp_encode_alleles(const int allele1, const int allele2, const int n_alleles, const bool phase_known);
RcppExport SEXP qtl2geno_mpp_encode_alleles(SEXP allele1SEXP, SEXP allele2SEXP, SEXP n_allelesSEXP, SEXP phase_knownSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type allele1(allele1SEXP);
    Rcpp::traits::input_parameter< const int >::type allele2(allele2SEXP);
    Rcpp::traits::input_parameter< const int >::type n_alleles(n_allelesSEXP);
    Rcpp::traits::input_parameter< const bool >::type phase_known(phase_knownSEXP);
    rcpp_result_gen = Rcpp::wrap(mpp_encode_alleles(allele1, allele2, n_alleles, phase_known));
    return rcpp_result_gen;
END_RCPP
}
// mpp_decode_geno
IntegerVector mpp_decode_geno(const int true_gen, const int n_alleles, const bool phase_known);
RcppExport SEXP qtl2geno_mpp_decode_geno(SEXP true_genSEXP, SEXP n_allelesSEXP, SEXP phase_knownSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type true_gen(true_genSEXP);
    Rcpp::traits::input_parameter< const int >::type n_alleles(n_allelesSEXP);
    Rcpp::traits::input_parameter< const bool >::type phase_known(phase_knownSEXP);
    rcpp_result_gen = Rcpp::wrap(mpp_decode_geno(true_gen, n_alleles, phase_known));
    return rcpp_result_gen;
END_RCPP
}
// mpp_is_het
bool mpp_is_het(const int true_gen, const int n_alleles, const bool phase_known);
RcppExport SEXP qtl2geno_mpp_is_het(SEXP true_genSEXP, SEXP n_allelesSEXP, SEXP phase_knownSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type true_gen(true_genSEXP);
    Rcpp::traits::input_parameter< const int >::type n_alleles(n_allelesSEXP);
    Rcpp::traits::input_parameter< const bool >::type phase_known(phase_knownSEXP);
    rcpp_result_gen = Rcpp::wrap(mpp_is_het(true_gen, n_alleles, phase_known));
    return rcpp_result_gen;
END_RCPP
}
// mpp_geno_names
const std::vector<std::string> mpp_geno_names(const std::vector<std::string> alleles, const bool is_x_chr);
RcppExport SEXP qtl2geno_mpp_geno_names(SEXP allelesSEXP, SEXP is_x_chrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<std::string> >::type alleles(allelesSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_x_chr(is_x_chrSEXP);
    rcpp_result_gen = Rcpp::wrap(mpp_geno_names(alleles, is_x_chr));
    return rcpp_result_gen;
END_RCPP
}
// find_ibd_segments
NumericMatrix find_ibd_segments(const IntegerVector& g1, const IntegerVector& g2, const NumericVector& p, const double error_prob);
RcppExport SEXP qtl2geno_find_ibd_segments(SEXP g1SEXP, SEXP g2SEXP, SEXP pSEXP, SEXP error_probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector& >::type g1(g1SEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type g2(g2SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const double >::type error_prob(error_probSEXP);
    rcpp_result_gen = Rcpp::wrap(find_ibd_segments(g1, g2, p, error_prob));
    return rcpp_result_gen;
END_RCPP
}
// geno_names
std::vector<std::string> geno_names(const String& crosstype, const std::vector<std::string> alleles, const bool is_x_chr);
RcppExport SEXP qtl2geno_geno_names(SEXP crosstypeSEXP, SEXP allelesSEXP, SEXP is_x_chrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string> >::type alleles(allelesSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_x_chr(is_x_chrSEXP);
    rcpp_result_gen = Rcpp::wrap(geno_names(crosstype, alleles, is_x_chr));
    return rcpp_result_gen;
END_RCPP
}
// nalleles
int nalleles(const String& crosstype);
RcppExport SEXP qtl2geno_nalleles(SEXP crosstypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP);
    rcpp_result_gen = Rcpp::wrap(nalleles(crosstype));
    return rcpp_result_gen;
END_RCPP
}
// genoprob_to_alleleprob
NumericVector genoprob_to_alleleprob(const String& crosstype, const NumericVector& prob_array, const bool is_x_chr);
RcppExport SEXP qtl2geno_genoprob_to_alleleprob(SEXP crosstypeSEXP, SEXP prob_arraySEXP, SEXP is_x_chrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type prob_array(prob_arraySEXP);
    Rcpp::traits::input_parameter< const bool >::type is_x_chr(is_x_chrSEXP);
    rcpp_result_gen = Rcpp::wrap(genoprob_to_alleleprob(crosstype, prob_array, is_x_chr));
    return rcpp_result_gen;
END_RCPP
}
// get_x_covar
NumericMatrix get_x_covar(const String& crosstype, const LogicalVector& is_female, const IntegerMatrix& cross_info);
RcppExport SEXP qtl2geno_get_x_covar(SEXP crosstypeSEXP, SEXP is_femaleSEXP, SEXP cross_infoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP);
    Rcpp::traits::input_parameter< const LogicalVector& >::type is_female(is_femaleSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type cross_info(cross_infoSEXP);
    rcpp_result_gen = Rcpp::wrap(get_x_covar(crosstype, is_female, cross_info));
    return rcpp_result_gen;
END_RCPP
}
// calc_genoprob
NumericVector calc_genoprob(const String& crosstype, const IntegerMatrix& genotypes, const IntegerMatrix& founder_geno, const bool is_X_chr, const LogicalVector& is_female, const IntegerMatrix& cross_info, const NumericVector& rec_frac, const IntegerVector& marker_index, const double error_prob);
RcppExport SEXP qtl2geno_calc_genoprob(SEXP crosstypeSEXP, SEXP genotypesSEXP, SEXP founder_genoSEXP, SEXP is_X_chrSEXP, SEXP is_femaleSEXP, SEXP cross_infoSEXP, SEXP rec_fracSEXP, SEXP marker_indexSEXP, SEXP error_probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type genotypes(genotypesSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type founder_geno(founder_genoSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_X_chr(is_X_chrSEXP);
    Rcpp::traits::input_parameter< const LogicalVector& >::type is_female(is_femaleSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type cross_info(cross_infoSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type rec_frac(rec_fracSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type marker_index(marker_indexSEXP);
    Rcpp::traits::input_parameter< const double >::type error_prob(error_probSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_genoprob(crosstype, genotypes, founder_geno, is_X_chr, is_female, cross_info, rec_frac, marker_index, error_prob));
    return rcpp_result_gen;
END_RCPP
}
// calc_genoprob2
NumericVector calc_genoprob2(const String& crosstype, const IntegerMatrix& genotypes, const IntegerMatrix& founder_geno, const bool is_X_chr, const bool is_female, const IntegerVector& cross_info, const NumericVector& rec_frac, const IntegerVector& marker_index, const double error_prob);
RcppExport SEXP qtl2geno_calc_genoprob2(SEXP crosstypeSEXP, SEXP genotypesSEXP, SEXP founder_genoSEXP, SEXP is_X_chrSEXP, SEXP is_femaleSEXP, SEXP cross_infoSEXP, SEXP rec_fracSEXP, SEXP marker_indexSEXP, SEXP error_probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type genotypes(genotypesSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type founder_geno(founder_genoSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_X_chr(is_X_chrSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_female(is_femaleSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type cross_info(cross_infoSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type rec_frac(rec_fracSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type marker_index(marker_indexSEXP);
    Rcpp::traits::input_parameter< const double >::type error_prob(error_probSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_genoprob2(crosstype, genotypes, founder_geno, is_X_chr, is_female, cross_info, rec_frac, marker_index, error_prob));
    return rcpp_result_gen;
END_RCPP
}
// est_map
NumericVector est_map(const String& crosstype, const IntegerMatrix& genotypes, const IntegerMatrix& founder_geno, const bool is_X_chr, const LogicalVector& is_female, const IntegerMatrix& cross_info, const NumericVector& rec_frac, const double error_prob, const int max_iterations, const double tol, const bool verbose);
RcppExport SEXP qtl2geno_est_map(SEXP crosstypeSEXP, SEXP genotypesSEXP, SEXP founder_genoSEXP, SEXP is_X_chrSEXP, SEXP is_femaleSEXP, SEXP cross_infoSEXP, SEXP rec_fracSEXP, SEXP error_probSEXP, SEXP max_iterationsSEXP, SEXP tolSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type genotypes(genotypesSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type founder_geno(founder_genoSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_X_chr(is_X_chrSEXP);
    Rcpp::traits::input_parameter< const LogicalVector& >::type is_female(is_femaleSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type cross_info(cross_infoSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type rec_frac(rec_fracSEXP);
    Rcpp::traits::input_parameter< const double >::type error_prob(error_probSEXP);
    Rcpp::traits::input_parameter< const int >::type max_iterations(max_iterationsSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(est_map(crosstype, genotypes, founder_geno, is_X_chr, is_female, cross_info, rec_frac, error_prob, max_iterations, tol, verbose));
    return rcpp_result_gen;
END_RCPP
}
// sim_geno
IntegerVector sim_geno(const String& crosstype, const IntegerMatrix& genotypes, const IntegerMatrix& founder_geno, const bool is_X_chr, const LogicalVector& is_female, const IntegerMatrix& cross_info, const NumericVector& rec_frac, const IntegerVector& marker_index, const double error_prob, const int n_draws);
RcppExport SEXP qtl2geno_sim_geno(SEXP crosstypeSEXP, SEXP genotypesSEXP, SEXP founder_genoSEXP, SEXP is_X_chrSEXP, SEXP is_femaleSEXP, SEXP cross_infoSEXP, SEXP rec_fracSEXP, SEXP marker_indexSEXP, SEXP error_probSEXP, SEXP n_drawsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type genotypes(genotypesSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type founder_geno(founder_genoSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_X_chr(is_X_chrSEXP);
    Rcpp::traits::input_parameter< const LogicalVector& >::type is_female(is_femaleSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type cross_info(cross_infoSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type rec_frac(rec_fracSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type marker_index(marker_indexSEXP);
    Rcpp::traits::input_parameter< const double >::type error_prob(error_probSEXP);
    Rcpp::traits::input_parameter< const int >::type n_draws(n_drawsSEXP);
    rcpp_result_gen = Rcpp::wrap(sim_geno(crosstype, genotypes, founder_geno, is_X_chr, is_female, cross_info, rec_frac, marker_index, error_prob, n_draws));
    return rcpp_result_gen;
END_RCPP
}
// sim_geno2
IntegerVector sim_geno2(const String& crosstype, const IntegerMatrix& genotypes, const IntegerMatrix& founder_geno, const bool is_X_chr, const bool is_female, const IntegerVector& cross_info, const NumericVector& rec_frac, const IntegerVector& marker_index, const double error_prob, const int n_draws);
RcppExport SEXP qtl2geno_sim_geno2(SEXP crosstypeSEXP, SEXP genotypesSEXP, SEXP founder_genoSEXP, SEXP is_X_chrSEXP, SEXP is_femaleSEXP, SEXP cross_infoSEXP, SEXP rec_fracSEXP, SEXP marker_indexSEXP, SEXP error_probSEXP, SEXP n_drawsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type genotypes(genotypesSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type founder_geno(founder_genoSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_X_chr(is_X_chrSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_female(is_femaleSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type cross_info(cross_infoSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type rec_frac(rec_fracSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type marker_index(marker_indexSEXP);
    Rcpp::traits::input_parameter< const double >::type error_prob(error_probSEXP);
    Rcpp::traits::input_parameter< const int >::type n_draws(n_drawsSEXP);
    rcpp_result_gen = Rcpp::wrap(sim_geno2(crosstype, genotypes, founder_geno, is_X_chr, is_female, cross_info, rec_frac, marker_index, error_prob, n_draws));
    return rcpp_result_gen;
END_RCPP
}
// addlog
double addlog(const double a, const double b);
RcppExport SEXP qtl2geno_addlog(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type a(aSEXP);
    Rcpp::traits::input_parameter< const double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(addlog(a, b));
    return rcpp_result_gen;
END_RCPP
}
// viterbi
IntegerMatrix viterbi(const String& crosstype, const IntegerMatrix& genotypes, const IntegerMatrix& founder_geno, const bool is_X_chr, const LogicalVector& is_female, const IntegerMatrix& cross_info, const NumericVector& rec_frac, const IntegerVector& marker_index, const double error_prob);
RcppExport SEXP qtl2geno_viterbi(SEXP crosstypeSEXP, SEXP genotypesSEXP, SEXP founder_genoSEXP, SEXP is_X_chrSEXP, SEXP is_femaleSEXP, SEXP cross_infoSEXP, SEXP rec_fracSEXP, SEXP marker_indexSEXP, SEXP error_probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type genotypes(genotypesSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type founder_geno(founder_genoSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_X_chr(is_X_chrSEXP);
    Rcpp::traits::input_parameter< const LogicalVector& >::type is_female(is_femaleSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type cross_info(cross_infoSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type rec_frac(rec_fracSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type marker_index(marker_indexSEXP);
    Rcpp::traits::input_parameter< const double >::type error_prob(error_probSEXP);
    rcpp_result_gen = Rcpp::wrap(viterbi(crosstype, genotypes, founder_geno, is_X_chr, is_female, cross_info, rec_frac, marker_index, error_prob));
    return rcpp_result_gen;
END_RCPP
}
// viterbi2
IntegerMatrix viterbi2(const String& crosstype, const IntegerMatrix& genotypes, const IntegerMatrix& founder_geno, const bool is_X_chr, const bool is_female, const IntegerVector& cross_info, const NumericVector& rec_frac, const IntegerVector& marker_index, const double error_prob);
RcppExport SEXP qtl2geno_viterbi2(SEXP crosstypeSEXP, SEXP genotypesSEXP, SEXP founder_genoSEXP, SEXP is_X_chrSEXP, SEXP is_femaleSEXP, SEXP cross_infoSEXP, SEXP rec_fracSEXP, SEXP marker_indexSEXP, SEXP error_probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type genotypes(genotypesSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type founder_geno(founder_genoSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_X_chr(is_X_chrSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_female(is_femaleSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type cross_info(cross_infoSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type rec_frac(rec_fracSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type marker_index(marker_indexSEXP);
    Rcpp::traits::input_parameter< const double >::type error_prob(error_probSEXP);
    rcpp_result_gen = Rcpp::wrap(viterbi2(crosstype, genotypes, founder_geno, is_X_chr, is_female, cross_info, rec_frac, marker_index, error_prob));
    return rcpp_result_gen;
END_RCPP
}
// maxmarg
IntegerMatrix maxmarg(const NumericVector& prob_array, const double minprob);
RcppExport SEXP qtl2geno_maxmarg(SEXP prob_arraySEXP, SEXP minprobSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type prob_array(prob_arraySEXP);
    Rcpp::traits::input_parameter< const double >::type minprob(minprobSEXP);
    rcpp_result_gen = Rcpp::wrap(maxmarg(prob_array, minprob));
    return rcpp_result_gen;
END_RCPP
}
// reduce_markers
IntegerVector reduce_markers(const NumericVector& pos, const NumericVector& weights, const double min_dist);
RcppExport SEXP qtl2geno_reduce_markers(SEXP posSEXP, SEXP weightsSEXP, SEXP min_distSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type pos(posSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const double >::type min_dist(min_distSEXP);
    rcpp_result_gen = Rcpp::wrap(reduce_markers(pos, weights, min_dist));
    return rcpp_result_gen;
END_RCPP
}
// test_init
double test_init(const String& crosstype, const int true_gen, const bool is_x_chr, const bool is_female, const IntegerVector& cross_info);
RcppExport SEXP qtl2geno_test_init(SEXP crosstypeSEXP, SEXP true_genSEXP, SEXP is_x_chrSEXP, SEXP is_femaleSEXP, SEXP cross_infoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP);
    Rcpp::traits::input_parameter< const int >::type true_gen(true_genSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_x_chr(is_x_chrSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_female(is_femaleSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type cross_info(cross_infoSEXP);
    rcpp_result_gen = Rcpp::wrap(test_init(crosstype, true_gen, is_x_chr, is_female, cross_info));
    return rcpp_result_gen;
END_RCPP
}
// test_emit
double test_emit(const String& crosstype, const int obs_gen, const int true_gen, const double error_prob, const IntegerVector& founder_geno, const bool is_x_chr, const bool is_female, const IntegerVector& cross_info);
RcppExport SEXP qtl2geno_test_emit(SEXP crosstypeSEXP, SEXP obs_genSEXP, SEXP true_genSEXP, SEXP error_probSEXP, SEXP founder_genoSEXP, SEXP is_x_chrSEXP, SEXP is_femaleSEXP, SEXP cross_infoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP);
    Rcpp::traits::input_parameter< const int >::type obs_gen(obs_genSEXP);
    Rcpp::traits::input_parameter< const int >::type true_gen(true_genSEXP);
    Rcpp::traits::input_parameter< const double >::type error_prob(error_probSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type founder_geno(founder_genoSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_x_chr(is_x_chrSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_female(is_femaleSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type cross_info(cross_infoSEXP);
    rcpp_result_gen = Rcpp::wrap(test_emit(crosstype, obs_gen, true_gen, error_prob, founder_geno, is_x_chr, is_female, cross_info));
    return rcpp_result_gen;
END_RCPP
}
// test_step
double test_step(const String& crosstype, const int gen_left, const int gen_right, const double rec_frac, const bool is_x_chr, const bool is_female, const IntegerVector& cross_info);
RcppExport SEXP qtl2geno_test_step(SEXP crosstypeSEXP, SEXP gen_leftSEXP, SEXP gen_rightSEXP, SEXP rec_fracSEXP, SEXP is_x_chrSEXP, SEXP is_femaleSEXP, SEXP cross_infoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP);
    Rcpp::traits::input_parameter< const int >::type gen_left(gen_leftSEXP);
    Rcpp::traits::input_parameter< const int >::type gen_right(gen_rightSEXP);
    Rcpp::traits::input_parameter< const double >::type rec_frac(rec_fracSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_x_chr(is_x_chrSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_female(is_femaleSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type cross_info(cross_infoSEXP);
    rcpp_result_gen = Rcpp::wrap(test_step(crosstype, gen_left, gen_right, rec_frac, is_x_chr, is_female, cross_info));
    return rcpp_result_gen;
END_RCPP
}
// test_check_geno
bool test_check_geno(const String& crosstype, const int gen, const bool is_observed_value, const bool is_x_chr, const bool is_female, const IntegerVector& cross_info);
RcppExport SEXP qtl2geno_test_check_geno(SEXP crosstypeSEXP, SEXP genSEXP, SEXP is_observed_valueSEXP, SEXP is_x_chrSEXP, SEXP is_femaleSEXP, SEXP cross_infoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP);
    Rcpp::traits::input_parameter< const int >::type gen(genSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_observed_value(is_observed_valueSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_x_chr(is_x_chrSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_female(is_femaleSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type cross_info(cross_infoSEXP);
    rcpp_result_gen = Rcpp::wrap(test_check_geno(crosstype, gen, is_observed_value, is_x_chr, is_female, cross_info));
    return rcpp_result_gen;
END_RCPP
}
// test_possible_gen
IntegerVector test_possible_gen(const String& crosstype, const bool is_x_chr, const bool is_female, const IntegerVector& cross_info);
RcppExport SEXP qtl2geno_test_possible_gen(SEXP crosstypeSEXP, SEXP is_x_chrSEXP, SEXP is_femaleSEXP, SEXP cross_infoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_x_chr(is_x_chrSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_female(is_femaleSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type cross_info(cross_infoSEXP);
    rcpp_result_gen = Rcpp::wrap(test_possible_gen(crosstype, is_x_chr, is_female, cross_info));
    return rcpp_result_gen;
END_RCPP
}
// test_ngen
int test_ngen(const String& crosstype, const bool is_x_chr);
RcppExport SEXP qtl2geno_test_ngen(SEXP crosstypeSEXP, SEXP is_x_chrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_x_chr(is_x_chrSEXP);
    rcpp_result_gen = Rcpp::wrap(test_ngen(crosstype, is_x_chr));
    return rcpp_result_gen;
END_RCPP
}
// test_nrec
double test_nrec(const String& crosstype, const int gen_left, const int gen_right, const bool is_x_chr, const bool is_female, const IntegerVector& cross_info);
RcppExport SEXP qtl2geno_test_nrec(SEXP crosstypeSEXP, SEXP gen_leftSEXP, SEXP gen_rightSEXP, SEXP is_x_chrSEXP, SEXP is_femaleSEXP, SEXP cross_infoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP);
    Rcpp::traits::input_parameter< const int >::type gen_left(gen_leftSEXP);
    Rcpp::traits::input_parameter< const int >::type gen_right(gen_rightSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_x_chr(is_x_chrSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_female(is_femaleSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type cross_info(cross_infoSEXP);
    rcpp_result_gen = Rcpp::wrap(test_nrec(crosstype, gen_left, gen_right, is_x_chr, is_female, cross_info));
    return rcpp_result_gen;
END_RCPP
}
// test_founder_geno_values
bool test_founder_geno_values(const String& crosstype, const IntegerMatrix& founder_geno);
RcppExport SEXP qtl2geno_test_founder_geno_values(SEXP crosstypeSEXP, SEXP founder_genoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type founder_geno(founder_genoSEXP);
    rcpp_result_gen = Rcpp::wrap(test_founder_geno_values(crosstype, founder_geno));
    return rcpp_result_gen;
END_RCPP
}
// need_founder_geno
bool need_founder_geno(const String& crosstype);
RcppExport SEXP qtl2geno_need_founder_geno(SEXP crosstypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP);
    rcpp_result_gen = Rcpp::wrap(need_founder_geno(crosstype));
    return rcpp_result_gen;
END_RCPP
}
// test_emitmatrix
std::vector<NumericMatrix> test_emitmatrix(const String& crosstype, const double error_prob, const IntegerMatrix& founder_geno, const bool is_x_chr, const bool is_female, const IntegerVector& cross_info);
RcppExport SEXP qtl2geno_test_emitmatrix(SEXP crosstypeSEXP, SEXP error_probSEXP, SEXP founder_genoSEXP, SEXP is_x_chrSEXP, SEXP is_femaleSEXP, SEXP cross_infoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP);
    Rcpp::traits::input_parameter< const double >::type error_prob(error_probSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type founder_geno(founder_genoSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_x_chr(is_x_chrSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_female(is_femaleSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type cross_info(cross_infoSEXP);
    rcpp_result_gen = Rcpp::wrap(test_emitmatrix(crosstype, error_prob, founder_geno, is_x_chr, is_female, cross_info));
    return rcpp_result_gen;
END_RCPP
}
// test_stepmatrix
std::vector<NumericMatrix> test_stepmatrix(const String& crosstype, const NumericVector& rec_frac, const bool is_x_chr, const bool is_female, const IntegerVector& cross_info);
RcppExport SEXP qtl2geno_test_stepmatrix(SEXP crosstypeSEXP, SEXP rec_fracSEXP, SEXP is_x_chrSEXP, SEXP is_femaleSEXP, SEXP cross_infoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type rec_frac(rec_fracSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_x_chr(is_x_chrSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_female(is_femaleSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type cross_info(cross_infoSEXP);
    rcpp_result_gen = Rcpp::wrap(test_stepmatrix(crosstype, rec_frac, is_x_chr, is_female, cross_info));
    return rcpp_result_gen;
END_RCPP
}
// test_initvector
NumericVector test_initvector(const String& crosstype, const bool is_x_chr, const bool is_female, const IntegerVector& cross_info);
RcppExport SEXP qtl2geno_test_initvector(SEXP crosstypeSEXP, SEXP is_x_chrSEXP, SEXP is_femaleSEXP, SEXP cross_infoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const String& >::type crosstype(crosstypeSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_x_chr(is_x_chrSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_female(is_femaleSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type cross_info(cross_infoSEXP);
    rcpp_result_gen = Rcpp::wrap(test_initvector(crosstype, is_x_chr, is_female, cross_info));
    return rcpp_result_gen;
END_RCPP
}
