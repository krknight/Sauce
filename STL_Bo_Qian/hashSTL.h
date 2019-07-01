/*
 * hashSTL.h
 *
 *  Created on: Jun 30, 2019
 *      Author: keithknight
 */

#ifndef HASHSTL_H_
#define HASHSTL_H_

#include <unordered_set>
#include <vector>
#include <string>
#include <unordered_map>
#include <array>

using namespace std;

class hashSTL {
public:
	hashSTL();
	virtual ~hashSTL();
	void doHash(void);
private:
	void foo(const unordered_map<char, string>&);
	void arraybasedcont(void);

private:
	unordered_set<string> myset;
	unordered_set<string>::const_iterator itr;
	vector<string> vec;

	unordered_map<char, string> day;

};

#endif /* HASHSTL_H_ */
