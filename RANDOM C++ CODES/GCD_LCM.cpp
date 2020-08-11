int GCD(int a, int b) {
  if (a % b)
    return b;
  return GCD(b, a % b); 
}

int LCM(int a, int b) {
  return a*b/GCD(a,b);
}

