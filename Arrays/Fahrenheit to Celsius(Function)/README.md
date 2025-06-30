# 🌡️ Fahrenheit to Celsius Table Generator

## 🧩 Problem Statement

Given three values – Start Fahrenheit Value (S), End Fahrenheit Value (E), and Step Size (W),  
you need to convert all Fahrenheit values from Start to End at the gap of W,  
into their corresponding Celsius values and print the table.

> **Note:**  
> You don't have to write the main function or take input. It has already been taken care of.  
> You need to just print the integer value.  
> Just write the code that prints Fahrenheit to Celsius table in the function itself.

**Formula:**  
C = (F - 32) * 5 / 9


---

### 📌 Constraints:
- `0 <= S <= 1000`  
- `0 <= E <= 1000`  
- `0 <= W <= 1000`  

---

### 📥 Sample Input 1:
0
100
20

### 📤 Sample Output 1:
0 -17
20 -6
40 4
60 15
80 26
### 💡 Explanation:

Start = 120, End = 200, Step = 40  
Values to convert: 120, 160, 200  

Conversion using `C = (F - 32) * 5 / 9`:
- 120 → 48.88 → **48**
- 160 → 71.11 → **71**
- 200 → 93.33 → **93**

Only the integer part of the Celsius value is printed.