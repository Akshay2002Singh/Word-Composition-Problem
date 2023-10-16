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

// define trie
class trie
{
    public:
        trie_node *root;
        trie(){
            root = new trie_node();
        }

        inline int char_to_int(char ch){
            return ch-'a';
        }

        void insert_str(string &str){
            // head is temp variable that points to root of trie 
            trie_node *head = root;
            for(auto i : str){
                int index = char_to_int(i);
                if(head->childrens[index] == NULL){
                    head->childrens[index] = new trie_node();
                }
                head = head->childrens[index];
            }
            head->is_valid_word = true;
        }

        void delete_str(string &str){
            trie_node *head = root;
            for(auto i : str){
                int index = char_to_int(i);
                if(head->childrens[index] == NULL){
                    return;
                }
                head = head->childrens[index];
            }
            head->is_valid_word = false;
        }

        bool search_str(string &str){
            trie_node *head = root;
            for(auto i : str){
                int index = char_to_int(i);
                if(head->childrens[index] == NULL){
                    return false;
                }
                head = head->childrens[index];
            }
            return head->is_valid_word;
        }
};

void read_file(vector<string> &input_list){
    int choice;
    string file_name;
    cout<<"Input file should be present in current working directory \n";
    cout<<"Press 1 to select 'input_01.txt' and press 2 to select 'input_02.txt'";
    cin>>choice;
    switch (choice){
        case 1 : file_name = "input_01.txt";
                break;
        case 2 : file_name = "input_02.txt";
                break;
        default: cout<<"Invalid choice";
                return;
    }
    
}

int main()
{
    // vector to store input strings 
    vector<string> input_list;
    // call function to read input file and convert it into vector
    read_file(input_list);

    if(input_list.size() == 0){
        // if size is 0 then it means file is empty 
        return 0;
    }


    return 0;
}