#include <string>

using std::string;

class SimilarityChecker {

public:
	int checkLengthSimilarity(const std::string& str1, const std::string& str2) {
		
		int length1 = str1.length();
		int length2 = str2.length();

		if (isSameStringNum(length1, length2)) return LENGTH_SIMILARITY_MAX_SCORE;
		if (isTwiceDifferentStringNum(length1, length2)) return LENGTH_SIMILARITY_MIN_SCORE;

		return calcPartScore(length1, length2);
	}

private:

	static const int LENGTH_SIMILARITY_MAX_SCORE = 60;
	static const int LENGTH_SIMILARITY_MIN_SCORE = 0;

	bool isSameStringNum(int length1, int length2)
	{
		return length1 == length2;
	}

	bool isTwiceDifferentStringNum(int length1, int length2)
	{
		return length1 / 2 >= length2 || length2 / 2 >= length1;
	}

	int calcPartScore(int& length1, int& length2)
	{
		int shorter = std::min(length1, length2);
		int gap = std::abs(length1 - length2);

		return LENGTH_SIMILARITY_MAX_SCORE * (1 - (double)gap / shorter);
	}
};