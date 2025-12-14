# How a C program lives in memory

```
|------------------|  High address
|      Stack       |
|                  |
|------------------|
|      Heap        |
|------------------|
|  .bss (zeroed)   |
|------------------|
|  .data (init)    |
|------------------|
|  .rodata         |
|------------------|
|  .text (code)    |
|------------------|  Low address
```