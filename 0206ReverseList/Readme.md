# 0206翻转链表

## 问题描述

给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。

## 解法

### 双指针法

核心逻辑就是不能丢失链接。为当前操作的指针定义保存一下它的前一个节点和后一个节点。
几个注意点：
> temp = current为什么要写在循环里面？因为链表可能只有一个节点
> while 里面为什么是pre？如果是current，最后一个节点会丢失

### 递归法

其实就是双指针法的递归写法。要注意的点是递归函数调用的时候要想清楚pre和current是什么