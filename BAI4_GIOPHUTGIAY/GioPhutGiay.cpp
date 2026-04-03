cout << "Giay khong hop le.\n";
				valid = 0;
			}
		}
		if (valid) break;
	}
}

void GioPhutGiay::Xuat() {
	cout << "Thoi diem moi (+1s) la: " << endl;
	cout << iGio << " gio " << iPhut << " phut " << iGiay << " giay";
}

void GioPhutGiay::TinhCongThemMotGiay() {
	iGiay++;
	if (iGiay == 60) {
		iGiay = 0;
		iPhut++;
	}if (iPhut == 60) {
		iPhut = 0;
		iGio++;
	}if (iGio == 24) {
		iGio = 0;
	}
}
