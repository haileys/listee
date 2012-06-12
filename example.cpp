// =====================================================================================
// 
//       Filename:  test.cpp
// 
//    Description:  Test file for listee
// 
//        Version:  1.0
//        Created:  12/06/12 00:58:18
//  Last Modified:  Tue 12 Jun 2012 14:34:13 EST
//       Revision:  none
//       Compiler:  g++
// 
//         Author:  Ben Stott (), bgbnbigben@gmail.com
//        Company:  
// 
// =====================================================================================

#include "listee.h"
#include <iostream>

int main() {
    auto list = take x from {1, 2, 3, 4, 5, 6, 7, 8} where x % 2 == 0;
    for (auto i : list)
        std::cout << i << std::endl;
    return 0;
}
