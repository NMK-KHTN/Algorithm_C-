# 📘 Lộ Trình Luyện Đệ Quy & Quy Hoạch Động (Recursion & Dynamic Programming)

Repo: **Algorithm**
Ngôn ngữ: **C++**
Mục tiêu: Thành thạo tư duy đệ quy → memo → DP bottom-up thông qua các bài LeetCode.

---

# 🌟 Tổng Quan Lộ Trình 4 Tuần

* **Tuần 1:** Recursion & Backtracking
* **Tuần 2:** Top-down DP (Memoization) → Bottom-up DP
* **Tuần 3:** DP 2D & String DP
* **Tuần 4:** DP nâng cao & Hard Problems

Mỗi tuần có danh sách bài tập + checkbox để theo dõi tiến độ.

---

# 📌 TUẦN 1 — Recursion & Backtracking

### 🎯 Mục tiêu

* Nắm vững đệ quy, backtracking, tree recursion.
* Sinh tổ hợp, hoán vị, duyệt cây.

### ✓ Danh sách bài tập

* [X] 21. Merge Two Sorted Lists
* [X] 100. Same Tree
* [ ] 101. Symmetric Tree
* [ ] 104. Maximum Depth of Binary Tree
* [ ] 110. Balanced Binary Tree
* [ ] 226. Invert Binary Tree
* [ ] 257. Binary Tree Paths
* [ ] 78. Subsets
* [ ] 90. Subsets II
* [ ] 46. Permutations
* [ ] 47. Permutations II
* [ ] 39. Combination Sum
* [ ] 40. Combination Sum II
* **Bonus:**

  * [ ] 22. Generate Parentheses
  * [ ] 79. Word Search

---

# 📌 TUẦN 2 — Memoization & DP cơ bản

### 🎯 Mục tiêu

* Chuyển tích hợp: recursion → memo → dp bottom-up.
* Làm quen với các bài DP kinh điển.

### ✓ Danh sách bài tập

* [ ] 70. Climbing Stairs
* [ ] 746. Min Cost Climbing Stairs
* [ ] 198. House Robber
* [ ] 213. House Robber II
* [ ] 509. Fibonacci Number
* [ ] 1137. Tribonacci Number
* [ ] 377. Combination Sum IV
* [ ] 416. Partition Equal Subset Sum
* [ ] 494. Target Sum
* [ ] 322. Coin Change
* **Bonus:**

  * [ ] 518. Coin Change II

---

# 📌 TUẦN 3 — DP 2D & DP trên Chuỗi

### 🎯 Mục tiêu

* Làm chủ dp grid, dp chuỗi, dp bảng 2D.
* Hiểu cách xây dựng công thức chuyển đổi.

### ✓ Danh sách bài tập

* [ ] 62. Unique Paths
* [ ] 63. Unique Paths II
* [ ] 64. Minimum Path Sum
* [ ] 1143. Longest Common Subsequence
* [ ] 5. Longest Palindromic Substring
* [ ] 516. Longest Palindromic Subsequence
* [ ] 72. Edit Distance
* [ ] 131. Palindrome Partitioning
* [ ] 139. Word Break
* [ ] 97. Interleaving String
* **Bonus:**

  * [ ] 115. Distinct Subsequences

---

# 📌 TUẦN 4 — DP nâng cao & Hard

### 🎯 Mục tiêu

* Nhận dạng bài DP khó.
* Tối ưu hóa tư duy chia để trị + DP kết hợp.

### ✓ Danh sách bài tập

* [ ] 300. Longest Increasing Subsequence
* [ ] 368. Largest Divisible Subset
* [ ] 354. Russian Doll Envelopes
* [ ] 221. Maximal Square
* [ ] 276. Paint Fence
* [ ] 10. Regular Expression Matching
* [ ] 312. Burst Balloons
* [ ] 124. Binary Tree Maximum Path Sum
* [ ] 403. Frog Jump
* **Bonus:**

  * [ ] 42. Trapping Rain Water
  * [ ] 1155. Number of Dice Rolls With Target Sum

---

# 🧩 Template Code (C++)

Bạn có thể tạo thư mục `templates/` và dùng mẫu sau cho DP & Recursion:

```cpp
// Recursion + Memo Template
unordered_map<long long, long long> dp;
long long solve(long long x) {
    if (dp.count(x)) return dp[x];
    // handle base case...
    long long res = solve(x-1) + solve(x-2); // ví dụ
    return dp[x] = res;
}

// Bottom-Up DP Template
long long dp[1000005];
void compute(int n) {
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
}
```

---

# 📂 Cấu Trúc Repo Gợi Ý

```
Algorithm/
│ README.md
│
├── recursion/
│   ├── subsets.cpp
│   ├── permutations.cpp
│   ├── combination_sum.cpp
│   └── ...
│
├── dp_basic/
│   ├── climbing_stairs.cpp
│   ├── coin_change.cpp
│   └── ...
│
├── dp_2d/
│   ├── lcs.cpp
│   ├── edit_distance.cpp
│   └── ...
│
├── dp_advanced/
│   ├── lis.cpp
│   ├── burst_balloons.cpp
│   └── ...
│
└── templates/
    └── dp_template.cpp
```

---

# 🎯 Ghi chú

* Mỗi bài có thể tạo file `.cpp` tương ứng.
* Nên commit theo format:

```
feat: add solution for subset (LC78)
```

---

Chúc bạn học tốt và tiến bộ mỗi ngày!
