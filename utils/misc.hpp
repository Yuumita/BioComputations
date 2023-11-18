#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Computes the Hamming distance between two strings.
 * 
 * The Hamming distance is the number of positions at which the corresponding symbols differ
 * between two equal-length strings. If the input strings are of different lengths, 
 * the function returns the maximum possible value of the specified type (default: int).
 * 
 * @tparam T The type for storing the result. Defaults to int.
 * @param s The first string for comparison.
 * @param t The second string for comparison.
 * @return The Hamming distance between the two input strings or numeric_limits<T>::max() if the strings have different lengths.
 * 
 * @note Example usage:
 * \code{.cpp}
 *   string str1 = "AGTACG";
 *   string str2 = "CGTACC";
 *   int distance = hamming(str1, str2);
 * \endcode
 */
template<typename T = int>
T hamming(const string &s, const string &t) {
	if(s.size() != t.size()) return numeric_limits<T>::max();
	T ret = 0;
	for(int i = 0; i < s.size(); i++) 
        ret += (s[i] != t[i] ? T(1) : T(0));
	return ret;
}

/**
 * @brief Computes the GC content percentage of a DNA sequence.
 * 
 * The GC content is the percentage of nucleotides in a DNA sequence that are either 'C' (cytosine) or 'G' (guanine).
 * 
 * @param dna The DNA sequence for which to compute the GC content.
 * @return The GC content percentage as a double value.
 * 
 * @note Example usage:
 * \code{.cpp}
 *   string dnaSeq = "ATGCGTCAGTAC";
 *   double gcContent = gc_content(dnaSeq);
 *   // 'gcContent' now contains the percentage of GC content in the DNA sequence.
 * \endcode
 */
double gc_content(string dna) {
    int cnt = 0;
    for(int i = 0; i < (int)dna.size(); i++) if(dna[i] == 'C' || dna[i] == 'G') cnt++;
	return 100.0 * cnt / dna.size();
}