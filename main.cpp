#include <iostream>
#include <string>
#include <vector>
#include "OrderBookEntry.h"
#include "MerkelMain.h"
#include "CSVReader.h"
#include "Wallet.h"


int main()
{
  MerkelMain app{};
  app.init();
  // CSVReader::readCSV("20200317.csv");
  // Wallet wallet;
  // wallet.inserCurrency("BTC", 10);
  // wallet.inserCurrency("USDT", 10000);
  // std::cout << wallet.toString() <<std::endl;
  // wallet.removeCurrency("USDT", 1000);
  // std::cout << wallet.toString() << std::endl;
}
