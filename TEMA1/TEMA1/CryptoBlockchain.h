#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "CryptoBlock.h"
#include "Transaction.h"
using namespace std;
class CryptoBlockchain
{
private:
	vector<CryptoBlock> chain;
	string getLastHash();
	int getLastIndex();

public:
	CryptoBlockchain();
	void addNewBlock(string sender, string recipient, double quantity);
	vector<CryptoBlock> getChain();

};

