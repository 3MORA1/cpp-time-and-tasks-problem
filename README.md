# cpp-time-and-tasks-problem

# Maximum Task Value Within Time Limit (C++) ⏱️💻

## 📌 Overview | نظرة عامة
**English:**  
A C++ problem-solving implementation using conditional statements (`if`) to find the maximum possible value/reward (`ans`) achievable from two tasks within a given time limit (`k`). Each task requires a specific time (`x`, `y`) and yields a specific value (`a`, `b`).

**العربية:**  
حل مسألة برمجية بلغة C++ باستخدام الجمل الشرطية (`if`) لإيجاد أقصى قيمة أو ربح ممكن تحقيقه (`ans`) من تنفيذ مهمتين أو إحداهما في حدود الوقت المتاح (`k`)، حيث تتطلب كل مهمة وقتاً محدداً (`x`, `y`) وتعطي قيمة معينة (`a`, `b`).

---

## ⚙️ Logic & Approach | فكرة الحل
1. Read the total available time `k`.
2. Read the time and value for the first task (`x`, `a`) and the second task (`y`, `b`).
3. Initialize `ans = 0` as the default result if no task fits within the available time.
4. Check if `k` is enough for both tasks combined (`k >= x + y`), updating `ans` to `a + b`.
5. Check each task individually (`k >= x` and `k >= y`) to ensure `ans` holds the maximum valid value.
6. Print the final maximum value `ans`.

---

## 💻 Sample Input & Output | أمثلة على المدخلات والمخرجات

### Example 1
**Input:**
```text
2
3 5
4 9
