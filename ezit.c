#include<unistd.h>
#include<termios.h>

void enableRawMode() {
	struct termios raw;
	tcgetattr(STDIN_FILENO, &raw);
}

int main() {
	enableRawMode;
	char c;
	while(read(STDIN_FILENO, &c, 1) ==1 && c != 'q');
	return 0;
}
