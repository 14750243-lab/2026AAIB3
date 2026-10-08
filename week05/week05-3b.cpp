//week05-3b.cpp 學習計畫 Built-in Functions 第1題
//Leetcode 58. Length of Last Word 最後那個字,有幾個字母
//其實前面要寫#include <stringstream> 不過LeetCode幫你偷偷寫好了
class Solution {
public:
    int lengthOfLastWord(string s) {
       stringstream ss(s);// week05 string字串stream串流
       //week04 C++ 的圖括號, 是丟進去物件 初始化 的參數
        string ans;//week02 C++ 字串的宣告
        while( ss >> ans){//今天week05-1有用到
            //什麼都不做
        }
      return ans.length();//week01 week02 字串的長度
    }
};
