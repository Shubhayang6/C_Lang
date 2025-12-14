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

## `Types` are memory contracts
>  ` uint16_t x;` would mean:
- Exactly 16 bits.
- Exact memory width.
- Exact overflow behaviour.
- Exact alignment implications.
