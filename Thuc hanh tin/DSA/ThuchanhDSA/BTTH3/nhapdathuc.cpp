#include <bits/stdc++.h>
using namespace std;


struct DONTHUC{
	int somu;
	double heso;

	DONTHUC(double _heso = 0,int _somu=0){
		heso = _heso;
		somu  = _somu;
	}

	DONTHUC& operator = (const DONTHUC &rhs){
		if (this == &rhs) return *this;
		this->heso = rhs.heso;
		this->somu = rhs.somu;
		return *this;
	}
};


struct Node{
	DONTHUC* data;
	Node* next;

	Node(DONTHUC* _data = nullptr){
		this->data = _data;
		this->next = nullptr;
	}

};

struct DATHUC{
	Node* head;
	Node* tail;
	DATHUC(){
		this->head = nullptr;
		this->tail = nullptr;
	}
};

void Nhap(DATHUC& B, double heso, int somu) {
    DONTHUC* donthuc = new DONTHUC(heso, somu);
    Node* newnode = new Node(donthuc);
    if (B.head == nullptr || somu > B.head->data->somu) {
        newnode->next = B.head;
        B.head = newnode;
        if (B.tail == nullptr)
            B.tail = newnode;
    } else if (somu < B.tail->data->somu) {
        B.tail->next = newnode;
        B.tail = newnode;
    } else {
        Node* currentNode = B.head;
        while (currentNode->next != nullptr) {
            if (somu > currentNode->next->data->somu) {
                newnode->next = currentNode->next;
                currentNode->next = newnode;
                break;
            }
            currentNode = currentNode->next;
        }
    }
}

void Xuat(DATHUC B) {
    Node* currentNode = B.head;
    bool firstTerm = true ;
    bool allCoefficientsZero = true;

    while (currentNode != nullptr) {
        DONTHUC* donthuc = currentNode->data;

        if (donthuc->heso != 0) {
            allCoefficientsZero = false;

            if (!firstTerm) {
                if (donthuc->heso > 0)
                    cout << "+";
                else
                    cout << "-";
            } else {
                if (donthuc->heso < 0)
                    cout << "-";
            }

            if (abs(donthuc->heso) != 1 || donthuc->somu == 0){
                cout << abs(donthuc->heso);
            }

            if (donthuc->somu != 0) {
                if (donthuc->somu != 1){
                    cout << "x^" << donthuc->somu;
                } else {
                    if (donthuc->heso != 1) {
                        cout << "x";
                    }
                }
            }

            firstTerm = false;
        }

        currentNode = currentNode->next;
    }

    if (allCoefficientsZero) {
        cout << "0";
    }
}
double TinhDaThuc(DATHUC B, double x){
    double ketqua = 0.0;
    Node* currentNode = B.head;
    while(currentNode != nullptr){
        DONTHUC* donthuc = currentNode->data;
        ketqua += donthuc->heso*pow(x,donthuc->somu);
        currentNode = currentNode->next;
    }
    return ketqua;
}

int main() {
    DATHUC B;
    int N;

    cin >> N;
    for (int test = 0; test < N; test++){
		double heso; int somu;
		cin >> heso >> somu;
		Nhap(B,heso,somu);
    }


    cout << "Da thuc vua nhap la: "; Xuat(B);
    double x; cin >> x;
    cout << "\nVoi x=" << x << ", gia tri da thuc la: "
         << setprecision(2) << fixed << TinhDaThuc(B, x);
    return 0;
}
