#include "gmock/gmock.h"
#include "SimilarityChecker.cpp"
#include <string>

using namespace testing;
using std::string;

TEST(SimilarityCheckerTest, SameStringNum) {

	SimilarityChecker similarityChecker;

	string str1 = "1234567890";
	string str2 = "1234567890";

	int ret = similarityChecker.checkLengthSimilarity(str1, str2);

	EXPECT_EQ(ret, 60); 
}