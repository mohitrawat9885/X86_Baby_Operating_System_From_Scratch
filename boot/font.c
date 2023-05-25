int getArialCharacter(int index, int y)
{
	unsigned int characters_arial_0[][150] = {
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b0000000000,
			0b1000000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1010000000,
			0b1010000000,
			0b1010000000,
			0b1010000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0010100000,
			0b0010100000,
			0b0010100000,
			0b1111100000,
			0b0101000000,
			0b0101000000,
			0b0101000000,
			0b1111100000,
			0b1010000000,
			0b1010000000,
			0b1010000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0010000000,
			0b0111000000,
			0b1010100000,
			0b1010100000,
			0b1010000000,
			0b1010000000,
			0b0111000000,
			0b0010100000,
			0b0010100000,
			0b1010100000,
			0b1010100000,
			0b0111000000,
			0b0010000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0100010000,
			0b1010010000,
			0b1010100000,
			0b1010100000,
			0b1010100000,
			0b0101010000,
			0b0001101000,
			0b0001101000,
			0b0010101000,
			0b0010101000,
			0b0010010000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0011000000,
			0b0100100000,
			0b0100100000,
			0b0100100000,
			0b0011000000,
			0b0110000000,
			0b1101001000,
			0b1000111000,
			0b1000110000,
			0b1100110000,
			0b0111001000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
		},
		{
			0b0000000000,
			0b0010000000,
			0b0100000000,
			0b0100000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1100000000,
			0b0100000000,
			0b0100000000,
			0b0010000000,
		},
		{
			0b0000000000,
			0b1000000000,
			0b0100000000,
			0b0100000000,
			0b0010000000,
			0b0010000000,
			0b0010000000,
			0b0010000000,
			0b0010000000,
			0b0010000000,
			0b0010000000,
			0b0110000000,
			0b0100000000,
			0b0100000000,
			0b1000000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0100000000,
			0b1110000000,
			0b0100000000,
			0b1100000000,
			0b1010000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0010000000,
			0b0010000000,
			0b0010000000,
			0b1111100000,
			0b0010000000,
			0b0010000000,
			0b0010000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b0000000000,
		},
	}; // ################################################################################
	unsigned int characters_arial_1[][150] = {
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1100000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1000000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0010000000,
			0b0010000000,
			0b0010000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0111000000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1101100000,
			0b0111000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0010000000,
			0b0110000000,
			0b1010000000,
			0b0010000000,
			0b0010000000,
			0b0010000000,
			0b0010000000,
			0b0010000000,
			0b0010000000,
			0b0010000000,
			0b0010000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0111000000,
			0b1000100000,
			0b1000100000,
			0b0000100000,
			0b0000100000,
			0b0001000000,
			0b0001000000,
			0b0010000000,
			0b0100000000,
			0b1100000000,
			0b1111100000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0111000000,
			0b1100100000,
			0b1000100000,
			0b0000100000,
			0b0001100000,
			0b0011000000,
			0b0000100000,
			0b0000100000,
			0b1000100000,
			0b1000100000,
			0b0111000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000100000,
			0b0001100000,
			0b0010100000,
			0b0010100000,
			0b0100100000,
			0b0100100000,
			0b1000100000,
			0b1111110000,
			0b0000100000,
			0b0000100000,
			0b0000100000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0111100000,
			0b0100000000,
			0b0100000000,
			0b1000000000,
			0b1111000000,
			0b1000100000,
			0b0000100000,
			0b0000100000,
			0b1000100000,
			0b1000100000,
			0b0111000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0111000000,
			0b1000100000,
			0b1000100000,
			0b1000000000,
			0b1011000000,
			0b1100100000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b0111000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1111100000,
			0b0000100000,
			0b0001000000,
			0b0001000000,
			0b0010000000,
			0b0010000000,
			0b0010000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0111000000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b0111000000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b0111000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0111000000,
			0b1001000000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1001100000,
			0b0110100000,
			0b0000100000,
			0b1000100000,
			0b1001000000,
			0b0111000000,
		},
	}; // ################################################################################
	unsigned int characters_arial_2[][150] = {
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1000000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b0000000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0001000000,
			0b0010000000,
			0b0100000000,
			0b1000000000,
			0b0100000000,
			0b0010000000,
			0b0001000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1111100000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1111100000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1000000000,
			0b0100000000,
			0b0010000000,
			0b0001000000,
			0b0010000000,
			0b0100000000,
			0b1000000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0111100000,
			0b1100110000,
			0b1000010000,
			0b0000010000,
			0b0000110000,
			0b0000100000,
			0b0001000000,
			0b0001000000,
			0b0001000000,
			0b0000000000,
			0b0001000000,
		},
		{
			0b0000000000,
			0b0001111000,
			0b0010001100,
			0b0100000100,
			0b0101101010,
			0b1001011010,
			0b1010011010,
			0b1010010010,
			0b1010010010,
			0b1010010100,
			0b1010110100,
			0b1001111000,
			0b0100000010,
			0b0110000100,
			0b0001111000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0001000000,
			0b0010100000,
			0b0010100000,
			0b0010100000,
			0b0010100000,
			0b0100010000,
			0b0100010000,
			0b0111110000,
			0b0100010000,
			0b1000001000,
			0b1000001000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1111000000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1001000000,
			0b1111000000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1111000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0111000000,
			0b1001100000,
			0b1000100000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000100000,
			0b1001000000,
			0b0111000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1111000000,
			0b1001000000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1001000000,
			0b1111000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1111100000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1111100000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1111100000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1111000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1110000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
		},
	}; // ################################################################################
	unsigned int characters_arial_3[][150] = {
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0011100000,
			0b0100110000,
			0b1000010000,
			0b1000000000,
			0b1000000000,
			0b1001110000,
			0b1000010000,
			0b1000010000,
			0b1000010000,
			0b0100110000,
			0b0011100000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1111100000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0001000000,
			0b0001000000,
			0b0001000000,
			0b0001000000,
			0b0001000000,
			0b0001000000,
			0b0001000000,
			0b0001000000,
			0b1001000000,
			0b1001000000,
			0b0110000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1000010000,
			0b1000100000,
			0b1001000000,
			0b1010000000,
			0b1010000000,
			0b1110000000,
			0b1001000000,
			0b1001000000,
			0b1000100000,
			0b1000100000,
			0b1000010000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1111100000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1000001000,
			0b1100011000,
			0b1100011000,
			0b1100011000,
			0b1100101000,
			0b1010101000,
			0b1010101000,
			0b1010101000,
			0b1010101000,
			0b1011101000,
			0b1001001000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1000100000,
			0b1100100000,
			0b1100100000,
			0b1100100000,
			0b1010100000,
			0b1010100000,
			0b1010100000,
			0b1001100000,
			0b1001100000,
			0b1001100000,
			0b1000100000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0011000000,
			0b0100100000,
			0b1000010000,
			0b1000010000,
			0b1000010000,
			0b1000010000,
			0b1000010000,
			0b1000010000,
			0b1000010000,
			0b0100100000,
			0b0011000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1111000000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1111000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0011000000,
			0b0100100000,
			0b1000010000,
			0b1000010000,
			0b1000010000,
			0b1000010000,
			0b1000010000,
			0b1000010000,
			0b1001010000,
			0b0100100000,
			0b0011010000,
			0b0000000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1111000000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1111000000,
			0b1001000000,
			0b1001000000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0111000000,
			0b1000100000,
			0b1000100000,
			0b1000000000,
			0b1110000000,
			0b0011000000,
			0b0000100000,
			0b0000100000,
			0b1000100000,
			0b1000100000,
			0b0111000000,
		},
	}; // ################################################################################
	unsigned int characters_arial_4[][150] = {
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1111100000,
			0b0010000000,
			0b0010000000,
			0b0010000000,
			0b0010000000,
			0b0010000000,
			0b0010000000,
			0b0010000000,
			0b0010000000,
			0b0010000000,
			0b0010000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1000100000,
			0b1100100000,
			0b0111000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1000001000,
			0b1000001000,
			0b0100010000,
			0b0100010000,
			0b0100010000,
			0b0100010000,
			0b0010100000,
			0b0010100000,
			0b0010100000,
			0b0001000000,
			0b0001000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1000100010,
			0b1001100010,
			0b1001010010,
			0b0101010100,
			0b0101010100,
			0b0101010100,
			0b0101010100,
			0b0101010100,
			0b0101010100,
			0b0010001000,
			0b0010001000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0100010000,
			0b0010100000,
			0b0010100000,
			0b0001000000,
			0b0001000000,
			0b0001000000,
			0b0010100000,
			0b0010100000,
			0b0100010000,
			0b0100010000,
			0b1000001000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1000001000,
			0b0100010000,
			0b0100010000,
			0b0010100000,
			0b0010100000,
			0b0001000000,
			0b0001000000,
			0b0001000000,
			0b0001000000,
			0b0001000000,
			0b0001000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1111110000,
			0b0000010000,
			0b0000100000,
			0b0000100000,
			0b0001000000,
			0b0010000000,
			0b0010000000,
			0b0100000000,
			0b0100000000,
			0b1000000000,
			0b1111110000,
		},
		{
			0b0000000000,
			0b1100000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1100000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0010000000,
			0b0010000000,
			0b0010000000,
		},
		{
			0b0000000000,
			0b1100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b1100000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0010000000,
			0b0101000000,
			0b0101000000,
			0b0101000000,
			0b1000100000,
			0b1000100000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1111110000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1000000000,
			0b0100000000,
		},
	}; // ################################################################################
	unsigned int characters_arial_5[][150] = {
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0111000000,
			0b1001000000,
			0b0001000000,
			0b0111000000,
			0b1101000000,
			0b1001000000,
			0b1001000000,
			0b1111000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1110000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1110000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0110000000,
			0b1001000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1001000000,
			0b0110000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0001000000,
			0b0001000000,
			0b0001000000,
			0b0111000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b0111000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0110000000,
			0b1001000000,
			0b1001000000,
			0b1111000000,
			0b1000000000,
			0b1000000000,
			0b1001000000,
			0b0110000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0110000000,
			0b0100000000,
			0b0100000000,
			0b1110000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0111000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b0111000000,
			0b0001000000,
			0b1001000000,
			0b1110000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1110000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1000000000,
			0b0000000000,
			0b0000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
		},
		{
			0b0000000000,
			0b0100000000,
			0b0000000000,
			0b0000000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b1100000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1001000000,
			0b1010000000,
			0b1010000000,
			0b1110000000,
			0b1110000000,
			0b1010000000,
			0b1001000000,
			0b1001000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1111110000,
			0b1001001000,
			0b1001001000,
			0b1001001000,
			0b1001001000,
			0b1001001000,
			0b1001001000,
			0b1001001000,
		},
	}; // ################################################################################
	unsigned int characters_arial_6[][150] = {
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1110000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0110000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b0110000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1110000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1110000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0111000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b0111000000,
			0b0001000000,
			0b0001000000,
			0b0001000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1100000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0110000000,
			0b1001000000,
			0b1000000000,
			0b1100000000,
			0b0011000000,
			0b0001000000,
			0b1001000000,
			0b0110000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0100000000,
			0b0100000000,
			0b1110000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0110000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b1001000000,
			0b0111000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1000100000,
			0b1000100000,
			0b0101000000,
			0b0101000000,
			0b0101000000,
			0b0101000000,
			0b0010000000,
			0b0010000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1010100000,
			0b1010100000,
			0b1110100000,
			0b1110100000,
			0b1110100000,
			0b1110100000,
			0b0101000000,
			0b0101000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1000100000,
			0b0101000000,
			0b0101000000,
			0b0010000000,
			0b0010000000,
			0b0101000000,
			0b0101000000,
			0b1000100000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1000100000,
			0b1000100000,
			0b0101000000,
			0b0101000000,
			0b0010000000,
			0b0010000000,
			0b0010000000,
			0b0010000000,

		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1111100000,
			0b0000100000,
			0b0001000000,
			0b0010000000,
			0b0010000000,
			0b0100000000,
			0b1000000000,
			0b1111100000,
		},
	}; // ################################################################################
	unsigned int characters_arial_7[][150] = {
		{
			0b0000000000,
			0b0110000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b1000000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0110000000,
		},
		{
			0b0000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
			0b1000000000,
		},
		{
			0b0000000000,
			0b1000000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0010000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b0100000000,
			0b1100000000,
		},
		{
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b0000000000,
			0b1110000000,
			0b0011100000,
		},
	};
	int start = (int)(' ');
	if (index >= start && index < start + 13)
	{
		return characters_arial_0[index - start][y];
	}
	else if (index >= start + 13 && index < start + 13 * 2)
	{
		return characters_arial_1[index - (start + 13)][y];
	}
	else if (index >= start + 13 * 2 && index < start + 13 * 3)
	{
		return characters_arial_2[index - (start + 13 * 2)][y];
	}
	else if (index >= start + 13 * 3 && index < start + 13 * 4)
	{
		return characters_arial_3[index - (start + 13 * 3)][y];
	}
	else if (index >= start + 13 * 4 && index < start + 13 * 5)
	{
		return characters_arial_4[index - (start + 13 * 4)][y];
	}
	else if (index >= start + 13 * 5 && index < start + 13 * 6)
	{
		return characters_arial_5[index - (start + 13 * 5)][y];
	}
	else if (index >= start + 13 * 6 && index < start + 13 * 7)
	{
		return characters_arial_6[index - (start + 13 * 6)][y];
	}
	else if (index >= start + 13 * 7 && index < start + 13 * 8)
	{
		return characters_arial_7[index - (start + 13 * 7)][y];
	}
}

const int font_arial_width = 10;
const int font_arial_height = 15;