# 0383赎金信

## 问题描述

给你两个字符串：ransomNote 和 magazine ，判断 ransomNote 能不能由 magazine 里面的字符构成。

如果可以，返回 true ；否则返回 false 。

magazine 中的每个字符只能在 ransomNote 中使用一次。

## 解法

### 哈希法

和242题差不多，不过判断标准变一变。由于ransomNote里的字母，magazine必须全都有，所以ransomNote的hash表，
因为每个字母magazine里一定不能少于ransomNote里的，所以在遍历magazine后，所有元素都应该是负数。