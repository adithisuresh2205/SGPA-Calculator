🎓 SGPA Calculator in C

This is a simple yet efficient **CGPA Calculator** written in the C programming language. It allows users to input subject grades as letter grades (like `O`, `A+`, `P`, etc.) along with credit values and then calculates the **Cumulative Grade Point Average (CGPA)** accordingly.


📌 Features

- Accepts **letter grades** (O, A+, A, B+, B, C, P, F)
- Grade points are automatically mapped based on predefined rules
- Handles **floating-point precision** (e.g., A+ = 9.5)
- Calculates CGPA using:  
  \[
  \text{CGPA} = \frac{\sum (\text{Grade Point} \times \text{Credits})}{\sum (\text{Credits})}
  \]
- Error handling for invalid grade inputs


📖 Grade to Point Mapping

| Grade | Grade Point |
|-------|-------------|
| O     | 10.0        |
| A+    | 9.5         |
| A     | 9.0         |
| B+    | 8.0         |
| B     | 7.0         |
| C     | 6.0         |
| P     | 5.0         |
| F     | 0.0         |
