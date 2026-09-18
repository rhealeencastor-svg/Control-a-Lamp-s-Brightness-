# Laboratory Activity 2: Control a Lamp’s Brightness
**Course:** BCA188 - Programming for Internet of Things  
**Student:** Rhea Leen Castor

### Test Results Table

| Test Case | Switch State (`switchOn`) | Brightness Setting (`brightnessSetting`) | Calculated Output (`lampBrightness`) |
| :---: | :---: | :---: | :---: |
| **1** | `true` | 0 | **0** |
| **2** | `true` | 50 | **50** |
| **3** | `true` | 100 | **100** |
| **4** | `false` | 0 | **0** |
| **5** | `false` | 50 | **0** |
| **6** | `false` | 100 | **0** |

### Function Explanation

The function `int getLampBrightness(bool switchOn, int brightnessSetting)` determines the lamp brightness:
* **`bool switchOn`:** Represents switch state (`true` = ON, `false` = OFF).
* **`int brightnessSetting`:** Represents intended intensity (0 to 100).
* **Return Value (`int`):** Returns `brightnessSetting` when `switchOn` is `true`. Returns `0` when `switchOn` is `false`.

### Coding Check Answers

1. **Identification:** `int` (Data Type), `brightnessSetting` (Variable Name), `75` (Initial Value). Change using `brightnessSetting = 50;`.
2. **Data Types:** `bool` represents two states (ON/OFF). `int` represents numeric ranges (0 to 100).
3. **Prediction:** Output is `0` because `switchOn` is `false`.
4. **Case Sensitivity:** No, C++ is case-sensitive, so `switchOn` and `switchon` are distinct.
5. **Function I/O:** Accepts `bool` and `int`, returns `int` (`0` or `brightnessSetting`).
6. **Variable Scope:** No, variables in `setup()` are local and cannot be directly accessed in `loop()`.

Laboratory 2: Result recording
https://github.com/user-attachments/assets/06d0aa18-5821-4253-9d41-a012f80e08dd

<img width="1512" height="982" alt="Lab2 Screenshot" src="https://github.com/user-attachments/assets/afc4978a-1915-4b9d-a6c6-21253cf8b16a" />
