# 0283移动零

## 问题描述

给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。  

请注意 ，必须在不复制数组的情况下原地对数组进行操作。

## 解法

### 快慢指针法

快指针相当于遍历数组，慢指针相当于记录修改后的最新位置

当快指针找到不等于0的元素就将慢指针后移一位，并将该元素存进来，而第一个元素不知道动不动，所以slow要从0索引开始（区别于26题）


