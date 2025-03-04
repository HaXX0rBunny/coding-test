#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

/*
meorize
2 parameter
ir_cnt input value count
ir_len Distinction criteria

The words entered repeatedly ir_cnt times are sorted and output based on:
1. Frequency (higher frequency first)
2. Word length (longer words first)
3. Alphabetical order
Only words with length >= ir_len are considered.
*/
void memorize(int& ir_cnt, int& ir_len)
{
    std::string str;
    std::unordered_map<std::string, int> word_count;

    for (int i = 0; i < ir_cnt; i++) {
        std::cin >> str;
        if (str.length() >= ir_len) {
            word_count[str]++;
        }
    }

    std::vector<std::pair<std::string, int>> words;
    for (const auto& pair : word_count) {
        words.push_back(pair);
    }
    std::sort(words.begin(), words.end(), [](const auto& a, const auto& b) {
        // 1. Compare by frequency
        if (a.second != b.second) {
            return a.second > b.second;
        }

        // 2. Compare by length
        if (a.first.length() != b.first.length()) {
            return a.first.length() > b.first.length();
        }

        // 3. Compare alphabetically
        return a.first < b.first;
        });
    for (const auto& word : words) {
        std::cout << word.first << '\n';
    }
    // 까비 거의 다왔는데 heap 더공부해라
    //using WordFreq = std::pair<std::string, int>;
    //auto comp = [](const WordFreq& a, const WordFreq& b) {
    //    return a.second < b.second;
    //    };
    //std::priority_queue<WordFreq, std::vector<WordFreq>, decltype(comp)> max_heap(comp);

    //for (const auto& pair : word_count) {
    //    max_heap.push(pair);
    //}

    //while (!max_heap.empty()) {
    //    std::cout << max_heap.top().first << '\n';
    //    max_heap.pop();
    //}
}
int main()
{
    std::cin.tie(NULL);

    int a, b;
    std::cin >> a >> b;
    memorize(a, b);
    return 0;
}


