## 0115: add-binary
- 觀察:
    - 如果兩個都是1(外加有可能有進位)，所以這邊設unsigned
    - 最後一個可能要進位
    - push_back string之後最後reverse
- corner case:
- 語法問題記錄:
    - 因為char是按照順序排列的，所以`'1' - '0'可以是int 1`，`'0'` - `'1'`可以是int -1
    - `while (a || b)`
    - void reverse(兩個迭代器)
- 想法
    - rbegin兩個傢伙，然後推回來
    - 如果其中一個人沒了就都加零
    - 設一個unsign是最後pushback的數字
        - 四種可能，0、1、2、3