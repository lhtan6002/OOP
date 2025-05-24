## Biên dịch chương trình và lệnh RUN của từng file
### Lưu ý: Đứng ở thư mục cha tên LAB01 trước khi biên dịch và chạy chương trình
---
### Exercise 01 - DeathLoop

> Lệnh biên dịch  
`g++ FileMain/Ex01/main.cpp libs/utils.cpp -Ilibs -o output/ex01`  
  
> Lệnh chạy chương trình  
`./output/ex01`

---
### Exercise 02 - WrongPassword

> Lệnh biên dịch  
`g++ FileMain/Ex02/main.cpp FileMain/Ex02/function.cpp libs/utils.cpp -Ilibs -o output/ex02`  
  
> Lệnh chạy chương trình  
`./output/ex02`

---
### Exercise 03 - CurrencyDisplay

> Lệnh biên dịch  
`g++ FileMain/Ex03/main.cpp FileMain/Ex03/function.cpp libs/utils.cpp -Ilibs -o output/ex03`  
  
> Lệnh chạy chương trình  
`./output/ex03`

---
### Exercise 04 - RandomIntegers

> Lệnh biên dịch  
`g++ -std=c++23 FileMain/Ex04/main.cpp FileMain/Ex04/function.cpp libs/utils.cpp -Ilibs -o output/ex04`  
  
> Lệnh chạy chương trình  
`./output/ex04`

---

### Push project lên GitHub
Bước 1: thêm tất cả thay đổi vào stage  
`git add .`   

Bước 2: ghi lại thay đổi  
`git commit -m "..."`

Bước 3: đẩy lên GitHub  
`git push`  