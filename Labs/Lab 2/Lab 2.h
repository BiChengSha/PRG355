namespace Gates {
	inline bool AND(int bit1, int bit2) {
		bool result = bit1&bit2;
		return result;
	}

	inline bool OR(int bit1, int bit2) {
		bool result = bit1|bit2;
		return result;
	}
	
	inline bool NAND(int bit1, int bit2) {
		bool result = !(bit1&bit2);
		return result;
	}

	inline bool NOR(int bit1, int bit2) {
		bool result = !(bit1|bit2);
		return result;
	}
	
	inline bool XOR(int bit1, int bit2) {
		bool result = bit1^bit2;
		return result;
	}
}