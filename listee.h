// =====================================================================================
// 
//       Filename:  listee.h
// 
//    Description:  Provides the list comprehension interface and defines appropriate 
//                  macros for this to work.
//
//                  This attempts to build python-esque list comprehensions into C++. 
//                  Why? Because they're infinitely useful, and because the 
//                  expressiveness added in C++11 shouldn't go to waste.
//
//                  Boost currently allows for functional filters applied to data, 
//                  however they're currently very ugly. This library tries to provide
//                  clean interface to filtering and comprehensions that anyone can use
// 
//        Version:  1.0
//        Created:  11/06/12 23:11:14
//  Last Modified:  Tue 12 Jun 2012 16:04:40 EST
//       Revision:  none
//       Compiler:  g++
// 
//         Author:  Ben Stott (), bgbnbigben@gmail.com
//        Company:  
// 
// =====================================================================================
//

#ifndef LISTEE_HEADER_WydjukVons0
#define LISTEE_HEADER_WydjukVons0 

namespace listee {
    
    /* We need to create operators 'take', 'with', 'in', and 'where'.
       Take is going to be the return-clause; the expression between 'take' and
       'with' is what the user expects to be returned. The identifier between 
       'with' and 'in' is the variable provided to the function that 'take'
       constructs (potentially, if 'take' has multiple variables, these will
       have to be chained together). The identifier between 'in' and the _next_
       keyword (potentially 'with', 'where' or none at all) is one of the 
       variables / iterables that we'll select things from (this may not *be*
       iterable, so we might have to construct an iterable ourselves; checking
       if it has a ::iterator is pretty simple to do, however). Finally, the
       'where' keyword will function as a predicate function; it is expected to
       have contain the predicate for all variables (so 'where x > 2 && y < 3',
       rather than chaining these together). As such, once we find a 'where'
       it's a simple matter of using this as well as the however-many 'in'
       variables in a lambda function, and calling this function as a boolean
       predicate
    */
};
#endif // header guard
