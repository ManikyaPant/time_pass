/* Author: Serpentx
    Noob here xD           */
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int a) {
	for(int i = 2; i * i <= a; ++i)
		if(a % i == 0)
			return false;
	return true;
}

bool divisible(int a) {
	printf("%d", a);
	fflush(stdout);
	char sl[10];
	scanf("%s", sl);
	return sl[0] == 'y' || sl[0] == 'Y';
}

int HIGH = 100;

int main() {
	int counter = 0; // we print "composite" if counter >= 2
	for(int a = 2; a <= HIGH/2 && counter < 2; ++a)
		if(isPrime(a))
			if(divisible(a)) {
				++counter;
				if(a * a <= HIGH && divisible(a * a))
					++counter;
			}
	puts(counter >= 2 ? "composite" : "prime");
	return 0;
}
