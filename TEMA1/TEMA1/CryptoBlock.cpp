#include "CryptoBlock.h"
#include "Transaction.h"
#include <iostream>
#include <string.h>
#include <ctime>
#include <string>
#include <vector>
using namespace std;
CryptoBlock::~CryptoBlock()
{

}

string CryptoBlock::calculateHash()
{
	hash<string> str_hash;
	return to_string(str_hash(timeStamp + previousBlockHash + getTx().getTxSender() + getTx().getTxRecipient() + to_string(getTx().getTxQuantity())));
}

string CryptoBlock::now()
{
	time_t t = time(0);
	string str = ctime(&t);
	str.erase(std::remove(str.begin(), str.end(), '\n'), str.end());
	return str;
}
CryptoBlock::CryptoBlock(int ix, string  prevHash, string sender, string recipient, double quantity)
{
	index = ix;
	previousBlockHash = prevHash;
	tx.setTxSender(sender);
	tx.setTxRecipient(recipient);
	tx.setTxQuantity(quantity);
}

int CryptoBlock::getIndex()
{
	return index;
}

string CryptoBlock::getTimeStamp()
{
	return timeStamp;
}

string CryptoBlock::getPreviousBlockHash()
{
	return previousBlockHash;
}

string CryptoBlock::getBlockHash()
{
	return blockHash;
}

Transaction CryptoBlock::getTx()
{
	return tx;
}


