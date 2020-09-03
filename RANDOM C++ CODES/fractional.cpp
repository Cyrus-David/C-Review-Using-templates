#include <iostream>

using namespace std;

class Items{
	int size;
	public:
		double value[100];
		double weight[100];

		Items(int);
		void getdata();
		double* fractional();
		void print();
		void solve(double*, int, int);
		void merge(double*, int, int, int, int);
		int maxValue(int);
		~Items() {};
};

void Items::merge(double* arr, int start1, int end1, int start2, int end2) {
	int j = start1, k = start2;
	int size = end2 - start1;
	double* temp = new double[size];
	double* val = new double[size];
	double* wt = new double[size];

	for (int i = 0; k <= end2 || j <= end1; i++) {
		if ((arr[j] > arr[k] && j <= end1) || k > end2)  {
			temp[i] = arr[j];
			val[i] = value[j];
			wt[i] = weight[j];
			j++;
		} else {
			temp[i] = arr[k];
			val[i] = value[k];
			wt[i] = weight[k];
			k++;
		}
	}

	for (int i = start1, j = 0; i <= end2; i++, j++) {
		arr[i] = temp[j];
		value[i] = val[j];
		weight[i] = wt[j];
	}
	cout << endl;

}

void Items::solve(double* arr, int start, int end) {
	if (start < end) {
		int mid = (start + end)/2;
		solve(arr, start, mid);
		solve(arr, mid + 1, end);
		merge(arr, start, mid, mid + 1, end);
	}
}

Items::Items (int s) {
	size = s;
}

void Items::getdata() {
	for (int i = 0; i < size; i++) {
		cout << "Enter Value then Weight (space separated):";
		cin >> value[i] >> weight[i];
	}
}

double* Items::fractional() {
	double* fractional = new double[size];
	for (int i = 0; i < size; i++) {
		fractional[i] = value[i]/weight[i];
	}
	return fractional;
}

void Items::print() {
	for (int i = 0; i < size; i++) {
		cout << "|" << "ITEM #" << i << "| = | " << value[i] << " | " << weight[i] << endl;
	}
}

int Items::maxValue(int cap) {
	int val = 0;
	for (int i = 0; i < size && cap != 0; i++) {
		if (weight[i] <= cap) {
			val += value[i];
			cap -= weight[i];
		} else {
			val += (value[i] * cap/weight[i]);
			cap -= cap;
		}
	}
	return val;
}

int main(void) {
	cout << "Enter Number of Foods:";
	int size;
	cin >> size;
	cout << "|Input|" << endl;
	Items foods(size);
	foods.getdata();

	cout << "Enter Maximum Capacity:";
	int capacity;
	cin >> capacity;

	double* frac = foods.fractional();
	
	foods.solve(frac, 0, size-1);

	cout << "Maximum Value that can be carried is:";
	cout << foods.maxValue(capacity);
	
	cout << endl;
}