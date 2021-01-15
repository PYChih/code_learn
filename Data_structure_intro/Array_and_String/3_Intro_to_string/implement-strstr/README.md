### Implement strStr()
- 觀察:
    - lower-case and english charactersonly
    - haystack有可能是空
- corner case:
    - 當needle是空字串
        - `return 0`
    - 沒找到
        - `return -1`

- 語法問題記錄:
    - ==substr==
        ```
        string s("hello word");
        s.substr(0, 5);
        ```
- [ ] 停止條件要想清楚