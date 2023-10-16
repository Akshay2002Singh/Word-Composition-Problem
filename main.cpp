#include <bits/stdc++.h>
using namespace std;

// define number of ALPHABETS
// size is considered 26 because our input only contains lowercase words
#define ALPHABETS 26

// define node
class trie_node
{
public:
    trie_node *childrens[ALPHABETS];
    bool is_valid_word;
    trie_node()
    {
        // point all childrens to null
        for (int i = 0; i < ALPHABETS; ++i)
        {
            childrens[i] = NULL;
        }
        // false means any word don't end at this node
        is_valid_word = false;
    }
};

int main()
{

    return 0;
}