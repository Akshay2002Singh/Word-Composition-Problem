# ***Compounded Words Finder (C++)***

## *Overview*
This C++ program is designed to find the longest and second longest compounded words within a list of alphabetically sorted words contained in input file. A compounded word is defined as a word that can be constructed by concatenating shorter words found within the same input file.

The program accomplishes this by implementing a trie data structure to efficiently store and search for words, along with a recursive approach to determine whether a word is compounded. It also records the time taken to process the input files.

## *Prerequisites*
- A C++ compiler (e.g., g++)
- Input text files (Input_01.txt and Input_02.txt) containing alphabetically sorted words, with one word per line. The input files should be present in the current working directory.

## *How to Execute*
1. Clone or download the source code from the provided GitHub URL.
2. Compile the C++ program using your C++ compiler:
    ```bash
    g++ compounded_words.cpp -o compounded_words
    ```
3. Run the program with the following command:
    ```bash
    ./compounded_words
    ```
4. The program will prompt you to select either 'Input_01.txt' or 'Input_02.txt' for processing. Follow the on-screen instructions to make your selection.
5. After processing, the program will display the longest compounded word, the second longest compounded word, and the time taken to process the input file.

## *Approach Used*
1. Read and Sort:
    - Read words from the input file, store them in a vector, and sort the vector based on word length.
2. Trie for Efficiency:
    - Create a trie to efficiently manage and search for words.
3. Find Longest Compound Word:
    - Start from the end of the sorted list and iterate through words.
    - For each word:
        * Remove it from the trie.
        * Check if it's a compounded word.
        * Reinsert it into the trie.
        * Store it as the longest compounded word and exit the loop if it's a compounded word.
4. Find Second Longest Compound Word:
    - Continue the loop to find the second longest compounded word.
    - The word should be shorter than length of the longest compound word but longer than other words.
5. Measure Time:
    - Record the execution time to gauge performance.
6. Display Output:
    - Show results, including the longest and second longest compounded words, and the time taken for processing the input files.
