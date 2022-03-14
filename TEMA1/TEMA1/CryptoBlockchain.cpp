#include "CryptoBlockchain.h"
#include "CryptoBlock.h"
#include "Transaction.h"
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
string CryptoBlockchain::getLastHash()
{
	return string();
}
int CryptoBlockchain::getLastIndex()
{
	return 0;
}

CryptoBlockchain::CryptoBlockchain()
{
	

	
}

void CryptoBlockchain::addNewBlock(string sender, string recipient, double quantity)
{
	
}

vector<CryptoBlock> CryptoBlockchain::getChain()
{
	return vector<CryptoBlock>();
}
