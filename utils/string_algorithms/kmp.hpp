#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Computes the prefix function for a given string.
 * 
 * The prefix function for a string 's' is an array 'pi' such that pi[i] is the length of
 * the longest proper prefix of the substring s[0..i] which is also a suffix of this substring.
 * 
 * @param s The input string for which to compute the prefix function.
 * @return A vector<int> containing the prefix function values for each position in the input string.
 * 
 * @note Example usage:
 * \code{.cpp}
 *   string text = "ababab";
 *   vector<int> prefixValues = prefix_function(text);
 *   // 'prefixValues' now contains {0, 0, 1, 2, 3, 4} for the input string "ababab".
 * \endcode
 */
vector<int> prefix_function(const string &s) {
	int n = int(s.size());
	vector<int> pi(n, 0);
	for(int i = 1; i < n; i++) {
		int j = pi[i-1];
		while(j > 0 && s[i] != s[j]) j = pi[j - 1];
		if(s[i] == s[j]) j++;
		pi[i] = j;
	}
	return pi;
}
