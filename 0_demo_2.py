def xoa_trung_lap(s):
   #Chuoi luu cac ky tu khong trung lap
   chuoiKetQua = ""
   #Su dung vong lap for duyet qua cac ky tu cua chuoi s
   for kyTu in s:
       #Neu ky tu chua xuat hien trong chuoiKetQua thi them vao
       if kyTu not in chuoiKetQua:
           chuoiKetQua += kyTu
   return chuoiKetQua

#Nhap gia tri tu ban phim
s = input()

#Goi ham va truyen cac tham so can thiet
print(xoa_trung_lap(s))