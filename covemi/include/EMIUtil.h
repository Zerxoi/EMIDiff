#include <map>
#include <vector>
#include <filesystem>

namespace util
{
    void diffExecutedMaps(std::map<int, int> &m1, std::map<int, int> &m2, std::vector<int> &list);

    std::filesystem::path pathAppend(const std::filesystem::path &path, const std::filesystem::path &append);
}
