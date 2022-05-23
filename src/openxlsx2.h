#include "openxlsx2_types.h"

std::string int_to_col(uint32_t cell);
uint32_t uint_col_to_int(std::string& a);
Rcpp::IntegerVector col_to_int(Rcpp::CharacterVector x);

SEXP si_to_txt(XPtrXML doc);
SEXP is_to_txt(Rcpp::CharacterVector is_vec);

std::string txt_to_is(std::string txt, bool no_escapes, bool raw);


template <typename T>
inline T Riconv(T &mystring) {
  Rcpp::Environment base("package:base");
  Rcpp::Function iconv = base["iconv"];

  mystring = Rcpp::as<T>(
    iconv(mystring, Rcpp::Named("from", ""), Rcpp::Named("to","UTF-8"))
  );

  return(mystring);
}
