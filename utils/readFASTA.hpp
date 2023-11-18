#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Trims leading and trailing whitespaces from a string in-place.
 * 
 * This function modifies the input string by removing leading and trailing whitespaces,
 * including spaces, newline characters, carriage returns, and tabs.
 * 
 * @param s The string to be trimmed. The modified string is returned by reference.
 * @return A reference to the modified input string after trimming.
 * 
 * @note Example usage:
 * \code{.cpp}
 *   string text = "   Hello, World!   ";
 *   trim(text);
 *   // 'text' now contains "Hello, World!" without leading and trailing whitespaces.
 * \endcode
 */
string& trim(string &s) {
	s.erase(0, s.find_first_not_of(" \n\r\t"));
	s.erase(s.find_last_not_of(" \n\r\t")+1);
	return s;
}

/**
 * @brief Reads sequences from a FASTA format file and populates two vectors with header and sequence data.
 * 
 * This function reads sequences from a given input stream in FASTA format, extracting header and sequence information.
 * It populates the provided vectors with headers and corresponding sequences. Each entry in the vectors represents a 
 * sequence and its header.
 * 
 * @param hv A reference to a vector of strings where the headers will be stored.
 * @param sv A reference to a vector of strings where the sequences will be stored.
 * @param is An input stream from which the FASTA-formatted data will be read. Default is set to standard input (cin).
 * 
 * @note The function assumes that the input stream is in FASTA format and may not perform additional format validation.
 * @note The information is appended to the vectors hv, sv.
 * 
 * @note Example usage:
 * \code{.cpp}
 *   vector<string> headers, sequences;
 *   ifstream inputFile("sequences.fasta");
 *   readFASTA(headers, sequences, inputFile);
 *   // Now 'headers' and 'sequences' vectors contain the header and sequence data from the FASTA file.
 * \endcode
 */
void readFASTA(vector<string> &hv, vector<string> &sv, istream &is = cin) {
	string l, h = "", s = "";
	while(getline(is, l)) {
		trim(l);
		if(l.empty()) continue;
		if(l[0] == '>') {
			if(!h.empty()) {
				hv.push_back(h);
				sv.push_back(s);
			}
			h = l.substr(1), s = "";
		} else {
			s += l;
		}
	}
	if(!h.empty()) {
		hv.push_back(h);
		sv.push_back(s);
	}
}