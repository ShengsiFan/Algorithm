# 0232用栈实现队列

## 问题描述

请你仅使用两个栈实现先入先出队列。队列应当支持一般队列支持的所有操作（push、pop、peek、empty）：

实现 MyQueue 类：

void push(int x) 将元素 x 推到队列的末尾

int pop() 从队列的开头移除并返回元素

int peek() 返回队列开头的元素

boolean empty() 如果队列为空，返回 true ；否则，返回 false

说明：

你只能使用标准的栈操作 —— 也就是只有 push to top, peek/pop from top, size, 和 is empty 操作是合法的。
你所使用的语言也许不支持栈。你可以使用 list 或者 deque（双端队列）来模拟一个栈，只要是标准的栈操作即可。

## 解法

只用一个栈肯定实现不了，得用两个栈，一个输出一个输入。有两种方式，一种是两个栈都利用起来存储数据；另一种是只用一个来存储，另一个只在输出时用一用。

第二种方法运算步骤少一些，因为第一种每次pop或peek后要把输出栈所有数据倒回输入栈。并且peek函数可以复用pop

### 解法一

输入栈inStack储存数据，每次pop或peek时，把输入栈所有元素倒到输出栈outStack，再把outStack给pop或peek。最后把outStack所有元素再压回inStack中

### 解法二

前面步骤都与解法一相同，区别在于pop或peek结束后不用把outStack数据倒回去，因为outStack中反正都是先进队的在上面，下次再pop或push时顺序也是对的。

而且peek可以直接调用pop后再把pop的数据压回outStack即可。节省代码篇幅，不用大段的复制粘贴了。