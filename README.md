# **Bejeweled** 
## **Video mô tả game**
[Link](https://youtu.be/eIV05z9agxQ)

## **Hướng dẫn xây dựng**
---
### *Yêu cầu:*
* Visual Studio Code ( hoặc bất kì trình biên dịch C++ nào khác, ở đây tôi sử dụng Visual Studio Code ) 
* Mingw32 ( phiên bản 7.3.0 )
* Thư viện SFML
### *Cách chạy chương trình:*
* Mở Visual Studio Code => Terminal => New Terminal
* Gõ lệnh: 
###
``` 
    git clone https://github.com/dodangquyen22/bejeweled.git 
```
* Lệnh chạy xong, một folder mới được tạo 
* Tại giao diện Visual Studio Code, chọn File => Open Folfder => chọn      folder được tạo bên trên => Open;
* Sau khi mở được folder, di chuyển xuống Terminal, gõ 2 lệnh sau:
```
    mingw32-make
    ./sfml-app.exe
```
---
## **Mô tả chung:**
* Game sử dụng phím điều hướng và chuột để điều khiển
* Thành phần game: gems
* Ý tưởng chính:Xếp các viên kim cương có hình dạng giống nhau (tối thiểu là ba viên)thành hàng thẳng theo hàng ngang hoặc hàng dọc bằng cách nhấn chuột trái vào hai viên kim cương. Mỗi ván game sẽ chơi trong vòng 1 phút, mỗi lần phá hủy được các viên kim cương sẽ tính là một điểm.
## **Các chức năng đã cài đặt**
### Cấu trúc game: Game có đủ các trạng thái cơ bản:
####
* Menu
* GameLoop
* GameOver
### Mô tả :
* #### MenuState: Có 2 nút:
    * Play  :    Chuyển sang trạng thái GameLoop
    * Exit   :   Thoát game  
* #### GameLoop                 :  Xử lý trò chơi
* #### GameOver: Khi hết thời gian quy định của trò chơi thì game sẽ quay lại GameLoop  
## **Kỹ thuật lập trình được sử dụng**
* Lập trình đồ họa
* Class
* Struct
* Mảng
* Hàm
* Các biến đếm, biến cắm cờ (bool)
## **Kết luận**
* Game cơ bản đã có đủ các cấu trúc của 1 game. 
* Tuy nhiên, do không sử dụng con trỏ, cấu trúc game chưa được tốt và tối ưu hóa nhất.
* Kịch bản game còn khá đơn giản, đồ họa chưa đẹp;
* Hướng phát triển:
	* Nâng cấp đồ họa game cho bắt mắt hơn
        * Xây dựng chương trình game với nhiều level
        * Thêm các item phụ, các kịch bản mới thú vị hơn



		
