// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "openxlsx2_types.h"
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// openxlsx2_type
SEXP openxlsx2_type(SEXP x);
RcppExport SEXP _openxlsx2_openxlsx2_type(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(openxlsx2_type(x));
    return rcpp_result_gen;
END_RCPP
}
// int_to_col
std::string int_to_col(uint32_t cell);
RcppExport SEXP _openxlsx2_int_to_col(SEXP cellSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< uint32_t >::type cell(cellSEXP);
    rcpp_result_gen = Rcpp::wrap(int_to_col(cell));
    return rcpp_result_gen;
END_RCPP
}
// col_to_int
Rcpp::IntegerVector col_to_int(Rcpp::CharacterVector x);
RcppExport SEXP _openxlsx2_col_to_int(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(col_to_int(x));
    return rcpp_result_gen;
END_RCPP
}
// rbindlist
SEXP rbindlist(Rcpp::List x);
RcppExport SEXP _openxlsx2_rbindlist(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rbindlist(x));
    return rcpp_result_gen;
END_RCPP
}
// copy
SEXP copy(SEXP x);
RcppExport SEXP _openxlsx2_copy(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(copy(x));
    return rcpp_result_gen;
END_RCPP
}
// dims_to_df
SEXP dims_to_df(Rcpp::IntegerVector rows, std::vector<std::string> cols, bool fill);
RcppExport SEXP _openxlsx2_dims_to_df(SEXP rowsSEXP, SEXP colsSEXP, SEXP fillSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type rows(rowsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type cols(colsSEXP);
    Rcpp::traits::input_parameter< bool >::type fill(fillSEXP);
    rcpp_result_gen = Rcpp::wrap(dims_to_df(rows, cols, fill));
    return rcpp_result_gen;
END_RCPP
}
// long_to_wide
void long_to_wide(Rcpp::DataFrame z, Rcpp::DataFrame tt, Rcpp::DataFrame zz);
RcppExport SEXP _openxlsx2_long_to_wide(SEXP zSEXP, SEXP ttSEXP, SEXP zzSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type z(zSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type tt(ttSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type zz(zzSEXP);
    long_to_wide(z, tt, zz);
    return R_NilValue;
END_RCPP
}
// wide_to_long
void wide_to_long(Rcpp::DataFrame z, Rcpp::IntegerVector vtyps, Rcpp::DataFrame zz, bool ColNames, int32_t start_col, int32_t start_row, Rcpp::CharacterVector ref);
RcppExport SEXP _openxlsx2_wide_to_long(SEXP zSEXP, SEXP vtypsSEXP, SEXP zzSEXP, SEXP ColNamesSEXP, SEXP start_colSEXP, SEXP start_rowSEXP, SEXP refSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type z(zSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type vtyps(vtypsSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type zz(zzSEXP);
    Rcpp::traits::input_parameter< bool >::type ColNames(ColNamesSEXP);
    Rcpp::traits::input_parameter< int32_t >::type start_col(start_colSEXP);
    Rcpp::traits::input_parameter< int32_t >::type start_row(start_rowSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type ref(refSEXP);
    wide_to_long(z, vtyps, zz, ColNames, start_col, start_row, ref);
    return R_NilValue;
END_RCPP
}
// build_cell_merges
Rcpp::List build_cell_merges(Rcpp::List comps);
RcppExport SEXP _openxlsx2_build_cell_merges(SEXP compsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type comps(compsSEXP);
    rcpp_result_gen = Rcpp::wrap(build_cell_merges(comps));
    return rcpp_result_gen;
END_RCPP
}
// col_to_df
Rcpp::DataFrame col_to_df(XPtrXML doc);
RcppExport SEXP _openxlsx2_col_to_df(SEXP docSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    rcpp_result_gen = Rcpp::wrap(col_to_df(doc));
    return rcpp_result_gen;
END_RCPP
}
// df_to_xml
Rcpp::CharacterVector df_to_xml(std::string name, Rcpp::DataFrame df_col);
RcppExport SEXP _openxlsx2_df_to_xml(SEXP nameSEXP, SEXP df_colSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type df_col(df_colSEXP);
    rcpp_result_gen = Rcpp::wrap(df_to_xml(name, df_col));
    return rcpp_result_gen;
END_RCPP
}
// loadvals
void loadvals(Rcpp::Environment sheet_data, XPtrXML doc);
RcppExport SEXP _openxlsx2_loadvals(SEXP sheet_dataSEXP, SEXP docSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::Environment >::type sheet_data(sheet_dataSEXP);
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    loadvals(sheet_data, doc);
    return R_NilValue;
END_RCPP
}
// readXMLPtr
SEXP readXMLPtr(std::string path, bool isfile, bool escapes, bool declaration, bool utf8);
RcppExport SEXP _openxlsx2_readXMLPtr(SEXP pathSEXP, SEXP isfileSEXP, SEXP escapesSEXP, SEXP declarationSEXP, SEXP utf8SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< bool >::type isfile(isfileSEXP);
    Rcpp::traits::input_parameter< bool >::type escapes(escapesSEXP);
    Rcpp::traits::input_parameter< bool >::type declaration(declarationSEXP);
    Rcpp::traits::input_parameter< bool >::type utf8(utf8SEXP);
    rcpp_result_gen = Rcpp::wrap(readXMLPtr(path, isfile, escapes, declaration, utf8));
    return rcpp_result_gen;
END_RCPP
}
// readXML
SEXP readXML(std::string path, bool isfile, bool escapes, bool declaration, bool utf8);
RcppExport SEXP _openxlsx2_readXML(SEXP pathSEXP, SEXP isfileSEXP, SEXP escapesSEXP, SEXP declarationSEXP, SEXP utf8SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< bool >::type isfile(isfileSEXP);
    Rcpp::traits::input_parameter< bool >::type escapes(escapesSEXP);
    Rcpp::traits::input_parameter< bool >::type declaration(declarationSEXP);
    Rcpp::traits::input_parameter< bool >::type utf8(utf8SEXP);
    rcpp_result_gen = Rcpp::wrap(readXML(path, isfile, escapes, declaration, utf8));
    return rcpp_result_gen;
END_RCPP
}
// getXMLXPtrName1
SEXP getXMLXPtrName1(XPtrXML doc);
RcppExport SEXP _openxlsx2_getXMLXPtrName1(SEXP docSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    rcpp_result_gen = Rcpp::wrap(getXMLXPtrName1(doc));
    return rcpp_result_gen;
END_RCPP
}
// getXMLXPtrName2
SEXP getXMLXPtrName2(XPtrXML doc, std::string level1);
RcppExport SEXP _openxlsx2_getXMLXPtrName2(SEXP docSEXP, SEXP level1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    Rcpp::traits::input_parameter< std::string >::type level1(level1SEXP);
    rcpp_result_gen = Rcpp::wrap(getXMLXPtrName2(doc, level1));
    return rcpp_result_gen;
END_RCPP
}
// getXMLXPtrName3
SEXP getXMLXPtrName3(XPtrXML doc, std::string level1, std::string level2);
RcppExport SEXP _openxlsx2_getXMLXPtrName3(SEXP docSEXP, SEXP level1SEXP, SEXP level2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    Rcpp::traits::input_parameter< std::string >::type level1(level1SEXP);
    Rcpp::traits::input_parameter< std::string >::type level2(level2SEXP);
    rcpp_result_gen = Rcpp::wrap(getXMLXPtrName3(doc, level1, level2));
    return rcpp_result_gen;
END_RCPP
}
// getXMLXPtr0
SEXP getXMLXPtr0(XPtrXML doc);
RcppExport SEXP _openxlsx2_getXMLXPtr0(SEXP docSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    rcpp_result_gen = Rcpp::wrap(getXMLXPtr0(doc));
    return rcpp_result_gen;
END_RCPP
}
// getXMLXPtr1
SEXP getXMLXPtr1(XPtrXML doc, std::string child);
RcppExport SEXP _openxlsx2_getXMLXPtr1(SEXP docSEXP, SEXP childSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    Rcpp::traits::input_parameter< std::string >::type child(childSEXP);
    rcpp_result_gen = Rcpp::wrap(getXMLXPtr1(doc, child));
    return rcpp_result_gen;
END_RCPP
}
// getXMLXPtr2
SEXP getXMLXPtr2(XPtrXML doc, std::string level1, std::string child);
RcppExport SEXP _openxlsx2_getXMLXPtr2(SEXP docSEXP, SEXP level1SEXP, SEXP childSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    Rcpp::traits::input_parameter< std::string >::type level1(level1SEXP);
    Rcpp::traits::input_parameter< std::string >::type child(childSEXP);
    rcpp_result_gen = Rcpp::wrap(getXMLXPtr2(doc, level1, child));
    return rcpp_result_gen;
END_RCPP
}
// getXMLXPtr3
SEXP getXMLXPtr3(XPtrXML doc, std::string level1, std::string level2, std::string child);
RcppExport SEXP _openxlsx2_getXMLXPtr3(SEXP docSEXP, SEXP level1SEXP, SEXP level2SEXP, SEXP childSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    Rcpp::traits::input_parameter< std::string >::type level1(level1SEXP);
    Rcpp::traits::input_parameter< std::string >::type level2(level2SEXP);
    Rcpp::traits::input_parameter< std::string >::type child(childSEXP);
    rcpp_result_gen = Rcpp::wrap(getXMLXPtr3(doc, level1, level2, child));
    return rcpp_result_gen;
END_RCPP
}
// unkgetXMLXPtr3
SEXP unkgetXMLXPtr3(XPtrXML doc, std::string level1, std::string child);
RcppExport SEXP _openxlsx2_unkgetXMLXPtr3(SEXP docSEXP, SEXP level1SEXP, SEXP childSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    Rcpp::traits::input_parameter< std::string >::type level1(level1SEXP);
    Rcpp::traits::input_parameter< std::string >::type child(childSEXP);
    rcpp_result_gen = Rcpp::wrap(unkgetXMLXPtr3(doc, level1, child));
    return rcpp_result_gen;
END_RCPP
}
// getXMLXPtr4
SEXP getXMLXPtr4(XPtrXML doc, std::string level1, std::string level2, std::string level3, std::string child);
RcppExport SEXP _openxlsx2_getXMLXPtr4(SEXP docSEXP, SEXP level1SEXP, SEXP level2SEXP, SEXP level3SEXP, SEXP childSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    Rcpp::traits::input_parameter< std::string >::type level1(level1SEXP);
    Rcpp::traits::input_parameter< std::string >::type level2(level2SEXP);
    Rcpp::traits::input_parameter< std::string >::type level3(level3SEXP);
    Rcpp::traits::input_parameter< std::string >::type child(childSEXP);
    rcpp_result_gen = Rcpp::wrap(getXMLXPtr4(doc, level1, level2, level3, child));
    return rcpp_result_gen;
END_RCPP
}
// getXMLXPtr1val
SEXP getXMLXPtr1val(XPtrXML doc, std::string child);
RcppExport SEXP _openxlsx2_getXMLXPtr1val(SEXP docSEXP, SEXP childSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    Rcpp::traits::input_parameter< std::string >::type child(childSEXP);
    rcpp_result_gen = Rcpp::wrap(getXMLXPtr1val(doc, child));
    return rcpp_result_gen;
END_RCPP
}
// getXMLXPtr2val
SEXP getXMLXPtr2val(XPtrXML doc, std::string level1, std::string child);
RcppExport SEXP _openxlsx2_getXMLXPtr2val(SEXP docSEXP, SEXP level1SEXP, SEXP childSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    Rcpp::traits::input_parameter< std::string >::type level1(level1SEXP);
    Rcpp::traits::input_parameter< std::string >::type child(childSEXP);
    rcpp_result_gen = Rcpp::wrap(getXMLXPtr2val(doc, level1, child));
    return rcpp_result_gen;
END_RCPP
}
// getXMLXPtr3val
SEXP getXMLXPtr3val(XPtrXML doc, std::string level1, std::string level2, std::string child);
RcppExport SEXP _openxlsx2_getXMLXPtr3val(SEXP docSEXP, SEXP level1SEXP, SEXP level2SEXP, SEXP childSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    Rcpp::traits::input_parameter< std::string >::type level1(level1SEXP);
    Rcpp::traits::input_parameter< std::string >::type level2(level2SEXP);
    Rcpp::traits::input_parameter< std::string >::type child(childSEXP);
    rcpp_result_gen = Rcpp::wrap(getXMLXPtr3val(doc, level1, level2, child));
    return rcpp_result_gen;
END_RCPP
}
// getXMLXPtr4val
SEXP getXMLXPtr4val(XPtrXML doc, std::string level1, std::string level2, std::string level3, std::string child);
RcppExport SEXP _openxlsx2_getXMLXPtr4val(SEXP docSEXP, SEXP level1SEXP, SEXP level2SEXP, SEXP level3SEXP, SEXP childSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    Rcpp::traits::input_parameter< std::string >::type level1(level1SEXP);
    Rcpp::traits::input_parameter< std::string >::type level2(level2SEXP);
    Rcpp::traits::input_parameter< std::string >::type level3(level3SEXP);
    Rcpp::traits::input_parameter< std::string >::type child(childSEXP);
    rcpp_result_gen = Rcpp::wrap(getXMLXPtr4val(doc, level1, level2, level3, child));
    return rcpp_result_gen;
END_RCPP
}
// getXMLXPtr1attr
SEXP getXMLXPtr1attr(XPtrXML doc, std::string child);
RcppExport SEXP _openxlsx2_getXMLXPtr1attr(SEXP docSEXP, SEXP childSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    Rcpp::traits::input_parameter< std::string >::type child(childSEXP);
    rcpp_result_gen = Rcpp::wrap(getXMLXPtr1attr(doc, child));
    return rcpp_result_gen;
END_RCPP
}
// getXMLXPtr2attr
Rcpp::List getXMLXPtr2attr(XPtrXML doc, std::string level1, std::string child);
RcppExport SEXP _openxlsx2_getXMLXPtr2attr(SEXP docSEXP, SEXP level1SEXP, SEXP childSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    Rcpp::traits::input_parameter< std::string >::type level1(level1SEXP);
    Rcpp::traits::input_parameter< std::string >::type child(childSEXP);
    rcpp_result_gen = Rcpp::wrap(getXMLXPtr2attr(doc, level1, child));
    return rcpp_result_gen;
END_RCPP
}
// getXMLXPtr3attr
SEXP getXMLXPtr3attr(XPtrXML doc, std::string level1, std::string level2, std::string child);
RcppExport SEXP _openxlsx2_getXMLXPtr3attr(SEXP docSEXP, SEXP level1SEXP, SEXP level2SEXP, SEXP childSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    Rcpp::traits::input_parameter< std::string >::type level1(level1SEXP);
    Rcpp::traits::input_parameter< std::string >::type level2(level2SEXP);
    Rcpp::traits::input_parameter< std::string >::type child(childSEXP);
    rcpp_result_gen = Rcpp::wrap(getXMLXPtr3attr(doc, level1, level2, child));
    return rcpp_result_gen;
END_RCPP
}
// getXMLXPtr4attr
Rcpp::List getXMLXPtr4attr(XPtrXML doc, std::string level1, std::string level2, std::string level3, std::string child);
RcppExport SEXP _openxlsx2_getXMLXPtr4attr(SEXP docSEXP, SEXP level1SEXP, SEXP level2SEXP, SEXP level3SEXP, SEXP childSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    Rcpp::traits::input_parameter< std::string >::type level1(level1SEXP);
    Rcpp::traits::input_parameter< std::string >::type level2(level2SEXP);
    Rcpp::traits::input_parameter< std::string >::type level3(level3SEXP);
    Rcpp::traits::input_parameter< std::string >::type child(childSEXP);
    rcpp_result_gen = Rcpp::wrap(getXMLXPtr4attr(doc, level1, level2, level3, child));
    return rcpp_result_gen;
END_RCPP
}
// printXPtr
std::string printXPtr(XPtrXML doc, bool no_escapes, bool raw);
RcppExport SEXP _openxlsx2_printXPtr(SEXP docSEXP, SEXP no_escapesSEXP, SEXP rawSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    Rcpp::traits::input_parameter< bool >::type no_escapes(no_escapesSEXP);
    Rcpp::traits::input_parameter< bool >::type raw(rawSEXP);
    rcpp_result_gen = Rcpp::wrap(printXPtr(doc, no_escapes, raw));
    return rcpp_result_gen;
END_RCPP
}
// write_xml_file
XPtrXML write_xml_file(std::string xml_content, bool escapes);
RcppExport SEXP _openxlsx2_write_xml_file(SEXP xml_contentSEXP, SEXP escapesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type xml_content(xml_contentSEXP);
    Rcpp::traits::input_parameter< bool >::type escapes(escapesSEXP);
    rcpp_result_gen = Rcpp::wrap(write_xml_file(xml_content, escapes));
    return rcpp_result_gen;
END_RCPP
}
// xml_attr_mod
Rcpp::CharacterVector xml_attr_mod(std::string xml_content, Rcpp::CharacterVector xml_attributes, bool escapes, bool declaration);
RcppExport SEXP _openxlsx2_xml_attr_mod(SEXP xml_contentSEXP, SEXP xml_attributesSEXP, SEXP escapesSEXP, SEXP declarationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type xml_content(xml_contentSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type xml_attributes(xml_attributesSEXP);
    Rcpp::traits::input_parameter< bool >::type escapes(escapesSEXP);
    Rcpp::traits::input_parameter< bool >::type declaration(declarationSEXP);
    rcpp_result_gen = Rcpp::wrap(xml_attr_mod(xml_content, xml_attributes, escapes, declaration));
    return rcpp_result_gen;
END_RCPP
}
// xml_node_create
Rcpp::CharacterVector xml_node_create(std::string xml_name, Rcpp::Nullable<Rcpp::CharacterVector> xml_children, Rcpp::Nullable<Rcpp::CharacterVector> xml_attributes, bool escapes, bool declaration);
RcppExport SEXP _openxlsx2_xml_node_create(SEXP xml_nameSEXP, SEXP xml_childrenSEXP, SEXP xml_attributesSEXP, SEXP escapesSEXP, SEXP declarationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type xml_name(xml_nameSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::CharacterVector> >::type xml_children(xml_childrenSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::CharacterVector> >::type xml_attributes(xml_attributesSEXP);
    Rcpp::traits::input_parameter< bool >::type escapes(escapesSEXP);
    Rcpp::traits::input_parameter< bool >::type declaration(declarationSEXP);
    rcpp_result_gen = Rcpp::wrap(xml_node_create(xml_name, xml_children, xml_attributes, escapes, declaration));
    return rcpp_result_gen;
END_RCPP
}
// xml_append_child1
SEXP xml_append_child1(XPtrXML node, XPtrXML child, bool pointer, bool escapes);
RcppExport SEXP _openxlsx2_xml_append_child1(SEXP nodeSEXP, SEXP childSEXP, SEXP pointerSEXP, SEXP escapesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< XPtrXML >::type child(childSEXP);
    Rcpp::traits::input_parameter< bool >::type pointer(pointerSEXP);
    Rcpp::traits::input_parameter< bool >::type escapes(escapesSEXP);
    rcpp_result_gen = Rcpp::wrap(xml_append_child1(node, child, pointer, escapes));
    return rcpp_result_gen;
END_RCPP
}
// xml_append_child2
SEXP xml_append_child2(XPtrXML node, XPtrXML child, std::string level1, bool pointer, bool escapes);
RcppExport SEXP _openxlsx2_xml_append_child2(SEXP nodeSEXP, SEXP childSEXP, SEXP level1SEXP, SEXP pointerSEXP, SEXP escapesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< XPtrXML >::type child(childSEXP);
    Rcpp::traits::input_parameter< std::string >::type level1(level1SEXP);
    Rcpp::traits::input_parameter< bool >::type pointer(pointerSEXP);
    Rcpp::traits::input_parameter< bool >::type escapes(escapesSEXP);
    rcpp_result_gen = Rcpp::wrap(xml_append_child2(node, child, level1, pointer, escapes));
    return rcpp_result_gen;
END_RCPP
}
// xml_append_child3
SEXP xml_append_child3(XPtrXML node, XPtrXML child, std::string level1, std::string level2, bool pointer, bool escapes);
RcppExport SEXP _openxlsx2_xml_append_child3(SEXP nodeSEXP, SEXP childSEXP, SEXP level1SEXP, SEXP level2SEXP, SEXP pointerSEXP, SEXP escapesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< XPtrXML >::type child(childSEXP);
    Rcpp::traits::input_parameter< std::string >::type level1(level1SEXP);
    Rcpp::traits::input_parameter< std::string >::type level2(level2SEXP);
    Rcpp::traits::input_parameter< bool >::type pointer(pointerSEXP);
    Rcpp::traits::input_parameter< bool >::type escapes(escapesSEXP);
    rcpp_result_gen = Rcpp::wrap(xml_append_child3(node, child, level1, level2, pointer, escapes));
    return rcpp_result_gen;
END_RCPP
}
// si_to_txt
SEXP si_to_txt(XPtrXML doc);
RcppExport SEXP _openxlsx2_si_to_txt(SEXP docSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    rcpp_result_gen = Rcpp::wrap(si_to_txt(doc));
    return rcpp_result_gen;
END_RCPP
}
// txt_to_si
std::string txt_to_si(Rcpp::CharacterVector txt, bool no_escapes, bool raw);
RcppExport SEXP _openxlsx2_txt_to_si(SEXP txtSEXP, SEXP no_escapesSEXP, SEXP rawSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type txt(txtSEXP);
    Rcpp::traits::input_parameter< bool >::type no_escapes(no_escapesSEXP);
    Rcpp::traits::input_parameter< bool >::type raw(rawSEXP);
    rcpp_result_gen = Rcpp::wrap(txt_to_si(txt, no_escapes, raw));
    return rcpp_result_gen;
END_RCPP
}
// is_to_txt
SEXP is_to_txt(Rcpp::CharacterVector is_vec);
RcppExport SEXP _openxlsx2_is_to_txt(SEXP is_vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type is_vec(is_vecSEXP);
    rcpp_result_gen = Rcpp::wrap(is_to_txt(is_vec));
    return rcpp_result_gen;
END_RCPP
}
// txt_to_is
std::string txt_to_is(std::string text, bool no_escapes, bool raw);
RcppExport SEXP _openxlsx2_txt_to_is(SEXP textSEXP, SEXP no_escapesSEXP, SEXP rawSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type text(textSEXP);
    Rcpp::traits::input_parameter< bool >::type no_escapes(no_escapesSEXP);
    Rcpp::traits::input_parameter< bool >::type raw(rawSEXP);
    rcpp_result_gen = Rcpp::wrap(txt_to_is(text, no_escapes, raw));
    return rcpp_result_gen;
END_RCPP
}
// read_xf
Rcpp::DataFrame read_xf(XPtrXML xml_doc_xf);
RcppExport SEXP _openxlsx2_read_xf(SEXP xml_doc_xfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type xml_doc_xf(xml_doc_xfSEXP);
    rcpp_result_gen = Rcpp::wrap(read_xf(xml_doc_xf));
    return rcpp_result_gen;
END_RCPP
}
// write_xf
Rcpp::CharacterVector write_xf(Rcpp::DataFrame df_xf);
RcppExport SEXP _openxlsx2_write_xf(SEXP df_xfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type df_xf(df_xfSEXP);
    rcpp_result_gen = Rcpp::wrap(write_xf(df_xf));
    return rcpp_result_gen;
END_RCPP
}
// read_font
Rcpp::DataFrame read_font(XPtrXML xml_doc_font);
RcppExport SEXP _openxlsx2_read_font(SEXP xml_doc_fontSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type xml_doc_font(xml_doc_fontSEXP);
    rcpp_result_gen = Rcpp::wrap(read_font(xml_doc_font));
    return rcpp_result_gen;
END_RCPP
}
// write_font
Rcpp::CharacterVector write_font(Rcpp::DataFrame df_font);
RcppExport SEXP _openxlsx2_write_font(SEXP df_fontSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type df_font(df_fontSEXP);
    rcpp_result_gen = Rcpp::wrap(write_font(df_font));
    return rcpp_result_gen;
END_RCPP
}
// read_numfmt
Rcpp::DataFrame read_numfmt(XPtrXML xml_doc_numfmt);
RcppExport SEXP _openxlsx2_read_numfmt(SEXP xml_doc_numfmtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type xml_doc_numfmt(xml_doc_numfmtSEXP);
    rcpp_result_gen = Rcpp::wrap(read_numfmt(xml_doc_numfmt));
    return rcpp_result_gen;
END_RCPP
}
// write_numfmt
Rcpp::CharacterVector write_numfmt(Rcpp::DataFrame df_numfmt);
RcppExport SEXP _openxlsx2_write_numfmt(SEXP df_numfmtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type df_numfmt(df_numfmtSEXP);
    rcpp_result_gen = Rcpp::wrap(write_numfmt(df_numfmt));
    return rcpp_result_gen;
END_RCPP
}
// read_border
Rcpp::DataFrame read_border(XPtrXML xml_doc_border);
RcppExport SEXP _openxlsx2_read_border(SEXP xml_doc_borderSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type xml_doc_border(xml_doc_borderSEXP);
    rcpp_result_gen = Rcpp::wrap(read_border(xml_doc_border));
    return rcpp_result_gen;
END_RCPP
}
// write_border
Rcpp::CharacterVector write_border(Rcpp::DataFrame df_border);
RcppExport SEXP _openxlsx2_write_border(SEXP df_borderSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type df_border(df_borderSEXP);
    rcpp_result_gen = Rcpp::wrap(write_border(df_border));
    return rcpp_result_gen;
END_RCPP
}
// read_fill
Rcpp::DataFrame read_fill(XPtrXML xml_doc_fill);
RcppExport SEXP _openxlsx2_read_fill(SEXP xml_doc_fillSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type xml_doc_fill(xml_doc_fillSEXP);
    rcpp_result_gen = Rcpp::wrap(read_fill(xml_doc_fill));
    return rcpp_result_gen;
END_RCPP
}
// write_fill
Rcpp::CharacterVector write_fill(Rcpp::DataFrame df_fill);
RcppExport SEXP _openxlsx2_write_fill(SEXP df_fillSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type df_fill(df_fillSEXP);
    rcpp_result_gen = Rcpp::wrap(write_fill(df_fill));
    return rcpp_result_gen;
END_RCPP
}
// read_cellStyle
Rcpp::DataFrame read_cellStyle(XPtrXML xml_doc_cellStyle);
RcppExport SEXP _openxlsx2_read_cellStyle(SEXP xml_doc_cellStyleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type xml_doc_cellStyle(xml_doc_cellStyleSEXP);
    rcpp_result_gen = Rcpp::wrap(read_cellStyle(xml_doc_cellStyle));
    return rcpp_result_gen;
END_RCPP
}
// write_cellStyle
Rcpp::CharacterVector write_cellStyle(Rcpp::DataFrame df_cellstyle);
RcppExport SEXP _openxlsx2_write_cellStyle(SEXP df_cellstyleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type df_cellstyle(df_cellstyleSEXP);
    rcpp_result_gen = Rcpp::wrap(write_cellStyle(df_cellstyle));
    return rcpp_result_gen;
END_RCPP
}
// read_tableStyle
Rcpp::DataFrame read_tableStyle(XPtrXML xml_doc_tableStyle);
RcppExport SEXP _openxlsx2_read_tableStyle(SEXP xml_doc_tableStyleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type xml_doc_tableStyle(xml_doc_tableStyleSEXP);
    rcpp_result_gen = Rcpp::wrap(read_tableStyle(xml_doc_tableStyle));
    return rcpp_result_gen;
END_RCPP
}
// write_tableStyle
Rcpp::CharacterVector write_tableStyle(Rcpp::DataFrame df_tablestyle);
RcppExport SEXP _openxlsx2_write_tableStyle(SEXP df_tablestyleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type df_tablestyle(df_tablestyleSEXP);
    rcpp_result_gen = Rcpp::wrap(write_tableStyle(df_tablestyle));
    return rcpp_result_gen;
END_RCPP
}
// read_dxf
Rcpp::DataFrame read_dxf(XPtrXML xml_doc_dxf);
RcppExport SEXP _openxlsx2_read_dxf(SEXP xml_doc_dxfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type xml_doc_dxf(xml_doc_dxfSEXP);
    rcpp_result_gen = Rcpp::wrap(read_dxf(xml_doc_dxf));
    return rcpp_result_gen;
END_RCPP
}
// write_dxf
Rcpp::CharacterVector write_dxf(Rcpp::DataFrame df_dxf);
RcppExport SEXP _openxlsx2_write_dxf(SEXP df_dxfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type df_dxf(df_dxfSEXP);
    rcpp_result_gen = Rcpp::wrap(write_dxf(df_dxf));
    return rcpp_result_gen;
END_RCPP
}
// read_colors
Rcpp::DataFrame read_colors(XPtrXML xml_doc_colors);
RcppExport SEXP _openxlsx2_read_colors(SEXP xml_doc_colorsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type xml_doc_colors(xml_doc_colorsSEXP);
    rcpp_result_gen = Rcpp::wrap(read_colors(xml_doc_colors));
    return rcpp_result_gen;
END_RCPP
}
// write_colors
Rcpp::CharacterVector write_colors(Rcpp::DataFrame df_colors);
RcppExport SEXP _openxlsx2_write_colors(SEXP df_colorsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type df_colors(df_colorsSEXP);
    rcpp_result_gen = Rcpp::wrap(write_colors(df_colors));
    return rcpp_result_gen;
END_RCPP
}
// set_sst
Rcpp::CharacterVector set_sst(Rcpp::CharacterVector sharedStrings);
RcppExport SEXP _openxlsx2_set_sst(SEXP sharedStringsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type sharedStrings(sharedStringsSEXP);
    rcpp_result_gen = Rcpp::wrap(set_sst(sharedStrings));
    return rcpp_result_gen;
END_RCPP
}
// write_worksheet
XPtrXML write_worksheet(std::string prior, std::string post, Rcpp::Environment sheet_data);
RcppExport SEXP _openxlsx2_write_worksheet(SEXP priorSEXP, SEXP postSEXP, SEXP sheet_dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< std::string >::type post(postSEXP);
    Rcpp::traits::input_parameter< Rcpp::Environment >::type sheet_data(sheet_dataSEXP);
    rcpp_result_gen = Rcpp::wrap(write_worksheet(prior, post, sheet_data));
    return rcpp_result_gen;
END_RCPP
}
// write_xmlPtr
void write_xmlPtr(XPtrXML doc, std::string fl);
RcppExport SEXP _openxlsx2_write_xmlPtr(SEXP docSEXP, SEXP flSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    Rcpp::traits::input_parameter< std::string >::type fl(flSEXP);
    write_xmlPtr(doc, fl);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_openxlsx2_openxlsx2_type", (DL_FUNC) &_openxlsx2_openxlsx2_type, 1},
    {"_openxlsx2_int_to_col", (DL_FUNC) &_openxlsx2_int_to_col, 1},
    {"_openxlsx2_col_to_int", (DL_FUNC) &_openxlsx2_col_to_int, 1},
    {"_openxlsx2_rbindlist", (DL_FUNC) &_openxlsx2_rbindlist, 1},
    {"_openxlsx2_copy", (DL_FUNC) &_openxlsx2_copy, 1},
    {"_openxlsx2_dims_to_df", (DL_FUNC) &_openxlsx2_dims_to_df, 3},
    {"_openxlsx2_long_to_wide", (DL_FUNC) &_openxlsx2_long_to_wide, 3},
    {"_openxlsx2_wide_to_long", (DL_FUNC) &_openxlsx2_wide_to_long, 7},
    {"_openxlsx2_build_cell_merges", (DL_FUNC) &_openxlsx2_build_cell_merges, 1},
    {"_openxlsx2_col_to_df", (DL_FUNC) &_openxlsx2_col_to_df, 1},
    {"_openxlsx2_df_to_xml", (DL_FUNC) &_openxlsx2_df_to_xml, 2},
    {"_openxlsx2_loadvals", (DL_FUNC) &_openxlsx2_loadvals, 2},
    {"_openxlsx2_readXMLPtr", (DL_FUNC) &_openxlsx2_readXMLPtr, 5},
    {"_openxlsx2_readXML", (DL_FUNC) &_openxlsx2_readXML, 5},
    {"_openxlsx2_getXMLXPtrName1", (DL_FUNC) &_openxlsx2_getXMLXPtrName1, 1},
    {"_openxlsx2_getXMLXPtrName2", (DL_FUNC) &_openxlsx2_getXMLXPtrName2, 2},
    {"_openxlsx2_getXMLXPtrName3", (DL_FUNC) &_openxlsx2_getXMLXPtrName3, 3},
    {"_openxlsx2_getXMLXPtr0", (DL_FUNC) &_openxlsx2_getXMLXPtr0, 1},
    {"_openxlsx2_getXMLXPtr1", (DL_FUNC) &_openxlsx2_getXMLXPtr1, 2},
    {"_openxlsx2_getXMLXPtr2", (DL_FUNC) &_openxlsx2_getXMLXPtr2, 3},
    {"_openxlsx2_getXMLXPtr3", (DL_FUNC) &_openxlsx2_getXMLXPtr3, 4},
    {"_openxlsx2_unkgetXMLXPtr3", (DL_FUNC) &_openxlsx2_unkgetXMLXPtr3, 3},
    {"_openxlsx2_getXMLXPtr4", (DL_FUNC) &_openxlsx2_getXMLXPtr4, 5},
    {"_openxlsx2_getXMLXPtr1val", (DL_FUNC) &_openxlsx2_getXMLXPtr1val, 2},
    {"_openxlsx2_getXMLXPtr2val", (DL_FUNC) &_openxlsx2_getXMLXPtr2val, 3},
    {"_openxlsx2_getXMLXPtr3val", (DL_FUNC) &_openxlsx2_getXMLXPtr3val, 4},
    {"_openxlsx2_getXMLXPtr4val", (DL_FUNC) &_openxlsx2_getXMLXPtr4val, 5},
    {"_openxlsx2_getXMLXPtr1attr", (DL_FUNC) &_openxlsx2_getXMLXPtr1attr, 2},
    {"_openxlsx2_getXMLXPtr2attr", (DL_FUNC) &_openxlsx2_getXMLXPtr2attr, 3},
    {"_openxlsx2_getXMLXPtr3attr", (DL_FUNC) &_openxlsx2_getXMLXPtr3attr, 4},
    {"_openxlsx2_getXMLXPtr4attr", (DL_FUNC) &_openxlsx2_getXMLXPtr4attr, 5},
    {"_openxlsx2_printXPtr", (DL_FUNC) &_openxlsx2_printXPtr, 3},
    {"_openxlsx2_write_xml_file", (DL_FUNC) &_openxlsx2_write_xml_file, 2},
    {"_openxlsx2_xml_attr_mod", (DL_FUNC) &_openxlsx2_xml_attr_mod, 4},
    {"_openxlsx2_xml_node_create", (DL_FUNC) &_openxlsx2_xml_node_create, 5},
    {"_openxlsx2_xml_append_child1", (DL_FUNC) &_openxlsx2_xml_append_child1, 4},
    {"_openxlsx2_xml_append_child2", (DL_FUNC) &_openxlsx2_xml_append_child2, 5},
    {"_openxlsx2_xml_append_child3", (DL_FUNC) &_openxlsx2_xml_append_child3, 6},
    {"_openxlsx2_si_to_txt", (DL_FUNC) &_openxlsx2_si_to_txt, 1},
    {"_openxlsx2_txt_to_si", (DL_FUNC) &_openxlsx2_txt_to_si, 3},
    {"_openxlsx2_is_to_txt", (DL_FUNC) &_openxlsx2_is_to_txt, 1},
    {"_openxlsx2_txt_to_is", (DL_FUNC) &_openxlsx2_txt_to_is, 3},
    {"_openxlsx2_read_xf", (DL_FUNC) &_openxlsx2_read_xf, 1},
    {"_openxlsx2_write_xf", (DL_FUNC) &_openxlsx2_write_xf, 1},
    {"_openxlsx2_read_font", (DL_FUNC) &_openxlsx2_read_font, 1},
    {"_openxlsx2_write_font", (DL_FUNC) &_openxlsx2_write_font, 1},
    {"_openxlsx2_read_numfmt", (DL_FUNC) &_openxlsx2_read_numfmt, 1},
    {"_openxlsx2_write_numfmt", (DL_FUNC) &_openxlsx2_write_numfmt, 1},
    {"_openxlsx2_read_border", (DL_FUNC) &_openxlsx2_read_border, 1},
    {"_openxlsx2_write_border", (DL_FUNC) &_openxlsx2_write_border, 1},
    {"_openxlsx2_read_fill", (DL_FUNC) &_openxlsx2_read_fill, 1},
    {"_openxlsx2_write_fill", (DL_FUNC) &_openxlsx2_write_fill, 1},
    {"_openxlsx2_read_cellStyle", (DL_FUNC) &_openxlsx2_read_cellStyle, 1},
    {"_openxlsx2_write_cellStyle", (DL_FUNC) &_openxlsx2_write_cellStyle, 1},
    {"_openxlsx2_read_tableStyle", (DL_FUNC) &_openxlsx2_read_tableStyle, 1},
    {"_openxlsx2_write_tableStyle", (DL_FUNC) &_openxlsx2_write_tableStyle, 1},
    {"_openxlsx2_read_dxf", (DL_FUNC) &_openxlsx2_read_dxf, 1},
    {"_openxlsx2_write_dxf", (DL_FUNC) &_openxlsx2_write_dxf, 1},
    {"_openxlsx2_read_colors", (DL_FUNC) &_openxlsx2_read_colors, 1},
    {"_openxlsx2_write_colors", (DL_FUNC) &_openxlsx2_write_colors, 1},
    {"_openxlsx2_set_sst", (DL_FUNC) &_openxlsx2_set_sst, 1},
    {"_openxlsx2_write_worksheet", (DL_FUNC) &_openxlsx2_write_worksheet, 3},
    {"_openxlsx2_write_xmlPtr", (DL_FUNC) &_openxlsx2_write_xmlPtr, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_openxlsx2(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
