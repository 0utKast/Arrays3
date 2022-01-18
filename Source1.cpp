#include <cassert>
#include <iterator>
#include <string>

int main()
{
    std::string s("Exemplar");
    assert(8 == s.size());
    assert(s.size() == s.length());
    assert(s.size() == static_cast<std::string::size_type>(
        std::distance(s.begin(), s.end())));

    std::u32string a(U"????????"); // 8 code points
    assert(8 == a.size()); // 8 code units in UTF-32

    std::u16string b(u"????????"); // 8 code points
    assert(8 == b.size()); // 8 code units in UTF-16

    std::string c("????????"); // 8 code points
    assert(24 == c.size()); // 24 code units in UTF-8

#if __cplusplus >= 202002
    std::u8string d(u8"????????"); // 8 code points
    assert(24 == d.size()); // 24 code units in UTF-8
#endif