# // B4: Nhập vào 1 chuỗi, in ra chuỗi mới đã bỏ đi những kí tự trùng với kí tự phía trước.
# // # >> mothaibabon
# // # ->mothaibn
# // #
# // # B5: Nhập vào 1 chuỗi kí tự, in ra số lượng các kí tự ở trong nó.
# // # VD: >> mothaibabon
# // # m: 1
# // # o: 2
# // # t: 1
# // # h: 1
# // # a: 2
# BÀI 4:
s = input() 
ketqua = "" # khai báo một chuỗi kết quả rỗng
for i in s:  # duyệt các phần tử trong chuỗi ban đầu
    if i not in ketqua: #kiểm tra nếu phần tử nào trong chuỗi ban đầu chưa có mặt trong chuỗi kết quả thì ....
        ketqua+=i   # .... Chuỗi kết quả thêm kí tự đó vào
print(ketqua)     # trả về chuỗi kết quả
# Bài 5
s = input() 
ketqua = "" # khai báo một chuỗi kết quả rỗng
for i in s:  # duyệt các phần tử trong chuỗi ban đầu
    if i not in ketqua: #nếu phần tử nào trong chuỗi ban đầu chưa có mặt trong chuỗi kết quả
        ketqua+=i #Chuỗi kết quả thêm kí tự đó vào
for i in ketqua:  # duyệt tất cả các phần tử trong chuỗi kết quả
    dem = 0  # khai báo một biến dếm, bắt đầu bằng 0 vì chưa kiếm  thấy phần tử nào trong chuỗi ban đầu
    for j in s: # duyệt phần tử trong chuỗi ban đầu
        if i == j:   # nếu 2 phần tử đó bằng nhau
            dem+=1  # biến đếm tăng đơn vị
    print(i,end=': ') # in ra kí tự
    print(dem) # in ra số lần xuất hiện của kí tự trong chuỗi đó


