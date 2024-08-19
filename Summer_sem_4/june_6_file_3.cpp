// OUTPUT FORMATTING

/*
    // <iostream>
    // <iomanip>

    std::endl
    std::flush
    std::setw()
    std::right            std::left
    std::setfill('char')
    std::boolalpha        std::noboolalpha
    std::showpos          std::noshowpos
    std::dec              std::hex              std::oct    -> won't work for floating point numbers
    std::showbase         std::noshowbase
    std::uppercase        std::nouppercase
    std::scientific       std::fixed
    std::setprecision
    std::showpoint        std::noshowpoint
*/

#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "Hello ";
    std::cout << "World\n";
    std::cout << "Hello" << std::endl;
    std::cout << "World" << std::endl;
    std::cout << "------------------------------------------------------------------------------------" << std::endl;

    std::cout << "Hi have a Nice Day!" << std::endl << std::flush;
    std::cout << "------------------------------------------------------------------------------------" << std::endl;

    std::string s1f {"Pushya"};
    std::string s2f {"Chetana"};
    std::string s3f {"Pranav"};
    std::string s4f {"Satvik"};
    std::string s5f {"Namratha"};

    std::string s1l {"Pyaraka"};
    std::string s2l {"Rongali"};
    std::string s3l {"Tamma"};
    std::string s4l {"Vadisetti"};
    std::string s5l {"Yarramothu"};

    int s1age {20};
    int s2age {19};
    int s3age {18};
    int s4age {19};
    int s5age {20};

    std::cout << "Firstname Lastname Age" << std::endl;
    std::cout << s1f << " " << s1l << " " << s1age << std::endl;
    std::cout << s2f << " " << s2l << " " << s2age << std::endl;
    std::cout << s3f << " " << s3l << " " << s3age << std::endl;
    std::cout << s4f << " " << s4l << " " << s4age << std::endl;
    std::cout << s5f << " " << s5l << " " << s5age << std::endl;

    std::cout << std::endl;
    std::cout << std::setw(10) << "Firstname" << " "  << std::setw(10) << "Lastname" << " "  << std::setw(5) << "Age" << std::endl;
    std::cout << std::setw(10) << s1f << " " << std::setw(10) << s1l << " " << std::setw(5) << s1age << std::endl;
    std::cout << std::setw(10) << s2f << " " << std::setw(10) << s2l << " " << std::setw(5) << s2age << std::endl;
    std::cout << std::setw(10) << s3f << " " << std::setw(10) << s3l << " " << std::setw(5) << s3age << std::endl;
    std::cout << std::setw(10) << s4f << " " << std::setw(10) << s4l << " " << std::setw(5) << s4age << std::endl;
    std::cout << std::setw(10) << s5f << " " << std::setw(10) << s5l << " " << std::setw(5) << s5age << std::endl;

    int name_width {20};
    int age_width {10};
    std::cout << std::endl;
    std::cout << std::setw(name_width) << "Firstname" << " "  << std::setw(name_width) << "Lastname" << " "  << std::setw(age_width) << "Age" << std::endl;
    std::cout << std::setw(name_width) << s1f << " " << std::setw(name_width) << s1l << " " << std::setw(age_width) << s1age << std::endl;
    std::cout << std::setw(name_width) << s2f << " " << std::setw(name_width) << s2l << " " << std::setw(age_width) << s2age << std::endl;
    std::cout << std::setw(name_width) << s3f << " " << std::setw(name_width) << s3l << " " << std::setw(age_width) << s3age << std::endl;
    std::cout << std::setw(name_width) << s4f << " " << std::setw(name_width) << s4l << " " << std::setw(age_width) << s4age << std::endl;
    std::cout << std::setw(name_width) << s5f << " " << std::setw(name_width) << s5l << " " << std::setw(age_width) << s5age << std::endl;
    std::cout << "------------------------------------------------------------------------------------" << std::endl;
    
    // By default aligned to the right
    std::cout << std::right;
    std::cout << std::setw(name_width) << "Firstname" << " "  << std::setw(name_width) << "Lastname" << " "  << std::setw(age_width) << "Age" << std::endl;
    std::cout << std::setw(name_width) << s1f << " " << std::setw(name_width) << s1l << " " << std::setw(age_width) << s1age << std::endl;
    std::cout << std::setw(name_width) << s2f << " " << std::setw(name_width) << s2l << " " << std::setw(age_width) << s2age << std::endl;
    std::cout << std::setw(name_width) << s3f << " " << std::setw(name_width) << s3l << " " << std::setw(age_width) << s3age << std::endl;
    std::cout << std::setw(name_width) << s4f << " " << std::setw(name_width) << s4l << " " << std::setw(age_width) << s4age << std::endl;
    std::cout << std::setw(name_width) << s5f << " " << std::setw(name_width) << s5l << " " << std::setw(age_width) << s5age << std::endl;
    std::cout << "------------------------------------------------------------------------------------" << std::endl;

    // left align
    std::cout << std::left;
    std::cout << std::setw(name_width) << "Firstname" << " "  << std::setw(name_width) << "Lastname" << " "  << std::setw(age_width) << "Age" << std::endl;
    std::cout << std::setw(name_width) << s1f << " " << std::setw(name_width) << s1l << " " << std::setw(age_width) << s1age << std::endl;
    std::cout << std::setw(name_width) << s2f << " " << std::setw(name_width) << s2l << " " << std::setw(age_width) << s2age << std::endl;
    std::cout << std::setw(name_width) << s3f << " " << std::setw(name_width) << s3l << " " << std::setw(age_width) << s3age << std::endl;
    std::cout << std::setw(name_width) << s4f << " " << std::setw(name_width) << s4l << " " << std::setw(age_width) << s4age << std::endl;
    std::cout << std::setw(name_width) << s5f << " " << std::setw(name_width) << s5l << " " << std::setw(age_width) << s5age << std::endl;
    std::cout << "------------------------------------------------------------------------------------" << std::endl;

    // internal justified
    std::cout << std::right;
    std::cout << std::setw(10) << -123.5 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(10) << -123.5 << std::endl;
    std::cout << std::right;
    std::cout << "------------------------------------------------------------------------------------" << std::endl;

    // set fill
    std::cout << std::left;
    std::cout << std::setfill('-');
    std::cout << std::setw(name_width) << "Firstname" << " "  << std::setw(name_width) << "Lastname" << " "  << std::setw(age_width) << "Age" << std::endl;
    std::cout << std::setw(name_width) << s1f << " " << std::setw(name_width) << s1l << " " << std::setw(age_width) << s1age << std::endl;
    std::cout << std::setw(name_width) << s2f << " " << std::setw(name_width) << s2l << " " << std::setw(age_width) << s2age << std::endl;
    std::cout << std::setw(name_width) << s3f << " " << std::setw(name_width) << s3l << " " << std::setw(age_width) << s3age << std::endl;
    std::cout << std::setw(name_width) << s4f << " " << std::setw(name_width) << s4l << " " << std::setw(age_width) << s4age << std::endl;
    std::cout << std::setw(name_width) << s5f << " " << std::setw(name_width) << s5l << " " << std::setw(age_width) << s5age << std::endl;
    std::cout << std::right;
    std::cout << "------------------------------------------------------------------------------------" << std::endl;

    bool a {true};
    bool b {false};
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << std::boolalpha;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << std::noboolalpha;
    std::cout << "------------------------------------------------------------------------------------" << std::endl;

    int pos {45};
    int neg {-34};
    std::cout << "Positive: " << pos << std::endl;
    std::cout << "Negative: " << neg << std::endl;
    std::cout << std::endl;
    std::cout << std::showpos;
    std::cout << "Positive: " << pos << std::endl;
    std::cout << "Negative: " << neg << std::endl;
    std::cout << std::endl;
    std::cout << std::noshowpos;
    std::cout << "Positive: " << pos << std::endl;
    std::cout << "Negative: " << neg << std::endl;
    std::cout << "------------------------------------------------------------------------------------" << std::endl;

    int pos_num {1221};
    int neg_num {-1213};
    double flt_num {113.4};
    std::cout << "Positive Number" << std::endl;
    std::cout << std::oct << "Oct: " << pos_num << std::endl;
    std::cout << std::hex << "Hex: " << pos_num << std::endl;
    std::cout << std::dec << "Dec: " << pos_num << std::endl;
    std::cout << std::endl;
    std::cout << "Negative Number" << std::endl;
    std::cout << std::oct << "Oct: " << neg_num << std::endl;
    std::cout << std::hex << "Hex: " << neg_num << std::endl;
    std::cout << std::dec << "Dec: " << neg_num << std::endl;
    std::cout << std::endl;
    std::cout << "Double Number" << std::endl;
    std::cout << std::oct << "Oct: " << flt_num << std::endl;
    std::cout << std::hex << "Hex: " << flt_num << std::endl;
    std::cout << std::dec << "Dec: " << flt_num << std::endl;
    std::cout << "------------------------------------------------------------------------------------" << std::endl;

    std::cout << "Default" << std::endl;
    std::cout << std::oct << "Oct: " << pos_num << std::endl;
    std::cout << std::hex << "Hex: " << pos_num << std::endl;
    std::cout << std::dec << "Dec: " << pos_num << std::endl;
    std::cout << std::endl;
    std::cout << "showbase" << std::endl;
    std::cout << std::oct << std::showbase << "Oct: " << pos_num << std::endl;
    std::cout << std::hex << std::showbase << "Hex: " << pos_num << std::endl;
    std::cout << std::dec << std::showbase << "Dec: " << pos_num << std::endl;
    std::cout << std::endl;
    std::cout << "noshowbase (Default)" << std::endl;
    std::cout << std::oct << std::noshowbase << "Oct: " << pos_num << std::endl;
    std::cout << std::hex << std::noshowbase << "Hex: " << pos_num << std::endl;
    std::cout << std::dec << std::noshowbase << "Dec: " << pos_num << std::endl;
    std::cout << "------------------------------------------------------------------------------------" << std::endl;

    std::cout << std::uppercase;
    std::cout << std::hex << "Hex: " << pos_num << std::endl;
    std::cout << std::hex << "Hex: " << neg_num << std::endl;
    std::cout << std::endl;
    std::cout << std::nouppercase;
    std::cout << std::hex << "Hex: " << pos_num << std::endl;
    std::cout << std::hex << "Hex: " << neg_num << std::endl;
    std::cout << std::dec;
    std::cout << "------------------------------------------------------------------------------------" << std::endl;

    double da {3.141591234567890987654321};
    double db {2006.0};
    double dc {1.34e-10};
    std::cout << std::scientific;
    std::cout << "da: " << da << std::endl;
    std::cout << "db: " << db << std::endl;
    std::cout << "dc: " << dc << std::endl;
    std::cout << std::endl;
    std::cout << std::fixed;
    std::cout << "da: " << da << std::endl;
    std::cout << "db: " << db << std::endl;
    std::cout << "dc: " << dc << std::endl;
    std::cout << std::endl;
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);  // Hack
    std::cout << "da: " << da << std::endl;
    std::cout << "db: " << db << std::endl;
    std::cout << "dc: " << dc << std::endl;
    std::cout << "------------------------------------------------------------------------------------" << std::endl;

    double s = 3.14159123456789987654321;
    std::cout << "s: " << s << std::endl;
    std::cout << std::setprecision(6);
    std::cout << "s: " << s << std::endl;
    std::cout << std::setprecision(10);
    std::cout << "s: " << s << std::endl;
    std::cout << std::setprecision(20);
    std::cout << "s: " << s << std::endl;
    std::cout << std::setprecision(6);
    std::cout << "s: " << s << std::endl;
    std::cout << "------------------------------------------------------------------------------------" << std::endl;

    double e {34.1};
    double f {43.99};
    double g {12.0};
    int h {45};

    std::cout << "e: " << e << std::endl;
    std::cout << "f: " << f << std::endl;
    std::cout << "g: " << g << std::endl;
    std::cout << "h: " << h << std::endl;
    std::cout << std::endl;
    std::cout << std::showpoint;
    std::cout << "e: " << e << std::endl;
    std::cout << "f: " << f << std::endl;
    std::cout << "g: " << g << std::endl;
    std::cout << "h: " << h << std::endl;
    std::cout << std::endl;
    std::cout << std::noshowpoint;
    std::cout << "e: " << e << std::endl;
    std::cout << "f: " << f << std::endl;
    std::cout << "g: " << g << std::endl;
    std::cout << "h: " << h << std::endl;
    std::cout << "------------------------------------------------------------------------------------" << std::endl;
}