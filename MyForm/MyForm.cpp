#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
	//Базовые настройки формы
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//Запуск формы
	snake10::MyForm form;
	Application::Run(% form);
}

// 2Д пространство
struct Vector2 {int X, Y;};

Vector2 direction; //направление змейки
Vector2 positionFruit; //кординаты фрукта
Vector2 gameArea; //игровая зона

//коструктор формы
snake10::MyForm::MyForm(void)
{
	InitializeComponent();

	//размер игровой зоны
	gameArea.X = 650;
	gameArea.Y = 500;

	firstLaunch = true;  //первый запуск
	NewGame();           //новая игра

}

//реализация действия игры
void snake10::MyForm::GeneratePositionFruit()
{
	//гениратор места кординат фрукта
	Random^ rand = gcnew Random();
	positionFruit.X = rand->Next(20, gameArea.X);//с лева
	positionFruit.Y = rand->Next(100, gameArea.Y);//от верха

	//отличие кординат фрукта и змейки
	for (int i = 0; i < score; i++) 
	{
		if (positionFruit.X == Serpens[i]->Location.X &&
			positionFruit.Y == Serpens[i]->Location.Y)
			GeneratePositionFruit();
	}

	//значение кратное шагу
	int tempX = positionFruit.X % step;
	positionFruit.X -= tempX;

	int tempY = positionFruit.Y % step;
	positionFruit.Y -= tempY;

	//задаем кординаты фрукту
	fruit->Location = Point(positionFruit.X, positionFruit.Y);

	//добавляем на поле
	this->Controls->Add(fruit);
}

void snake10::MyForm::Eating()
{
	//сравнение головы змейки и фрукта
	if (Serpens[0]->Location.X == positionFruit.X && Serpens[0]->Location.Y == positionFruit.Y) {
		labelScore->Text = "Счет: " + ++score;

		//добавляем новый элимент змейке
		Serpens[score] = gcnew PictureBox();
		Serpens[score]->Location = Point(Serpens[score - 1]->Location.X + step * direction.X, Serpens[score - 1]->Location.Y - step * direction.Y);
		Serpens[score]->BackColor = Color::Red;
		Serpens[score]->Width = step;
		Serpens[score]->Height = step;
		this->Controls->Add(Serpens[score]);

		GeneratePositionFruit();
	}
}

void snake10::MyForm::Movement()
{
	//делаем из змейки паравозик
	for (int i = score; i >= 1; i--) {
		Serpens[i]->Location = Serpens[i - 1]->Location;
	}
	Serpens[0]->Location = Point(Serpens[0]->Location.X + direction.X * step, Serpens[0]->Location.Y + direction.Y * step);
}

void snake10::MyForm::EatYourself()
{
	//проверка на врезание змейки в себя
	for (int i = 1; i < score; i++) 
	{
		if (Serpens[0]->Location == Serpens[i]->Location) 
		{
			GameOver();
		}
	}
}

void snake10::MyForm::GameOver()
{
	play = true;
	die = true;

	labelGameOver->Visible = true;
}

void snake10::MyForm::NewGame()
{
	//проверка на запуск игры
	if (!firstLaunch) {
		this->Controls->Remove(fruit);

		for (int i = 0; i <= score; i++)
		{
			this->Controls->Remove(Serpens[i]);
		}

		score = 0;
	}
	else
		firstLaunch = false;

	//змейка
	Serpens = gcnew array <PictureBox^, 1>(400);
	Serpens[0] = gcnew PictureBox(); //голова
	Serpens[0]->Location = Point(200, 200);
	Serpens[0]->BackColor = Color::Green;//цвет головы
	Serpens[0]->Width = step;
	Serpens[0]->Height = step;

	score = 0;
	this->Controls->Add(Serpens[0]);

	//фрукт
	fruit = gcnew PictureBox();
	fruit->BackColor = Color::DarkOrange;
	fruit->Width = step;
	fruit->Height = step;
	GeneratePositionFruit();

	//скорость змейки и таймер
	timer->Interval = updateInterval;
	timer->Start();

	//направление при старте
	direction.X = 1;
	direction.Y = 0;

	//можно играть
	play = true;
	die = false;

	labelScore->Text = "Счет: 0";

	//прячем лишнее
	labelGameOver->Visible = false;
	groupBoxSettings->Visible = false;
}

void snake10::MyForm::ChackBorders()
{
	if (Serpens[0]->Location.X >= Border2->Location.X || Serpens[0]->Location.X <= Border4->Location.X) {

		GameOver();
	}

	if (Serpens[0]->Location.Y <= Border1->Location.Y || Serpens[0]->Location.Y >= Border3->Location.Y) {
		//direction.Y *= -1;//
		GameOver();
	}


	labelCoordinatesSnake->Text = "Кординаты змейки: (" + Convert::ToString(Serpens[0]->Location.X) + ", " + Convert::ToString(Serpens[0]->Location.Y) + ")";
}


//реализация событий
System::Void snake10::MyForm::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void snake10::MyForm::информацияОИгреToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Правила игры:\n1. Для управления использовать стрелки\n2.Кушайте фрукты\n3.Не врезаться в себя и стенку!");
	return System::Void();
}

System::Void snake10::MyForm::новаяИграToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewGame();
	return System::Void();
}

System::Void snake10::MyForm::паузапродолжитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (play) 
	{
		play = false;
	}
	else
	{
		play = true;
		timer->Start();
	}

	return System::Void();
}

System::Void snake10::MyForm::настройкиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (groupBoxSettings->Visible == false) 
	{
		//пауза
		play = false;

		buttonSpeed->Enabled = true;
		numericUpDown->Enabled = true;
		groupBoxSettings->Visible = true;
	}
	else 
	{
		//запуск
		play = true;
		timer->Start();

		buttonSpeed->Enabled = false;
		numericUpDown->Enabled = false;
		groupBoxSettings->Visible = false;
	}
}

System::Void snake10::MyForm::buttonSpeed_Click(System::Object^ sender, System::EventArgs^ e)
{
	updateInterval = Convert::ToSingle(numericUpDown->Value);
	timer->Interval = updateInterval;

	buttonSpeed->Enabled = false;
	numericUpDown->Enabled = false;
	groupBoxSettings->Visible = false;

	//Запускаем игру
	play = true;
	timer->Start();

	return System::Void();
}

System::Void snake10::MyForm::менюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void snake10::MyForm::GameForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	//управление змейкой
	if (e->KeyCode.ToString() == "Right") 
	{
		direction.X = 1;
		direction.Y = 0;
	}
	else if (e->KeyCode.ToString() == "Left")
	{
		direction.X = -1;
		direction.Y = 0;
	}
	else if (e->KeyCode.ToString() == "Up") 
	{
		direction.Y = -1;
		direction.X = 0;
	}
	else if (e->KeyCode.ToString() == "Down") 
	{
		direction.Y = 1;
		direction.X = 0;
	}

	return System::Void();
}

void snake10::MyForm::GameForm_Update(Object^ obgect, EventArgs^ e)
{
	if (!die && play) 
	{
		//змейка движение
		Movement();

		Eating();      //проверка, сьели фрукт
		EatYourself(); //сьел себя
		ChackBorders();//столкновение стена
	}
	else if (die && play) {
		timer->Stop();
		MessageBox::Show("Игра окончена!", "Внимание!");
	}
	else if (!play && !die) {
		timer->Stop();
		MessageBox::Show("Игра приастановлена!", "Внимание!");
	}
}

