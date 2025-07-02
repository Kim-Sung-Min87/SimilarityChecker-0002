#include <string>

using std::string;

class SimilarityChecker {

public:
	int checkLengthSimilarity(const std::string& str1, const std::string& str2) {
		
		int length1 = str1.length();
		int length2 = str2.length();

		if (length1 == length2) return 60;
		
		return 0;
	}

};