#include "GZipCodec.h"
#include <assert.h>


int _tmain(int argc, _TCHAR* argv[])
{
  std::string data = "The quick brown fox jumped over the lazy dog";
  std::string compressedData;
  GZipCodec::Compress(data, compressedData);
  std::string data2;
  GZipCodec::Uncompress(compressedData, data2);
  assert(data == data2);
  return 0;
}
