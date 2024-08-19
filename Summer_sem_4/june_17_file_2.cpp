// Concepts - a mechanism to place constraints on your template type parameters

#include <iostream>
using namespace std;

// normal template
template <typename T>
T add (T a, T b)
{
    return a + b;
}

/*
        With Concepts in different styles (syntaxes) -> 1st part - built in concepts

        1.
        templete <typename T>
        requires integral <T>
        T add (T a, T b)
        {
        return a + b;
        }

        2. 
        template <integral T>
        T add (T a, T b)
        {
        return a + b;
        }

        3.
        integral auto add (integral auto a,integral auto b)
        {
        return a + b;
        }

        4.
        template <typename T>
        T add (T a, T b) requires integral <T>
        {
        return a +  b;
        }
*/

/*

    Concepts -> 2nd part - custom concepts

    1.
    template <typename T>
    concept myIntegral = is_integral_v<T>;

    2.
    template <typename T>
    concept is_multipliable = requires (T a,  T b)
    {
        a * b;
    }

    3.
    template <typename T>
    concept is_Incrementable = requires (T a)
    {
        a += 1;
        a++;
        ++a;
    }

    We can use these custom concetps same as we used in-built concepts in the part 1
*/

/*
    Requires clause - Zooming in
    
    require clause can take in 4 kinds of requirements
    1. simple requirements
    2. nested requirements
    3. compound requirements
    4. type requirements

    1. simple requirements example:
    template <typename T>
    concept tinytype = requires (T a)
    {
        sizeof(T) <= 4;                 -> The first definition only ensures that the expression sizeof(T) <= 4 is valid.
    };

    2. nested requirement
    template <typename T>
    concept tinytype = requires (T a)
    {
        sizeof(T) <= 4;                          -> The second definition not only ensures that the expression is valid 
            requires sizeof(T) <= 4;                but also explicitly enforces the constraint that sizeof(T) <= 4.
    };

    3. compound requirement
    template <typename T>
    concept addable = requires (T a, T b)
    {
        {a + b} -> convertible_to <int>;      -> checks if a + b is doable and also checks if it is convertible to int
    };
*/

/*
    Logical combinations of Concepts
    with && and ||

    1. with ||
    template <typename T>
    T add (T a, T b) requires integral <T> || requires floating_point <T>
    {
    return a + b;
    }

    1. with &&
    template <typename T>
    T add (T a, T b) requires integral <T> && requires tinytype <T>
    {
    return a + b;
    }
*/

/*
    Concepts and Auto

    1. concepts in functions
    integral auto add (integral auto a, integral auto b)
    {
    return a + b;
    }

    2. concepts can even be used with variables         -> not much useful (we already now the type in most of the cases,
    integral auto x = add (2, 74);                          no need of protection)
    floating_point auto y = 7.7;
*/

int main()
{

    int a{23};
    int b{63};

    char c {10};
    char d {20};

    double e {11.3};
    double f {2.7};

}