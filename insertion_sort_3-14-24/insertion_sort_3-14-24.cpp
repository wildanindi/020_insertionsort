#include <iostream>
using namespace std;

int arr[9];
int n;

void input() {  // procedur untuk input
    while (true) {  // looping
        cout << "Masukkan banyaknya elemen pada array : ";  // output ke layar
        cin >> n;       // input dari pengguna
        if (n <= 20)    // jika n kurang dari atau sama dengan 20
            break;      //keluar dari loop
        else {          // jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";    // output ke layar
        }
    }

    cout << endl;                               // output bari kosong
    cout << "=================" << endl;        // output ke layar
    cout << "Masukkan Elemen Array" << endl;    // output ke layar
    cout << "=================" << endl;        // output ke layar

    for (int i = 0; i < n; i++) {       // looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ": ";  //output ke layar
        cin >> arr[i];  //input dari pengguna
    }

}

void insertionSort() {
    int i, temp, j;
    

    for (i = 1; i <= n - 1; i++) { // step 1

        temp = arr[i]; // step 2

        j = i - 1; //step 3

        while (j >= 0 && arr[j] > temp) //step 4
        {
            arr[j + 1] = arr[j]; // step 4a
            j--; //step 4b
        }

        arr[j + 1] = temp; //step 5
    }
}

void display() {
    cout << endl;
    cout << "=====================================" << endl;    
    cout << "Element Array yang telah tersusun" << endl;        
    cout << "=====================================" << endl;    
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j];
        if (j < n - 1) {
            cout << " --> ";
        }
    }
    cout << endl;
    cout << endl;
    cout << "Jumlah pass = " << n - 1 << endl;
    cout << endl;

}

int main()
{
    input();   
    insertionSort();  
    display();  
    system("pause");

    return 0;
}

