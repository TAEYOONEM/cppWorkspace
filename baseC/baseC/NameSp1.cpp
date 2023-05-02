# include <iostream>

namespace BestComImpl {
	void SimpleFunc() {
		std::cout << "BestCom" << std::endl;
	}
}

namespace ProgComImpl {
	void SimpleFunc() {
		std::cout << "ProgCom" << std::endl;
	}
}

int main() {
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
}