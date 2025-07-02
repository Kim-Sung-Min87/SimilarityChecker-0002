#include "gmock/gmock.h"
#include "SimilarityChecker.cpp"
#include <string>

using namespace testing;
using std::string;

TEST(SimilarityCheckerTest, SameStringNum) {

	SimilarityChecker similarityChecker;

	string str1 = "ABCDE";
	string str2 = "ABCDE";

	int ret = similarityChecker.checkLengthSimilarity(str1, str2);

	EXPECT_EQ(ret, 60); 
}

TEST(SimilarityCheckerTest, TwiceLengthString) {

	SimilarityChecker similarityChecker;

	string str1 = "ABCDE";
	string str2 = "ABCDEABCDE";

	int ret = similarityChecker.checkLengthSimilarity(str1, str2);

	EXPECT_EQ(ret, 0);
}

TEST(SimilarityCheckerTest, TwiceLengthString2) {

	SimilarityChecker similarityChecker;

	string str1 = "ABCDEABCDE";
	string str2 = "ABCDE";

	int ret = similarityChecker.checkLengthSimilarity(str1, str2);

	EXPECT_EQ(ret, 0);
}

TEST(SimilarityCheckerTest, PartScoreStringNum) {

	SimilarityChecker similarityChecker;

	string str1 = "ABCDEAB";
	string str2 = "ABCDE";

	int ret = similarityChecker.checkLengthSimilarity(str1, str2);

	EXPECT_EQ(ret, 36);
}


