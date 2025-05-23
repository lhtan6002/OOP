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

### Push project lên GitHub
Bước 1: thêm tất cả thay đổi vào stage  
`git add .`   

Bước 2: ghi lại thay đổi  
`git commit -m "..."`

Bước 3: đẩy lên GitHub  
`git push`  