/**
 * @author Huahang Liu (huahang@xiaomi.com)
 * @date 2016-08-04
 */

#include "ipp.h"

#include "iostream"

int main(int argc, char** argv) {
  const auto* version = ippvmGetLibVersion();
  if (version == nullptr) {
    std::cout << "Failed to get IPP version!" << std::endl;
    return 1;
  }
  std::cout << "IPP Library Version" << std::endl;
  std::cout << "major: " << version->major << std::endl;
  std::cout << "minor: " << version->minor << std::endl;
  std::cout << "major build: " << version->majorBuild << std::endl;
  std::cout << "build: " << version->build << std::endl;
  std::cout << "target cpu: " << version->targetCpu << std::endl;
  std::cout << "name: " << version->Name << std::endl;
  std::cout << "version: " << version->Version << std::endl;
  std::cout << "build date: " << version->BuildDate << std::endl;
  return 0;
}
