listee
===

C++ list comprehensions! Well, almost.....

This project attempts to bring python's _list comprehensions_ to C++. You see,
in python, you can do magic like this:

    l1 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    l2 = [x for x in l1 if x%2 == 0]
    # l2 = [2, 4, 6, 8, 10]

C++ doesn't let you do this, but with the advent of lambdas and other
functional magic, I feel like it really should let you. As such, I'm going to
attempt to bring these to C++.

Restrictions include not being able to use the if and for keywords -- these are
part of core C++ and attempting to use them will cause compile errors, severe
headaches, the zombie apocalypse and all sorts of other issues. Instead, for
now, I'm going to use take, with, in, and where.

In other words, the C++ equivalent would be:

    auto l1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto l2 = take x with x in l1 where x % 2 == 0;```

Isn't this cool!

## Features ##
The obvious feature is the wonderful new syntax you're able to use, simply by
adding ```#include <listee>``` to your code. However, on top of this:
* Asynchronous/lazy evaluation. In the above example, l2 will be evaluated
  either a) in the background while your program does nothing, or waits for
  input, or etc, or b) only when you need its contents. This lazy/asynchronous
  behaviour is provided by the magical new standard interface of C++11, and
  requires no external dependencies
* No external dependencies. No boost, no library that you have to compile from
  source but never compiles, nothing. The only required header files and
  libraries are those in the C++11 standard.
* Fun. Seriously, you've always *wanted* to use this python-esque syntax. You
  know it'll reduce bugs, because you don't have to write 90 lines of code
  every time you want to do it. You don't have to worry about writing templated
  functions and types and all sorts of voodoo witchcraft just to make your code
  compile. And now you can.

### Limitations ###
Obviously, as far as emulating python syntax goes, this is pretty terrible.
However, unfortunately, we simply can't; for and if are reserved keywords in
C++ and there's no way I can override them without screwing up the language (or
the rest of your code, more importantly). As such, we get the slightly more
verbose syntax as above.

