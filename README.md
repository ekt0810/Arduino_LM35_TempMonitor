# Arduino LM35 Temperature Monitor System

## 📝 Mô tả dự án
Dự án này xây dựng một hệ thống giám sát nhiệt độ đa kênh sử dụng cảm biến **LM35** và bo mạch **Arduino**. Hệ thống có khả năng thu thập dữ liệu nhiệt độ từ 3 khu vực khác nhau, đưa ra cảnh báo trực quan bằng đèn LED khi có sự cố quá nhiệt và truyền dữ liệu lên máy tính thông qua chuẩn **JSON** để phục vụ việc giám sát hoặc xử lý bằng phần mềm phía PC.

Dự án là bài thực hành thực tế cho môn học **Mạng cảm biến** tại **Học viện Công nghệ Bưu chính Viễn thông (PTIT)**.

## ✨ Tính năng chính
- **Giám sát 3 kênh:** Đọc dữ liệu đồng thời từ 3 cảm biến LM35 (Chân A0, A1, A2).
- **Định dạng JSON:** Dữ liệu được đóng gói chuẩn JSON giúp dễ dàng tích hợp với các ứng dụng Web hoặc C#.
- **Cảnh báo thông minh:** Tự động kích hoạt LED tại chân 13 nếu bất kỳ kênh nào vượt quá ngưỡng **35°C**.
- **Quản lý Git Flow:** Lịch sử commit rõ ràng, hỗ trợ làm việc nhóm và truy vết mã nguồn (Git blame).

## 🛠 Danh sách phần cứng
| STT | Linh kiện | Số lượng | Chức năng |
|:---:|:---|:---:|:---|
| 1 | Arduino Uno R3 / Nano | 01 | Khối xử lý trung tâm |
| 2 | Cảm biến nhiệt độ LM35 | 03 | Đo nhiệt độ môi trường |
| 3 | Đèn LED (Đỏ) | 01 | Báo hiệu cảnh báo quá nhiệt |
| 4 | Điện trở 220Ω | 01 | Bảo vệ đèn LED |
| 5 | Breadboard & Dây cắm | 01 | Kết nối các linh kiện |

## 👥 Thành viên nhóm
Hệ thống được phát triển và quản lý bởi nhóm sinh viên lớp [Tên lớp của bạn], Khoa CNTT - PTIT.

| STT | Họ và tên | Mã sinh viên (MSSV) | Vai trò | Nhiệm vụ chính |
|:---:|:---|:---:|:---:|:---|
| 1 | **Nguyễn Kim Trung** | n23dcci073 | **Trưởng nhóm** | Quản trị Repository, thiết lập cấu trúc dự án, viết firmware cơ bản. |
| 2 | **Nguyễn Kim Trung** | n23dcci073 | **Thành viên** | Phát triển tính năng cảnh báo LED, tối ưu hóa định dạng JSON, viết tài liệu README. |

## 📂 Cấu trúc thư mục dự án
```text
Arduino_LM35_TempMonitor/
├── firmware/              # Mã nguồn vi điều khiển (.ino)
│   └── LM35_TempReader/
│       └── LM35_TempReader.ino
├── pc_app/                # Ứng dụng giao diện trên máy tính (C# / Python)
├── simulation/            # File thiết kế và mô phỏng (Proteus / Tinkercad)
├── docs/                  # Tài liệu hướng dẫn và báo cáo Lab
├── libs/                  # Các thư viện hỗ trợ (nếu có)
└── .gitignore             # Loại bỏ các file rác (.exe, .o, .hex)
