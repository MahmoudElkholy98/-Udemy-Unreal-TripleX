#include <iostream>

void GameIntro(int Diffeculty);
bool GamePlay();

int main() {

	int LevelDifficulty = 1;
	bool IsHacking = true;

	while (IsHacking) {
		GameIntro(LevelDifficulty);
		IsHacking = GamePlay();

		LevelDifficulty++;
	}

	return 0;
}

void GameIntro(int Diffeculty) {
	std::cout << "\n\n#########################################################################################\n";
	std::cout << "You are a brilliant detective breaking into a {level " << Diffeculty << "} secure server room" << std::endl;
	std::cout << "Enter the correctto code to continue...\n";	
	std::cout << "#########################################################################################\n\n";
}

bool GamePlay() {

	int FirstCode = 4;
	int SecondCode = 3;
	int ThirdCode = 2;

	int CodeSum = FirstCode + SecondCode + ThirdCode;
	int CodeProduct = FirstCode * SecondCode * ThirdCode;
	
	std::cout << "+ There are 3 numbers in the code" << std::endl;
	std::cout << "+ The codes add-up to: " << CodeSum << std::endl;
	std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl << std::endl;

	int PlayerGuessA;
	int PlayerGuessB;
	int PlayerGuessC;

	int PlayerGuessSum;
	int PlayerGuessProduct;

	std::cin >> PlayerGuessA >> PlayerGuessB >> PlayerGuessC;

	PlayerGuessSum = PlayerGuessA + PlayerGuessB + PlayerGuessC;
	PlayerGuessProduct = PlayerGuessA * PlayerGuessB * PlayerGuessC;

	if (PlayerGuessSum == CodeSum && PlayerGuessProduct == CodeProduct) {
		std::cout << "\nYou broke the server's successfully and accomplished your mission!";
		return true;
	}
	else {
		std::cout << "\nYOU DIED!!\n";
		return false;
	}
}