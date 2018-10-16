#pragma once
class Flag
{
public:
	Flag();
	~Flag();
	/*Bai 240
	Hãy kiểm tra mảng số nguyên có tồn tại giá trị không hay không? Nếu
	không tồn tại giá trị không trả về giá trị 0, ngược lại trả về 1
	(tontaikhong).
	*/
	int l240(const int const * arr, int size, int N);

	/*Bai 241
	Hãy kiểm tra mảng số nguyên có tồn tại hai giá trị không liên tiếp hay
	không ?(haikhong).
	*/
	bool l241(const int const * arr, int size);
	int partition(int arr[], int low, int high);
	void quickSort(int arr[], int low, int high);
	void swap(int* a, int* b);
	

	/*Bài 242.
	Hãy kiểm tra mảng số nguyên có tồn tại giá trị chẵn hay không? Nếu
	không tồn tại giá trị chẵn trả về giá trị 0, hay ngược lại trả về
	1(tontaichan)
	*/
	bool l242(const int const * arr, int size);

	/*Bài 243:
	Hãy kiểm tra mảng số nguyên có tồn tại số nguyên tố hay không? Nếu
	có trả về 1, nếu không trả về 0 (tontainguyento).
	*/
	bool l243(const int const * arr, int size);
	bool laSoNguyenTo(int N);

	/*Bai 244
	Hãy kiểm tra mảng có thỏa mãn tính chất sau không: “Mảng không có
	tồn tại số hoàn thiện lớn hơn 256”. Nếu thỏa trả về 1, nếu không trả về
	0 (ktinhchat).
	*/
	bool l244(const int const * arr, int size);
	bool soHoanThien(int N);

	/*Bai 255:
	Hãy cho biết mảng các số nguyên có toàn số chẵn hay không? Nếu có
	tồn tại giá trị lẻ trả về giá trị 0, ngược lại trả về 1 (kttoanchan).
	*/
	bool l255(const int const * arr, int size);

	/*Bai 246
	Hãy kiểm tra mảng một chiều các số thực có đối xứng hay không?
	(ktdoixung).
	*/

	/*Bai 247
	Ta định nghĩa một mảng có tính chẵn lẻ, khi tổng của hai phần tử liên
	tiếp trong mảng luôn luôn là số lẻ. Hãy viết hàm kiểm tra mảng a có
	tính chẵn lẻ hay không? (ktchanle)
	*/
	bool bai247(const int const * arr, int size);
	

	/*Bai 248
	Hãy kiểm tra mảng có tăng dần hay không? (kttang).
	*/
	bool bai248(const int const * arr, int size);

	/*Bai 249
	Hãy kiểm tra mảng có giảm dần hay không?(ktgiam)
	*/
	bool bai249(const int const * arr, int size);

	/*Bai 250
	Hãy cho biết các phần tử trong mảng có lập thành cấp số cộng không?
	Nếu có hãy chỉ ra công sai d .(ktcsc)
	*/
	bool bai250(const int const * arr, int size);

	/*Bai 251
	Hãy cho biết các phần tử trong mảng có bằng nhau không?
	*/
	bool bai251(const int const * arr, int size);
	/*Bai 252
	Người ta định nghĩa một mảng được gọi là “dạng sóng” khi phần tử có
	giá trị số I lớn hơn hoặc nhỏ hơn hai phần tử xung quanh nó. Hãy viết
	hàm kiểm tra trong a sóng hay không (ktdangsong).
	*/
	bool bai252(const int const * arr, int size);

	/*Bai 254
	Hãy đếm số lượng giá trị trong mảng thỏa tính chất: “lớn hơn tất cả các
	giá trị đứng đằng trước nó
	*/
	void bai253(const int const * arr, int size);
};

