#include <iostream>

void GameIntro(int Level);
bool GamePlay(int Difficulty);

int main() {

	int Level = 1;
	int Difficulty = 4;

	bool IsHacking = true;

	while (IsHacking) {
		GameIntro(Level);
		IsHacking = GamePlay(Difficulty);

		Level++;

		if (Level % 5 == 0) {
			Difficulty++;
		}
	}

	return 0;
}

void GameIntro(int Level) {
	std::cout << "\n\n#########################################################################################\n";
	std::cout << "You are a brilliant detective breaking into a {level " << Level << "} secure server room" << std::endl;
	std::cout << "Enter the correctto code to continue...\n";	
	std::cout << "#########################################################################################\n\n";
}

bool GamePlay(int Difficulty) {

	int FirstCode = rand() % Difficulty;
	int SecondCode = rand() % Difficulty;
	int ThirdCode = rand() % Difficulty;

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
		std::cout << "\nYou broke the server's successfully and got all the top secret files now hurry and get out of there!!";
		return true;
	}
	else {
		std::cout << "\nYou entered the wrong code and set off the alarms, your sacrifice will be remembered!\n";
		return false;
	}
}