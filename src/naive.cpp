#include <string>
#include <optional>

namespace FastMatch
{
    std::optional<int> naive_match(std::string text, std::string pattern)
    {
        for (size_t pos = 0; pos < text.size() - pattern.size(); pos++)
        {
            bool good = true;
            for (size_t ppos = 0; ppos < pattern.size(); ppos++)
            {
                if (text[ppos + pos] != pattern[ppos])
                {
                    good = false;
                    break;
                }
            }
            if (good)
            {
                return pos;
            }
        }

        return NULL;
    }
}
