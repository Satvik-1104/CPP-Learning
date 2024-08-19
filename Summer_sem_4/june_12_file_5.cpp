// SOME OF THE TOPICS INVOLVED ARE NOT COMPLETED YET

/*
---------------------------------------------------------------------------------------------------
One Definition Rule
---------------------------------------------------------------------------------------------------
Definitions can't show up more than once in an entire program or TRANSLATION UNITS.
1. Free standing variables
2. Functions
3. Classes
4. Class member functions
5. Class static member variables

exceptions
1. defintions of classes can show up in multiple TRANSLATION UNITS without causing problems

Watch the C++ full course 31hrs video at 
**
14:12:50
**
again to get clarity in this topic.
I am skipping it now because, I don't know some of the things he is talking about and
I am unable to understand.


concept about CONCEPTS:
around
**
19:10:22
**
Try to watch it again as some things he is talking about are not mentioned before
A bit tricky to understand
* type traits and  * static asserts ??
syntax:
    to use concepts
    #include <concepts>

    template <typename T>
    requires integral<T>          ->1st way for using concepts that makes this template constrained to integers only
    T temp_name (T parameter)
    {
    body...
    }

    template <integral T>         ->2nd way for using concepts
    T temp_name (T parameter)
    {
    body...
    }

    auto func_name (integral auto parameter)    ->3rd way for using concepts
    {
    body...
    }

    template <typename T> 
    T temp_name (T parameter) requires integral<T>         ->4th way for using concepts
    {
    body...
    }

    template <T>
    requires is_integral_v<T>     ->for using type traits
    T temp_name (T parameter)
    {
    body...
    }


concept about CUSTOM CONCEPTS:
around
**
19:26:00
**
Try to watch it again as I am unable to code in my vscode compiler, I think it is not the latest version
I can't find a C++20 compiler even in the browser to run these codes about CONCEPTS.
*/