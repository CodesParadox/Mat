
/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: Gal Braymok
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "mat.hpp"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
using namespace ariel;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input)
{
	std ::erase(input, ' ');
	std ::erase(input, '\t');
	std ::erase(input, '\n');
	std ::erase(input, '\r');
	return input;
}

/**
 * Test good inputs
 */
TEST_CASE("Good input")
{
	CHECK(nospaces(mat(9, 7, '@', '-')) == nospaces("@@@@@@@@@\n"
													"@-------@\n"
													"@-@@@@@-@\n"
													"@-@---@-@\n"
													"@-@@@@@-@\n"
													"@-------@\n"
													"@@@@@@@@@"));


	CHECK(nospaces(mat(3, 7, 'Z', 'Y')) == nospaces("@@@\n"
													"@-@\n"
													"@-@\n"
													"@-@\n"
													"@-@\n"
													"@-@\n"
													"@@@"));

	CHECK(nospaces(mat(9, 7, '?', '0')) == nospaces("?????????\n"
													"?0000000?\n"
													"?0?????0?\n"
													"?0?000?0?\n"
													"?0?????0?\n"
													"?0000000?\n"
													"?????????"));

	
	CHECK(nospaces(mat(7, 5, '@', '-')) == nospaces("@@@@@\n"
													 "@---@\n"
													 "@-@-@\n"
													 "@-@-@\n"
													 "@-@-@\n"
													 "@---@\n"
													 "@@@@@"));

	CHECK(nospaces(mat(13, 5, '@', '-')) == nospaces("@@@@@@@@@@@@@\n"
													 "@-----------@\n"
													 "@-@@@@@@@@@-@\n"
													 "@-----------@\n"
													 "@@@@@@@@@@@@@"));

	CHECK(nospaces(mat(5, 7, '@', '-')) == nospaces("@@@@@\n"
													"@---@\n"
													"@-@-@\n"
													"@-@-@\n"
													"@-@-@\n"
													"@---@\n"
													"@@@@@"));												

	CHECK(nospaces(mat(3, 5, '$', '+')) == nospaces("$$$\n"
													"$+$\n"
													"$+$\n"
													"$+$\n"
													"$$$\n"));

	CHECK(nospaces(mat(3, 3, '$', '@')) == nospaces("$$$\n"
													"$@$\n"
													"$$$"));

	CHECK(nospaces(mat(1, 3, '$', '#')) == nospaces("$\n"
													"$\n"
													"$"));												

	
	CHECK(nospaces(mat(7, 5, '@', '-')) == nospaces("@@@@@\n"
													 "@---@\n"
													 "@-@-@\n"
													 "@-@-@\n"
													 "@-@-@\n"
													 "@---@\n"
													 "@@@@@"));

	CHECK(nospaces(mat(5, 5, '5', '!')) == nospaces("55555\n"
													"5!!!5\n"
													"5!5!5\n"
													"5!!!5\n"
													"55555"));

	CHECK(nospaces(mat(5, 7, '0', '1')) == nospaces("00000\n"
													"01110\n"
													"01010\n"
													"01010\n"
													"01010\n"
													"01110\n"
													"00000"));
												
	CHECK(nospaces(mat(5, 3, '6', '9')) == nospaces("66666\n"
													"69996\n"
													"66666"));


	CHECK(nospaces(mat(1, 3, '1', '0')) == nospaces("1\n"
													"1\n"
													"1"));

	CHECK(nospaces(mat(3, 1, '+', '-')) == nospaces("+++"));

	CHECK(nospaces(mat(1, 1, '@', '0')) == nospaces("@"));
}

/**
 * checking if entered a bad input
 */
TEST_CASE("Bad input")
{
	CHECK_THROWS(mat(10, 3, '@', '%'));
    CHECK_THROWS(mat(-9, 7, '@', '-'));
	CHECK_THROWS(mat(2, 2, '$', '#'));
    CHECK_THROWS(mat(8, 0, '@', '%'));
    CHECK_THROWS(mat(0, 0, '@', '$'));
	CHECK_THROWS(mat(11, -13, '&', '0'));
}