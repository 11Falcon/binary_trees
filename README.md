# General

- **Allowed Editors:** vi, vim, emacs
- **Compilation Environment:** Ubuntu 20.04 LTS, using gcc with options: -Wall -Werror -Wextra -pedantic -std=gnu89
- **File Requirements:** All files should end with a new line
- **README.md Requirement:** A README.md file at the root of the project folder is mandatory
- **Coding Style:** Code should adhere to the Betty style; it will be checked using betty-style.pl and betty-doc.pl
- **Global Variables:** Not allowed
- **Function Limit:** No more than 5 functions per file
- **Standard Library:** Allowed for use
- **Examples:** Provided main.c files can be used to test functions, but don't need to be pushed to the repo
- **Prototypes:** Prototypes of all functions should be included in a header file named binary_trees.h
- **Header File Push:** Don't forget to push your header file
- **Header File Guard:** Include guards should be used in all header files

# GitHub

- **Repository Requirement:** One project repository per group
- **Repository Cloning Risk:** Cloning/forking a project repository with the same name before the second deadline risks a 0% score.

# More Info

## Data Structures

- **Binary Tree Structure:**
    ```c
    /**
     * struct binary_tree_s - Binary tree node
     *
     * @n: Integer stored in the node
     * @parent: Pointer to the parent node
     * @left: Pointer to the left child node
     * @right: Pointer to the right child node
     */
    struct binary_tree_s
    {
        int n;
        struct binary_tree_s *parent;
        struct binary_tree_s *left;
        struct binary_tree_s *right;
    };

    typedef struct binary_tree_s binary_tree_t;
    ```

- **Binary Search Tree:**
    ```c
    typedef struct binary_tree_s bst_t;
    ```

- **AVL Tree:**
    ```c
    typedef struct binary_tree_s avl_t;
    ```

- **Max Binary Heap:**
    ```c
    typedef struct binary_tree_s heap_t;
    ```

**Note:** For tasks 0 to 23 (included), simple binary trees are used, not BSTs, and they don’t follow any specific rule.

## Print Function

A provided print function is available for visualization purposes. It is not required to be pushed to the repository and may not be used during the correction.
```c
void binary_tree_print(const binary_tree_t *tree);

