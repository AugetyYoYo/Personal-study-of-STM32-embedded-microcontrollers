# STM32 学习记录

2025 年 11–12 月复习 STM32 标准外设库时的工程记录，Keil MDK + 标准库。

| 目录 | 内容 |
|---|---|
| `STM32 -New-Project-File/` | 标准库工程模板（Start / Library / System / User 分层） |
| `Project/` | 在模板上逐项添加外设的实验工程 |

练习主要集中在 GPIO / RCC / USART，目的是把「寄存器直接写」和「库函数调用」两套写法对上，
搞清楚库函数背后到底动了哪几个位。