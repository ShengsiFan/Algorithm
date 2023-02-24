# 0028找出字符串中第一个匹配项的下标

## 问题描述

给你两个字符串 haystack 和 needle ，请你在 haystack 字符串中找出 needle 字符串的第一个匹配项的下标（下标从 0 开始）。如果 needle 不是 haystack 的一部分，则返回  -1 。

 

示例 1：

输入：haystack = "sadbutsad", needle = "sad"
输出：0

示例 2：

输入：haystack = "leetcode", needle = "leeto"
输出：-1

## 解法

### 暴力解法

两层遍历，没发现就从主串移到下一位，从副串从头找。时间复杂度O(mn)

### KMP

