/*
c-string manipulation

STRING FUNCTIONS
1. std::strlen(String) -> gets the length of the string without including the '\0' at the end
2. std::strcmp(String1, String2) -> i) if String1 is before String2 in lexicographic order, it returns -1
                                   ii) if String2 is before String1 in lexicographic order, it returns +1
                                  iii) if String1 is same as String2, it returns 0
3. std::strncmp(String1, String2, n) -> allows us to compare upto 'n' characters
                                        returns the value of ascii of String1 - String2 of the 
                                        first character that is different
4. std::strchr(String, targer) -> find the first occurence of a character in a string
5. std::strrchr(String, target) -> find the last occurence of a character in a string
6. std::strcat(dest, src) -> string concatenation from src to dest
7. std::strncat(dest, src, n) -> concatenate n characters from the src to dest
8. std::strccpy(dest, src) -> copy string from src to dest
8. std::strncpy(dest, src, n) -> copy n characters of a src string to the dest string
*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char message1[] = {"I am Vadisetti Pranay Satvik Reddy."};
    const char *message2 = {"I am Vadisetti Pranay Satvik Reddy."};
    // difference between sizeof() and strlen -> strlen ignores NULL charater (imp)
    // showing that strlen works for both normal array and pointer array
    // But sizeof() works for normal arrays but gives the size of a pointer in case of pointer arrays
    cout << "sizeof(message1): " << sizeof(message1) << endl; 
    cout << "strlen(message1): " << strlen(message1) << endl;
    cout << "sizeof(message2): " << sizeof(message2) << endl; //We get size of the pointer but not the array's
    cout << "strlen(message2): " << strlen(message2) << endl;
    cout << endl;

    // strcmp usage
    char message3[] = {"Alabama"};
    char message4[] = {"Dlabama"};
    const char * message5 {"Alabama"};
    const char * message6 {"Dlabama"};
    cout << "strcmp(" << message3 << ", " << message4 << "): " << strcmp(message3, message4) << endl;
    cout << "strcmp(" << message4 << ", " << message3 << "): " << strcmp(message4, message3) << endl;
    cout << "strcmp(" << message4 << ", " << message4 << "): " << strcmp(message4, message4) << endl;
    cout << "strcmp(" << message5 << ", " << message6 << "): " << strcmp(message5, message6) << endl;
    cout << "strcmp(" << message6 << ", " << message5 << "): " << strcmp(message6, message5) << endl;
    cout << "strcmp(" << message6 << ", " << message6 << "): " << strcmp(message6, message6) << endl;
    message5 = {"Alabama"};
    message6 = {"Alabamb"};
    cout << endl;
    cout << "strcmp(" << message5 << ", " << message6 << "): " << strcmp(message5, message6) << endl;
    cout << "strcmp(" << message6 << ", " << message5 << "): " << strcmp(message6, message5) << endl;
    cout << "strcmp(" << message6 << ", " << message6 << "): " << strcmp(message6, message6) << endl;

    // strncmp uage -> compare only the first n characters
    cout << endl;
    char message7[] = {"aaaie"};
    char message8[] = {"aaazhb"};
    cout << "strncmp(" << message7 << ", " << message8 << ", 3): " << strncmp(message7, message8, 3) << endl;
    cout << "strncmp(" << message7 << ", " << message8 << ", 4): " << strncmp(message7, message8, 4) << endl;
    cout << "strncmp(" << message8 << ", " << message7 << ", 4): " << strncmp(message8, message7, 4) << endl;

    // strchr usage
    cout << endl;
    const char * message9 {"Try not. Do, or do not. There is no try."};
    char target = 'T';
    const char * result = message9;
    size_t iterations{0};
    while ((result = strchr(result, target)) != nullptr)
    {
        cout << "Found.";
        cout << " Starting at: " << result << endl;
        result++;
        iterations++;
    }
    cout << "No of " << target << "'s is " << iterations << endl;

    // strrchr usage
    cout << endl;
    const char *  file_path {"C:/Users/HP/Desktop/june_12_file_3.cpp"};
    const char * file_name {file_path};
    char backslash = '/';
    while ((file_name = strrchr(file_name, backslash)) != nullptr)
    {
        file_name++;
        cout << "Filename: " << file_name << endl;
    }

    // strcat usage
    cout << endl;
    char dest1[50] = "Hello ";
    char src1[50] = "World!";
    cout << "dest1: " << dest1 << "     src1: " << src1 << endl;
    strcat(dest1, src1);
    cout << "dest1: " << dest1 << endl;
    strcat(dest1, " I Will Blow You");
    cout << "dest1: " << dest1 << endl;
    char * dest2 = new char[30]{'F', 'i', 'r', 'e', 'l', 'o', 'r', 'd', ',', '\0'};
    char * src2 = new char[30]
    {' ', 'T', 'h', 'e', ' ', 'P', 'h', 'e', 'o', 'n', 'i', 'x', ' ', 'K', 'i', 'n', 'g', '\0'};
    int d2l = strlen(dest2);
    int s2l = strlen(src2);
    int t2l = d2l + s2l;
    if (s2l < 30)
    {
        strcat(dest2, src2);
        cout << "dest2: " << dest2 << endl;
    }
    else
    {
        cout << "The dest2 size is not enough. Atleast " << t2l << " is required" << endl;
    }

    // strncat usage
    cout << endl;
    char dest3[50] = "Hello";
    char src3[50] = " There is a beautiful bird in our house";
    cout << "dest3: " << dest3 << "     src3: " << src3 << endl;
    strncat(dest3, src3, 6);
    cout << "dest3: " << dest3 << endl;

    // strcpy usage
    cout << endl;
    char src4 []{"I am Vadisetti Pranay Satvik Reddy studying in IIITG with Id no: 2201221."};
    int s4l = strlen(src4);
    int d4l = s4l + 1;
    char dest4[d4l];
    strcpy(dest4, src4);
    cout << "src4: " << src4 << endl;
    cout << "src4 copying to dest4..." << endl;
    cout << "dest4: " << dest4 << endl;
    cout << "length of src4 and dest4 = " << d4l << endl;

    // strncpy usage
    cout << endl;
    char src5[] {"Hello"};
    char dest5[] {'a', 'b', 'c', 'd', 'e', 'f', '\0'};
    cout << "src5: " << src5 << endl;
    cout << "dest5: " << dest5 << endl;
    strncpy(dest5, src5, 5);
    cout << "dest5: " << dest5 << endl;
}