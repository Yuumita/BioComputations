#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Retrieves a map representing the genetic code for codons.
 * 
 * This function returns a map where keys are RNA codons, and values are the corresponding amino acids.
 * The genetic code follows the standard mapping of codons to amino acids, including the mapping of
 * start and stop codons to special characters. The map can be used for translating RNA sequences to
 * amino acid sequences.
 * 
 * @return A map<string, char> representing the genetic code for codons.
 * 
 * @note RNA codons tha represent 'STOP' are represent as a space character ' '.
 * @note The returned map has the following format:
 * - Keys: RNA codons (e.g., "UUU", "AUG", "GGA").
 * - Values: Corresponding amino acids ('A', 'C', 'D', ..., ' ', '*', etc.).
 * 
 * @note Example usage:
 * \code{.cpp}
 *   map<string, char> codonMap = getCodonMap();
 *   char aminoAcid = codonMap["UGU"]; // Retrieves the amino acid corresponding to the 'UGU' codon.
 * \endcode
 */
map<string, char> getCodonMap() {
	map<string, char> codonMap;

	codonMap["UUU"] = 'F';   codonMap["CUU"] = 'L';   codonMap["AUU"] = 'I';   codonMap["GUU"] = 'V';
    codonMap["UUC"] = 'F';   codonMap["CUC"] = 'L';   codonMap["AUC"] = 'I';   codonMap["GUC"] = 'V';
    codonMap["UUA"] = 'L';   codonMap["CUA"] = 'L';   codonMap["AUA"] = 'I';   codonMap["GUA"] = 'V';
    codonMap["UUG"] = 'L';   codonMap["CUG"] = 'L';   codonMap["AUG"] = 'M';   codonMap["GUG"] = 'V';
    codonMap["UCU"] = 'S';   codonMap["CCU"] = 'P';   codonMap["ACU"] = 'T';   codonMap["GCU"] = 'A';
    codonMap["UCC"] = 'S';   codonMap["CCC"] = 'P';   codonMap["ACC"] = 'T';   codonMap["GCC"] = 'A';
    codonMap["UCA"] = 'S';   codonMap["CCA"] = 'P';   codonMap["ACA"] = 'T';   codonMap["GCA"] = 'A';
    codonMap["UCG"] = 'S';   codonMap["CCG"] = 'P';   codonMap["ACG"] = 'T';   codonMap["GCG"] = 'A';
    codonMap["UAU"] = 'Y';   codonMap["CAU"] = 'H';   codonMap["AAU"] = 'N';   codonMap["GAU"] = 'D';
    codonMap["UAC"] = 'Y';   codonMap["CAC"] = 'H';   codonMap["AAC"] = 'N';   codonMap["GAC"] = 'D';
    codonMap["UAA"] = ' ';   codonMap["CAA"] = 'Q';   codonMap["AAA"] = 'K';   codonMap["GAA"] = 'E';
    codonMap["UAG"] = ' ';   codonMap["CAG"] = 'Q';   codonMap["AAG"] = 'K';   codonMap["GAG"] = 'E';
    codonMap["UGU"] = 'C';   codonMap["CGU"] = 'R';   codonMap["AGU"] = 'S';   codonMap["GGU"] = 'G';
    codonMap["UGC"] = 'C';   codonMap["CGC"] = 'R';   codonMap["AGC"] = 'S';   codonMap["GGC"] = 'G';
    codonMap["UGA"] = ' ';   codonMap["CGA"] = 'R';   codonMap["AGA"] = 'R';   codonMap["GGA"] = 'G';
    codonMap["UGG"] = 'W';   codonMap["CGG"] = 'R';   codonMap["AGG"] = 'R';   codonMap["GGG"] = 'G';

    return codonMap;
}