# Problem Description
- [Find_Pivot_index](https://leetcode.com/explore/learn/card/array-and-string/201/introduction-to-array/1144/)

- [x] 問題: int最大容量多是多少?
- ans : 
    - https://docs.microsoft.com/zh-tw/cpp/c-language/cpp-integer-limits?view=msvc-160
    - https://programming.im.ncnu.edu.tw/Chapter5.htm
    - https://blog.xuite.net/tsai.oktomy/program/64004343-C%2B%2B+%E7%9A%84%E5%9F%BA%E6%9C%AC%E8%B3%87%E6%96%99%E5%9E%8B%E6%85%8B
- 心得:
    - 要先把corner case 想清楚
        - 空vector
        - vector.size ==1
        - vector.size ==2
        - 啥時會return index 0
    - 把range for的sum vector改成了accumulate