#pragma once
#include <string.h>
#include <iostream>
#include <ctime>
#include "Transaction.h"
using namespace std;
class CryptoBlock
{
public:
	CryptoBlock(int ix, string prevHash, string sender, string recipient, double quantity);
	int getIndex();
	string getTimeStamp();
	string getPreviousBlockHash();
	string getBlockHash();
	Transaction getTx();
	~CryptoBlock();

private:
	string calculateHash();
    string now();
	int index;
	string timeStamp;
	string previousBlockHash;
	string blockHash;
	Transaction tx;	
};

