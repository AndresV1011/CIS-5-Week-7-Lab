#include <iostream>

// Lab 7 — Andres Valenzuela
// CIS 5 Week 07 · Two arrays

int main() {
  const int N = 5;
int quiz [N] = {88, 92, 70, 95, 81};
int lab [N] = {70, 70, 85., 90, 75};
int sum = 0;
int hi = quiz [0];

cout << "Quiz\n";
for (int i = 0; i < N; ++i){
  cout << "[" << i << "]" << quiz[i] << "\n";
  sum += quiz[i];
  if (quiz[i] > hi){
    hi = quiz[i];
  }
}
cout << "Sum: " << sum << "\n";
cout << "High: " << hi << "\n";

sum = 0;
hi = lab[0];

cout << "Lab\n";

for (int i = 0; i < N ; ++i){
  cout << "[" << i << "]" << lab[i] << "\n";
  sum += lab[i];

  if (lab[i] > hi){
    hi = lab[i];
  }
}

cout << "Sum: " << sum << "\n";
cout << "High: " << hi << "\n";
  return 0;
}
