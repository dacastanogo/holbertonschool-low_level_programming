int rand()
{
	static int i;
	int numbers[] = {8, 8, 7, 9, 23, 74};

	return numbers[i++ % 6];
}
