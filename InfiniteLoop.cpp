void infinite_loop_vulnerable(int a)
{
	int i = 0;
	while (true) {
		if (i >= 10) {
			if (a == 11) {
				break;
			}
		}
		i++;
	}
}

void infinite_loop_fixed(int a)
{
	int i = 0;
	while (true) {
		if (i >= 10) {
			if (a == 11) {
				break;
			}
			else {
				a++;
			}
		}
		i++;
	}
}

void foo_vulnerable() {
	int i = get();
	int j = 1;
	while (1) {
		if (i == 1) {
			j++;
		}
		else {
			break;
		}
	}
}

void foo()_fixed {
	int i = get();
	int j = 1;
	while (1) {
		if (i == 1) {
			i++;
		}
		else {
			break;
		}
	}
}